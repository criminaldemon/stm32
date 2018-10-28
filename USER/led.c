#include <led.h>

void LED_GPIO_Config(void){
     
	GPIO_InitTypeDef  GPIO_InitStructure;   //定义GPIO_InitTypeDef类型的结构体
	
	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOC,ENABLE); //开启gpioc的外设时钟
	
  GPIO_InitStructure. GPIO_Pin = GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5;    //选择要控制的gpio外设时钟                             

  GPIO_InitStructure. GPIO_Speed = GPIO_Speed_50MHz; //设置引脚速率为50mhz
                                     
  GPIO_InitStructure. GPIO_Mode = GPIO_Mode_Out_PP;   //设置引脚模式为通用推挽输出
	
	GPIO_Init(GPIOC, &GPIO_InitStructure);//初始化结构体
	
  GPIO_SetBits(GPIOC, GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5); //关闭灯光
}


