#include "SG90_servo.h"

void Servo_init(void)
{
    IoTGpioInit(HI_GPIO_IDX_2);
    IoTGpioSetFunc(HI_GPIO_IDX_2,HI_IO_FUNC_GPIO_2_GPIO);
    IoTGpioSetDir(HI_GPIO_IDX_2, HI_GPIO_DIR_OUT);
    IoTGpioSetOutputVal(HI_GPIO_IDX_2,HI_GPIO_VALUE0);
}


void set_angle(int utime) 
{
     Servo_init();
     IoTGpioSetOutputVal(HI_GPIO_IDX_2,HI_GPIO_VALUE1);
     hi_udelay(utime);
     IoTGpioSetOutputVal(HI_GPIO_IDX_2,HI_GPIO_VALUE0);
     hi_udelay(19350-utime);
}