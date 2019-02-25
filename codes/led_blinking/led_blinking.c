#define F_CPU 16000000UL
#include<avr/io.h>
#include<util/delay.h>

void main()
{
DDRB=0xFF;
while(1)
{
PORTB=0xAA;
_delay_ms(1000);
PORTB=0x55;
_delay_ms(1000);
}
}
