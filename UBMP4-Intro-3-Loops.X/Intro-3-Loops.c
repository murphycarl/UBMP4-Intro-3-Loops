/*==============================================================================
 Project: Intro-3-Loops
 Date:    May 16, 2021
 
 This example program demonstrates the use of while and for loop structures to
 change the brightness of LEDs using PWM (Pulse-Width Modulated) signals.
 
 Additional program analysis and programming activities expand the use of loops
 to create tones of different pitches and frequency sweeps.
==============================================================================*/

#include    "xc.h"              // Microchip XC8 compiler include file
#include    "stdint.h"          // Include integer definitions
#include    "stdbool.h"         // Include Boolean (true/false) definitions

#include    "UBMP4.h"           // Include UBMP4 constants and functions

// TODO Set linker ROM ranges to 'default,-0-7FF' under "Memory model" pull-down.
// TODO Set linker code offset to '800' under "Additional options" pull-down.

// Program variable definitions
unsigned char TonLED4 = 127;    // LED brightness PWM value
unsigned char PWMperiod;        // PWM period counter for PWM loops
unsigned int period = 460;      // Sound period value for later activities

int main(void)
{
    OSC_config();               // Configure internal oscillator for 48 MHz
    UBMP4_config();             // Configure on-board UBMP4 I/O devices
	
    while(1)
	
          
          
          
          
            {
            BEEPER = !BEEPER;
            for(unsigned int p = period; p != 0; p--);
          }
























        
        // Activate bootloader if SW1 is pressed.
        if(SW1 == 0)
        {
            RESET();
        }
    }
}

