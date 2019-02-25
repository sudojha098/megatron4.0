#include<avr/io.h>
#include <util/delay.h> 
#include "uart.h"
void main()
{
    DDRB=0b00001111;
	 uart_init(); //115200	bits/sec								
	_delay_ms(100);
	PORTB=0b00000001;
 while(1)
  {
uart_string("kerala");
uart_char('A');
uart_num(57);
uart_char('\n');
_delay_ms(1000);
	
}
}
