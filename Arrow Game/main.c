#include "StdTypes.h"
#include "MemMap.h"
#include "Utils.h"
#include "String.h"
#include "DIO_Int.h"
#include "LCD_Int.h"
#include "KeyPad_Int.h"

#define F_CPU  8000000
#include <util/delay.h>




int main(void)
{
	DIO_Init();
	LCD_Init();
	    
	c8 pattern_man[]={0x04,0x0A,0x04,0x0E,0x15,0x0E,0x0A,0x00};
	c8 pattern_arrow[]={0x08,0x04,0x12,0x0F,0x12,0x04,0x08,0x00};
	c8 pattern_manWithArrow[]={0x04,0x0A,0x06,0x0F,0x16,0x04,0x0A,0x00};
	c8 pattern_manF[]={0x00,0x10,0x0A,0x0D,0x0A,0x10,0x00,0x00};
	c8 pattern_manS[]={0x00,0x08,0x04,0x02,0x04,0x08,0x00,0x00};
	
 	LCD_CreateChar(pattern_man,0);
	LCD_CreateChar(pattern_arrow,1);
	LCD_CreateChar(pattern_manWithArrow,2);
	LCD_CreateChar(pattern_manF,3);
	LCD_CreateChar(pattern_manS,4);		
    
	u8 flag=0;
    while (1)
    {
	    LCD_SetCursor(1,4);
	    LCD_WriteString("Arrow Game");
	    LCD_SetCursor(2,3);
	    LCD_WriteString("SW1  To  Play");
	    if (DIO_ReadPin(PIND2)==LOW)
	    {
		    while(DIO_ReadPin(PIND2)==LOW);
		    break;
	    }
    }
	while(1)
	{
		
		
		
		for(u8 i=2;i<17;i++)
		{
			LCD_SetCursor(1,1);
			LCD_WriteChar(0);
			LCD_SetCursor(flag+1,16);
			LCD_WriteChar(0);
			LCD_SetCursor(1,i);
			LCD_WriteChar(1);
			_delay_ms(200);
			LCD_Clear();
		    if (!DIO_ReadPin(PIND2))
		    {
				flag^=1;
				LCD_SetCursor(1,1);
				LCD_WriteChar(0);
				LCD_SetCursor(flag+1,16);
				LCD_WriteChar(0);
				LCD_SetCursor(1,i);
				LCD_WriteChar(1);
				_delay_ms(200);
				while(DIO_ReadPin(PIND2)==LOW);
				LCD_Clear();
		    }
			if (flag==0&&i==16)
			{
				LCD_SetCursor(1,1);
				LCD_WriteChar(0);
				LCD_SetCursor(1,16);
				LCD_WriteChar(2);
				
				_delay_ms(500);
				LCD_SetCursor(1,15);
				LCD_WriteChar(3);
				LCD_WriteChar(4);
				_delay_ms(1000);
				LCD_Clear();
			}
			if (flag==1&&i==16)
			{
				i=2;
			}
		}
		
		while (1)
		{
			
			LCD_SetCursor(1,4);
			LCD_WriteString("Game Over");
			LCD_SetCursor(2,3);
			LCD_WriteString("SW1  To  Play");
			if (DIO_ReadPin(PIND2)==LOW)
			{
				while(DIO_ReadPin(PIND2)==LOW);
				LCD_Clear();
				break;
			}
			
		}
		
		
 		
	}
	
}