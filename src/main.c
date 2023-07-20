/**
 * Brief: STM32F746G-DISCOVERY
 **/

#include <stdint.h>

#define TAG "Main"

#include "utils/log.h"
#include "utils/intrinsics.h"
#include "hal/hal_mcu.h"
#include "hal/hal_gpio.h"

#include "drivers/display/display.h"


/* -------------------------------------------------------------------- */
int EntryPoint(void)
{
  //  DRV_Display_t pDisplay;
   // DRV_RK043FN48H_Init(&pDisplay);

    while(1)
    {
     //   LOGD("SysTick: %ld", HAL_SysTick_GetCount());

        HAL_GPIO_SetBit(GPIOI, GPIO_BIT1);
   //     CORE_Sleep(500);
        __delay_cycles(168000000/3);


        HAL_GPIO_ClrBit(GPIOI, GPIO_BIT1);
    //    CORE_Sleep(500);
        __delay_cycles(168000000/3);

    }
}
