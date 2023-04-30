# Thrust Vector Control
This is TCV rocketry flight computer


TVC roketry is thrust vectoring controll rocket design.
By the help of cad design and some best electronics selection,
TCV rocket can be made.
In this cyrus computer the on board computer is stm32f4 series microcontroller which has 100MHz operating frequency.
for fast and crusial data collection , controlling pyro cannels and thurst vestors motors.
with the help of baromatric sensor (bmp280) , inertial mesurment unit (mpu6050) , and RF module (nrf24).

Specification:
On board chip of controller is STM32F4XC high performance microcontroller.
Board contains gyroscope and accelorometer for flight controlling and PID motion.
A pressure/altitude sensor is present on the board.
Two pyro channels are present on board for parachute deployment in regular mode and other in emergency  mode.


Hardware design:
STM32F411xc main controller.
mpu6050 gyroscope and accelorometer sensor.
bmp280 pressure and altitude sensor.
irfz44n n-channel MOSFET for pyro channels.
Inbuilt SD card module.
nrf24 RF module for on board communicaton between base station and flight ROCEKT.

ROPCKET TRUST VECTONING :


![image](https://user-images.githubusercontent.com/114358863/234672675-fe9574e3-3684-47cb-9889-756ffe2bad4f.png)



PCB:
schematics:

![image](https://user-images.githubusercontent.com/114358863/228625339-4cfda51d-0b30-43d8-ae76-43d06488084f.png)

pcb layout:

![image](https://user-images.githubusercontent.com/114358863/228625542-4a604663-deae-479f-a16a-000b9121d37b.png)

3D:

![image](https://user-images.githubusercontent.com/114358863/228625690-86181987-690b-4276-82c6-36ccd375a947.png)



developer tools:

kicad 

https://www.kicad.org/

stm32cubeIDE

https://www.st.com/en/development-tools/stm32cubeide.html

datasheet:

stm32f411 

https://www.st.com/resource/en/datasheet/stm32f411re.pdf

MPU6050

https://invensense.tdk.com/wp-content/uploads/2015/02/MPU-6000-Datasheet1.pdf

BMP280

https://cdn-shop.adafruit.com/datasheets/BST-BMP280-DS001-11.pdf

NRF24

https://www.sparkfun.com/datasheets/Components/SMD/nRF24L01Pluss_Preliminary_Product_Specification_v1_0.pdf

BUILTIN MICRO SD CARD

https://components101.com/modules/micro-sd-card-module-pinout-features-datasheet-alternatives

NRFZ44N

https://pdf1.alldatasheet.com/datasheet-pdf/view/17807/PHILIPS/IRFZ44N.html

