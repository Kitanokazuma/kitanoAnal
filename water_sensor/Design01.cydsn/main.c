/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "usb_io.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    UART_1_Start();
    usb_output("start water_level_sensor");
    water_sensor_Start();
    int input=1;
    int h;
  //  float water_level=0, vol=0;
    char buf[32];

    water_sensor_StartConvert();
   h=water_sensor_IsEndConversion(water_sensor_RETURN_STATUS);
        sprintf( buf, "sokutei%d",h);
    usb_output(buf);
   // {
   // for(;;){
    input=water_sensor_GetResult16();
    
        sprintf( buf, "waterlevel=%d[m]",input);
    usb_output(buf);

//}
  //  }


    return 0;
}

/* [] END OF FILE */
