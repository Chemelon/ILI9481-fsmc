#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "lcd.h"
#include "usart.h"

//#include "GBK_LibDrive.h"	

 
/******************************************************************/

//STM32F103ZE���İ�
// 2.8��3.2�� LCD��ʾ����

//DevEBox  ��Խ����
//�Ա����̣�mcudev.taobao.com
//�Ա����̣�shop389957290.taobao.com	

/******************************************************************/
 
 	u8 x=0;
	u8 lcd_id[12];			 //���LCD ID�ַ��� 
	
 int main(void)
 {	 

	delay_init();	    	 //��ʱ������ʼ��	  
	 
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	 //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	 
	uart_init(115200);	 	//���ڳ�ʼ��Ϊ115200
	 
 	LED_Init();			      //LED�˿ڳ�ʼ��
	 
	LCD_Init();
	 
//	GBK_Lib_Init();       //Ӳ��GBK�ֿ��ʼ��--(���ʹ�ò����ֿ��Һ�����汾���˴��������Σ������ֿ��ʼ���� 
	 
	POINT_COLOR=RED;
	 
//	sprintf((char*)lcd_id,"LCD ID:%04X",lcddev.id);//��LCD ID��ӡ��lcd_id���顣				 	

	Demo();
	//Demo_Menu();//��ʾ����
	//LED0=!LED0;		
	//LED1=!LED1;
	//delay_ms(1000);	

}
 

/******************************************************************/

//STM32F103ZE���İ�
// 2.8��3.2�� LCD��ʾ����

//DevEBox  ��Խ����
//�Ա����̣�mcudev.taobao.com
//�Ա����̣�shop389957290.taobao.com	

/******************************************************************/

