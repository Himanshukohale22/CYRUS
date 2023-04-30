#include <Arduino.h>
#include <wire.h>
#include "SD.h"
#include "Adafruit_BMP085.h"
#include "Adafruit_MPU6050.h"
#include "Adafruit_Sensor.h"



 // #define startled 
Adafruit_BMP085 bmp;
Adafruit_MPU6050 mpu;





#define buzzer 0;
#define red 4;
#define blue 9;
#define green 10;
#define pyro_channel_1 6;
#define pyro_channel_2 7;
const int chipSelect= 4;

// Adafruit_BMP085 Altitude ; setting default altitide to sea level 



void setup() {
  pinMode(4,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(0,OUTPUT);
  digitalWrite(0,HIGH);
  
  digitalWrite(0,LOW);
  digitalWrite(0,HIGH);
  digitalWrite(0,LOW);
  Serial.begin(115200);
  SD.begin(chipSelect);



  while (!Serial)
  {
    delay(100);
  }
  
  if (!bmp.begin()) {
	Serial.println("Could not find a valid BMP085/BMP180 sensor, check connections!");
	while (1) {}
  }

  if (!mpu.begin())
  {
    Serial.println("failed to connect mpu");
    while (1)
    {
      delay(100);
    }
    
  }
  Serial.println("mpu found");
  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  Serial.print("Accelorometer range set to: ");
  switch (mpu.getAccelerometerRange())
  {
  case MPU6050_RANGE_2_G:
    Serial.println("+-2G");
    break;
  case MPU6050_RANGE_4_G:
  Serial.println("+-4G");
  break;
  case MPU6050_RANGE_8_G:
  Serial.println("+-8G");
  break;
  case MPU6050_RANGE_16_G:
  Serial.println("+-16G");
  break;

  }

mpu.setGyroRange(MPU6050_RANGE_500_DEG);
Serial.print("gyro range set to:");
switch (mpu.getGyroRange())
{
case MPU6050_RANGE_250_DEG:
Serial.println("+-250 deg/s");
  break;
case MPU6050_RANGE_500_DEG:
Serial.println("+-500 deg/s");
break;
case MPU6050_RANGE_1000_DEG:
Serial.println("+-1000d deg/s");
break;
case MPU6050_RANGE_2000_DEG:
Serial.println("+- 2000 deg/s");
break;
}
mpu.setFilterBandwidth(MPU6050_BAND_5_HZ);
  Serial.print("Filter bandwidth set to: ");
  switch (mpu.getFilterBandwidth()) {
  case MPU6050_BAND_260_HZ:
    Serial.println("260 Hz");
    break;
  case MPU6050_BAND_184_HZ:
    Serial.println("184 Hz");
    break;
  case MPU6050_BAND_94_HZ:
    Serial.println("94 Hz");
    break;
  case MPU6050_BAND_44_HZ:
    Serial.println("44 Hz");
    break;
  case MPU6050_BAND_21_HZ:
    Serial.println("21 Hz");
    break;
  case MPU6050_BAND_10_HZ:
    Serial.println("10 Hz");
    break;
  case MPU6050_BAND_5_HZ:
    Serial.println("5 Hz");
    break;
  }

  Serial.println("");
  delay(100);
}

void loop() {
  digitalWrite(2,HIGH); 
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(100);

  String dataString = "";
   
  Serial.print("Pressure = ");
  Serial.print(bmp.readPressure());
  Serial.println(" Pa");
  dataString+=String(bmp.readPressure());



  Serial.print("altitude = ");
  Serial.print(bmp.readAltitude());
  Serial.println(" *m");
  dataString+=String(bmp.readAltitude());
  
  sensors_event_t a, g, temp;               //mpu
  mpu.getEvent(&a, &g , &temp);

  Serial.print("Acceleration X: ");
  Serial.print(a.acceleration.x);
  Serial.print(", Y: ");
  Serial.print(a.acceleration.y);
  Serial.print(", Z: ");
  Serial.print(a.acceleration.z);
  Serial.println(" m/s^2");
  dataString+=String(mpu.getAccelerometerRange());

  Serial.print("Rotation X: ");
  Serial.print(g.gyro.x);
  Serial.print(", Y: ");
  Serial.print(g.gyro.y);
  Serial.print(", Z: ");
  Serial.print(g.gyro.z);
  Serial.println(" rad/s");
  dataString+=String(mpu.getGyroRange());



  Serial.println("");
  File datafile = SD.open("readings.txt",FILE_WRITE);
  delay(500);

}