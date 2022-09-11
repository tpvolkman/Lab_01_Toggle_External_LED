/*
 *	Toggle_Uno_LED.c
 * 
 *	Author: Professor Volkman
 *  Description: This application toggles the LED on the UNO Development Board
 */

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= 0x20;				// (1 << DDB5)
	DDRC |= 0x01;

	while (1)
	{
		if (( PINB & 0x20 ) == 0x20 )
		{
			PORTB &= ~( 0x20 );
			PORTC |= 0x01;
		}
		else
		{
			PORTB |= 0x20;
			PORTC &= ~( 0x01 );
		}

		_delay_ms( 500 );
	}
}

