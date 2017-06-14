// BlinkM Library
// Muthanna A. Attyah (May 2017)
// Please feel free to copy and use code.
// Device data sheet https://thingm.com/fileadmin/thingm/downloads/BlinkM_datasheet.pdf

// How the BlinkM is connected to Curiosity HPC Board:
/**
BlankM  Click   Curiosity HPC
-------------------------------------
I2C C   SCL     RC4     - I2C clock
I2C D   SDA     RC3     - I2C data
PWR-    GND     GND     - Ground
PWR+    +5V     +5V     - Power supply
-------------------------------------

**/

#ifndef _BlinkM_H
#define _BlinkM_H

#ifndef MCC_H
#include "mcc_generated_files/mcc.h"
#endif



// BlinkM I2C Address
#define Slave_Adr           0x74    // Slave device I2C address

 

bool WriteReg( uint8_t reg, uint8_t data);            

#endif