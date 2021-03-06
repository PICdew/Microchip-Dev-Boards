/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.15.1
        Device            :  PIC16F1829
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA2 aliases
#define IO_RA2_TRIS               TRISAbits.TRISA2
#define IO_RA2_LAT                LATAbits.LATA2
#define IO_RA2_PORT               PORTAbits.RA2
#define IO_RA2_WPU                WPUAbits.WPUA2
#define IO_RA2_ANS                ANSELAbits.ANSA2
#define IO_RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_RA2_GetValue()           PORTAbits.RA2
#define IO_RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_RA2_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define IO_RA2_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define IO_RA2_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define IO_RA2_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED_DS1 aliases
#define LED_DS1_TRIS               TRISCbits.TRISC0
#define LED_DS1_LAT                LATCbits.LATC0
#define LED_DS1_PORT               PORTCbits.RC0
#define LED_DS1_WPU                WPUCbits.WPUC0
#define LED_DS1_ANS                ANSELCbits.ANSC0
#define LED_DS1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LED_DS1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LED_DS1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LED_DS1_GetValue()           PORTCbits.RC0
#define LED_DS1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LED_DS1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define LED_DS1_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define LED_DS1_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define LED_DS1_SetAnalogMode()  do { ANSELCbits.ANSC0 = 1; } while(0)
#define LED_DS1_SetDigitalMode() do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set LED_DS2 aliases
#define LED_DS2_TRIS               TRISCbits.TRISC1
#define LED_DS2_LAT                LATCbits.LATC1
#define LED_DS2_PORT               PORTCbits.RC1
#define LED_DS2_WPU                WPUCbits.WPUC1
#define LED_DS2_ANS                ANSELCbits.ANSC1
#define LED_DS2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LED_DS2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LED_DS2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LED_DS2_GetValue()           PORTCbits.RC1
#define LED_DS2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LED_DS2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LED_DS2_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define LED_DS2_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define LED_DS2_SetAnalogMode()  do { ANSELCbits.ANSC1 = 1; } while(0)
#define LED_DS2_SetDigitalMode() do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set LED_DS3 aliases
#define LED_DS3_TRIS               TRISCbits.TRISC2
#define LED_DS3_LAT                LATCbits.LATC2
#define LED_DS3_PORT               PORTCbits.RC2
#define LED_DS3_WPU                WPUCbits.WPUC2
#define LED_DS3_ANS                ANSELCbits.ANSC2
#define LED_DS3_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LED_DS3_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LED_DS3_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LED_DS3_GetValue()           PORTCbits.RC2
#define LED_DS3_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LED_DS3_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LED_DS3_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define LED_DS3_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define LED_DS3_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define LED_DS3_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set LED_DS4 aliases
#define LED_DS4_TRIS               TRISCbits.TRISC3
#define LED_DS4_LAT                LATCbits.LATC3
#define LED_DS4_PORT               PORTCbits.RC3
#define LED_DS4_WPU                WPUCbits.WPUC3
#define LED_DS4_ANS                ANSELCbits.ANSC3
#define LED_DS4_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LED_DS4_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LED_DS4_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LED_DS4_GetValue()           PORTCbits.RC3
#define LED_DS4_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LED_DS4_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LED_DS4_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define LED_DS4_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define LED_DS4_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define LED_DS4_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/