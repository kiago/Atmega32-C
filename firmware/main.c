// C-program ATmega32 : OPENUSB
//  LED on/off
// with SWITCHES
// 

#include <avr/io.h>     // avr header file for IO ports
#include <stdio.h>

int main(void){
    unsigned char i; // temporary variable
    
    DDRC = 0x00;    // set PORTC for input
    DDRB = 0xFF;    // set PORTB for output
    
    PORTB = 0x00;   // turn ON all LEDs initially
    PORTC = 0XFF;   //
    while(1){
        // Send output to PORTB.
        // This port will be connected to the 8 LEDs
        i = PINC; // i take switches data
        PORTB = i;  //and LEDs data take i !
    } 
    return 1; 
}