#include <header.h>

void main(void)
{
    char data;  
    data = part1(portA);
    part2(portB, data);
    delay_ms(500);
    part3(5, 350); 
    delay_ms(500);
    part4();
    delay_ms(500);
    part5(9563, portC, portD); 
}
