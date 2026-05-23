#include <stdint.h>

#define STM32L4_DEFAULT_SYSTEM_CLOCK_HZ 4000000UL

uint32_t SystemCoreClock = STM32L4_DEFAULT_SYSTEM_CLOCK_HZ;

void SystemInit(void)
{
    SystemCoreClock = STM32L4_DEFAULT_SYSTEM_CLOCK_HZ;
}

void SystemCoreClockUpdate(void)
{
    SystemCoreClock = STM32L4_DEFAULT_SYSTEM_CLOCK_HZ;
}