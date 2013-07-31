/* Name: main.c
 * Author: <insert your name here>
 * Copyright: <insert your copyright message here>
 * License: <insert your license reference here>
 */

#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
    DDRB=0xFF; //all pins of PORTB declared as output
    PORTB=0x00;
    while(1)
    {
        //TODO::
        PORTB=0xFF;  //High State
        _delay_ms(200); //delay
        PORTB=0x00;
        _delay_ms(200); //delay
    }
}