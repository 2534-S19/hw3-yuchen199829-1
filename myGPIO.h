/*
 * myGPIO.h
 *
 *  Created on:
 *      Author:
 *
 */

#ifndef MYGPIO_H_
#define MYGPIO_H_

#define BUTTOM1 BIT1
#define BUTTOM2 BIT4
#define BUTTOM3 BIT5
#define BUTTOM4 BIT1

#define LED1on P1OUT = P1OUT | (BIT0)
#define LED1off P1OUT = P1OUT & ~ (BIT0)
#define LEDRon P2OUT = P2OUT | (BIT0)
#define LEDRoff P2OUT = P2OUT & ~ (BIT0)
#define LEDGon P2OUT = P2OUT | (BIT1)
#define LEDGoff P2OUT = P2OUT & ~ (BIT1)
#define LEDBon P2OUT = P2OUT | (BIT2)
#define LEDBoff P2OUT = P2OUT & ~ (BIT2)
#define LEDR2on P2OUT = P2OUT | (BIT6)
#define LEDR2off P2OUT = P2OUT & ~ (BIT6)
#define LEDG2on P2OUT = P2OUT | (BIT4)
#define LEDG2off P2OUT = P2OUT & ~ (BIT4)
#define LEDB2on P5OUT = P5OUT | (BIT6)
#define LEDB2off P5OUT = P5OUT & ~ (BIT6)

// This function initializes the peripherals used in the program.
void initGPIO();
// This function returns the value of Launchpad S1.
unsigned char checkStatus_LaunchpadS1();
// This function returns the value of Launchpad S2.
unsigned char checkStatus_LaunchpadS2();
// This function returns the value of Boosterpack S1.
unsigned char checkStatus_BoosterpackS1();
// This function returns the value of Boosterpack S2.
unsigned char checkStatus_BoosterpackS2();
// This function turns on Launchpad LED1.
void turnOn_LaunchpadLED1();
// This function turns off Launchpad LED1.
void turnOff_LaunchpadLED1();
// This function turns on Launchpad Red LED2.
void turnOn_LaunchpadLED2Red();
// This function turns off Launchpad Red LED2.
void turnOff_LaunchpadLED2Red();
// This function turns on Launchpad Blue LED2.
void turnOn_LaunchpadLED2Blue();
// This function turns off Launchpad Blue LED2.
void turnOff_LaunchpadLED2Blue();
// This function turns on Launchpad Green LED2.
void turnOn_LaunchpadLED2Green();
// This function turns off Launchpad Green LED2.
void turnOff_LaunchpadLED2Green();
// This function turns on Boosterpack Red LED.
void turnOn_BoosterpackLEDRed();
// This function turns off Boosterpack Red LED.
void turnOff_BoosterpackLEDRed();
// This function turns on Boosterpack Green LED.
void turnOn_BoosterpackLEDGreen();
// This function turns off Boosterpack Green LED.
void turnOff_BoosterpackLEDGreen();
// This function turns on Boosterpack Blue LED.
void turnOn_BoosterpackLEDBlue();
// This function turns off Boosterpack Blue LED.
void turnOff_BoosterpackLEDBlue();

// TODO: Define any constants that are local to myGPIO.c using #define


#endif /* MYGPIO_H_ */
