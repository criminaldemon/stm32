#include <stm32f10x.h>
#include "led.h"

void Delay(__IO u32 nCount);

int main(void){
    
	LED_GPIO_Config();
	
	  while(1){
		LED1( ON );
		Delay(0xFFFEF);	
		LED1 ( OFF );
			
		LED2( ON );
		Delay(0xFFFEF);	
		LED2 ( OFF );

		LED3( ON );
		Delay(0xFFFEF);	
		LED3 ( OFF );	
		}
}

void Delay(__IO u32 nCount){

for(; nCount != 0; nCount--);

}
