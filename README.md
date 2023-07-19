# Thrust Vector Control Rockets
---

![67b2a9ba5e85822f237caae92111e938](https://github.com/Himanshukohale22/CYRUS/assets/114358863/dfa94541-3bb5-4649-9c6f-fd42d23f7af1)

This repository contains hardware files,speciifcation of board,firmware/software parts of TVC Rocketry.



SPECIFICATION OF TVC FLIGHT COMPUTER:
---
* small flight computer board 8.2*5 cm .
* stm32f4xc on board micro-controller 
  *   ARM ®32-bit Cortex ®M4 CPU with FPU
  *   Adaptive real-time accelerator allowing 0-wait state execution
  *   Up to 512 Kbytes of Flash memory 128 Kbytes of SRAM
  *   operating frequency of 100MHz.

* on board power supply 
  * usb b micro (mobile charger).
  *  exteral JSt connector (12v battery).
* sensors 
  * barometer (BMP280).
  * gyroscope & accelerometer (MPU6050). 
  * sd card 
  * rf (NRF24L)

* Digital-output triple-axis accelerometer  
* a programmable full scale rangeof ±2g,±4g,±8g and ±16g. 6-axis (DOF)accelerometer 
* gyroscop Digital-output  X-,  Y-, z-axis
* angular rate sensors with user-programmable full-scale range of ±250, ±500, ±1000, and ±2000°/sec.
* bmp280: pressure and altitude unit

Schematics 
---

main sheet

![image](https://user-images.githubusercontent.com/114358863/235372734-b6e45243-743a-45ab-8b5c-507768e8c4f7.png)

extra sheet

![image](https://user-images.githubusercontent.com/114358863/235372747-855d1a0d-e5c7-4e42-acaa-9c87ecd98d7d.png)


FRONT SIDE 
---
![Annotation 2023-05-10 005105](https://github.com/Himanshukohale22/CYRUS/assets/114358863/7027e85a-7e39-4c4d-8662-5243c76c4fda)

BACK SIDE

![Annotation 2023-05-10 005200](https://github.com/Himanshukohale22/CYRUS/assets/114358863/19e55434-8de7-4ab1-9373-bb3291f6b322)


PROTOTYPE:
---
![image](https://user-images.githubusercontent.com/114358863/235375112-aaeffe35-05db-4942-b74b-6dc5b5e7b0a1.png)



simulator/manufacturing :
---
![image](https://user-images.githubusercontent.com/114358863/235372801-556c1896-745d-46e7-9928-b742bed9c596.png)

TOOLS & REFERENCE:
---
> [kicad](https://www.kicad.org/)

> [stm32cubeIDE](https://www.st.com/en/development-tools/stm32cubeide.html)


> [stm32f411](https://www.st.com/resource/en/datasheet/stm32f411re.pdf)

> [MPU6050](https://invensense.tdk.com/wp-content/uploads/2015/02/MPU-6000-Datasheet1.pdf)

> [BMP280](https://cdn-shop.adafruit.com/datasheets/BST-BMP280-DS001-11.pdf)

> [NRF24](https://www.sparkfun.com/datasheets/Components/SMD/nRF24L01Pluss_Preliminary_Product_Specification_v1_0.pdf)

> [BUILTIN MICRO SD CARD](https://components101.com/modules/micro-sd-card-module-pinout-features-datasheet-alternatives)

> [NRFZ44N](https://pdf1.alldatasheet.com/datasheet-pdf/view/17807/PHILIPS/IRFZ44N.html)


FUTURE WORK:
---

* High speed on board microcontroller (f7,f8)
* High precision and accuracy IMU and BAROMETER 
* NRF modules update.
* Testing tools.
* stabilizer servo module.

