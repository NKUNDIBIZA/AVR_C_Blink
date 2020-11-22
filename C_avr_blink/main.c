/*
 * C_avr_blink.c
 *
 * Created: 11/21/2020 8:57:04 PM
 * Author : NKUNDIBIZA
 */ 

#define F_CPU 4000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD = 0xFF; // PORTD is output
	
    
    while (1) 
    {
		PORTD = 0b11111110;
		_delay_ms(1000);
		PORTD = 0b11111101;
		_delay_ms(1000);
		
    }
}

