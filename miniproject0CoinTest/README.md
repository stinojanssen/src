# elecanisms2020
Stijn Janssen and Adrian Botran
Elecanisms 2020 mini project 0
date: 1/28/2020

1.CODE EXPLANATION

-->see cointest.c file with comments in it for clarification of the code.

2.COIN MACHINE SETUP

--> Use coin machine datasheet to train the machine to receive pennies and set the machine to output a signal called P1 (=a pulse with a certain length).

3.BOARD SETUP

--> The barrel jack provides 12V DC to the board
--> The coin machine's red wire is connected to Vin and the black wire is connected to GND (Ground).
--> The coin machine's white signal wire is plugged into the Digital pin D0 and connected (through a breadboard) to a pull up resistor (10kOhm) which is connected to VDD.

4.UPLOAD CODE TO BOARD

--> Go to src>bootloader>software and run bootloadergui.py and import cointest.hex and write on to the board and run it.
