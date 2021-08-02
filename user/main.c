#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "lcd.h"
#include "usart.h"

//#include "GBK_LibDrive.h"	

 
/******************************************************************/

//STM32F103ZE核心板
// 2.8或3.2寸 LCD显示测试

//DevEBox  大越创新
//淘宝店铺：mcudev.taobao.com
//淘宝店铺：shop389957290.taobao.com	

/******************************************************************/
 
 	u8 x=0;
	u8 lcd_id[12];			 //存放LCD ID字符串 
	
 int main(void)
 {	 

	delay_init();	    	 //延时函数初始化	  
	 
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	 
	uart_init(115200);	 	//串口初始化为115200
	 
 	LED_Init();			      //LED端口初始化
	 
	LCD_Init();
	 
//	GBK_Lib_Init();       //硬件GBK字库初始化--(如果使用不带字库的液晶屏版本，此处可以屏蔽，不做字库初始化） 
	 
	POINT_COLOR=RED;
	 
//	sprintf((char*)lcd_id,"LCD ID:%04X",lcddev.id);//将LCD ID打印到lcd_id数组。				 	

	Demo();
	//Demo_Menu();//演示程序
	//LED0=!LED0;		
	//LED1=!LED1;
	//delay_ms(1000);	

}
 

/******************************************************************/

//STM32F103ZE核心板
// 2.8或3.2寸 LCD显示测试

//DevEBox  大越创新
//淘宝店铺：mcudev.taobao.com
//淘宝店铺：shop389957290.taobao.com	

/******************************************************************/

