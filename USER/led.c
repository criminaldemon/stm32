#include <led.h>

void LED_GPIO_Config(void){
     
	GPIO_InitTypeDef  GPIO_InitStructure;   //����GPIO_InitTypeDef���͵Ľṹ��
	
	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOC,ENABLE); //����gpioc������ʱ��
	
  GPIO_InitStructure. GPIO_Pin = GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5;    //ѡ��Ҫ���Ƶ�gpio����ʱ��                             

  GPIO_InitStructure. GPIO_Speed = GPIO_Speed_50MHz; //������������Ϊ50mhz
                                     
  GPIO_InitStructure. GPIO_Mode = GPIO_Mode_Out_PP;   //��������ģʽΪͨ���������
	
	GPIO_Init(GPIOC, &GPIO_InitStructure);//��ʼ���ṹ��
	
  GPIO_SetBits(GPIOC, GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5); //�رյƹ�
}


