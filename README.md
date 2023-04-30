# Thrust Vector Control
TCV rocketry 

![image](https://user-images.githubusercontent.com/114358863/235373234-06cd2e86-50fa-4c70-94b3-b0c7fce61e10.png)


This repository contains hardware design and code for TVC model rocketry.


SPECIFICATION OF TVC FLIGHT COMPUTER:

- Small form fator of 8*5cm flight computer

- ON BOARD Controller 

Core: ARM
®32-bit Cortex
®M4 CPU with FPU, Adaptive real-time accelerator (ART
Accelerator™) allowing 0-wait state execution
from Flash memory, frequency up to 100 MHz, memory protection unit, and DSP instructions
Memories
Up to 512 Kbytes of Flash memory
128 Kbytes of SRAM
Clock, reset and supply management
1.7 V to 3.6 V application supply and I/Os
POR, PDR, PVD and BOR
4-to-26 MHz crystal oscillator
Internal 16 MHz factory-trimmed RC
32 kHz oscillator for RTC with calibration
Internal 32 kHz RC with calibration

- SENSORS:

 >mpu6050: inertial mesurment unit

 accelerometer specs

 Digital-output  triple-axis  accelerometer  with  a  programmable  full  scale  rangeof ±2g, ±4g,  ±8gand ±16g. 6-axis (DOF) accelerometer 

 gyroscope
 Digital-output  X-,  Y-,  and  Z-Axis  angular  rate  sensors  (gyroscopes)  with  a user-programmable  full-scale range of ±250, ±500, ±1000, and ±2000°/sec

>bmp280: pressure and altitude unit

BOARD POWER SUPPLY

external power supply with lipo 12v battery




ROCKET TRUST VECTONING :

![image](https://user-images.githubusercontent.com/114358863/234672675-fe9574e3-3684-47cb-9889-756ffe2bad4f.png)


PCB:
schematics:
main sheet

![image](https://user-images.githubusercontent.com/114358863/235372734-b6e45243-743a-45ab-8b5c-507768e8c4f7.png)

extra sheet

![image](https://user-images.githubusercontent.com/114358863/235372747-855d1a0d-e5c7-4e42-acaa-9c87ecd98d7d.png)


pcb layout:

![image](https://user-images.githubusercontent.com/114358863/228625542-4a604663-deae-479f-a16a-000b9121d37b.png)

3D:
FRONT SIDE 

![image](https://user-images.githubusercontent.com/114358863/235372622-71f211ad-3e45-4487-85d1-97b95f593181.png)

BACK SIDE

![image](https://user-images.githubusercontent.com/114358863/235372632-ec3192f5-4df8-441e-aa87-60b0faa5809b.png)


PROTOTYPE:

![image](https://user-images.githubusercontent.com/114358863/235375112-aaeffe35-05db-4942-b74b-6dc5b5e7b0a1.png)



simulator/manufacturing :

![image](https://user-images.githubusercontent.com/114358863/235372801-556c1896-745d-46e7-9928-b742bed9c596.png)


DEVELOPER TOOLS:

>kicad :
https://www.kicad.org/

>stm32cubeIDE:
https://www.st.com/en/development-tools/stm32cubeide.html

DATASHEETS:

>stm32f411:
https://www.st.com/resource/en/datasheet/stm32f411re.pdf

>MPU6050:
https://invensense.tdk.com/wp-content/uploads/2015/02/MPU-6000-Datasheet1.pdf

>BMP280:
https://cdn-shop.adafruit.com/datasheets/BST-BMP280-DS001-11.pdf

>NRF24:
https://www.sparkfun.com/datasheets/Components/SMD/nRF24L01Pluss_Preliminary_Product_Specification_v1_0.pdf

>BUILTIN MICRO SD CARD:
https://components101.com/modules/micro-sd-card-module-pinout-features-datasheet-alternatives

>NRFZ44N:
https://pdf1.alldatasheet.com/datasheet-pdf/view/17807/PHILIPS/IRFZ44N.html





