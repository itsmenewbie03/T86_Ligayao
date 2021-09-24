#include<stdio.h>

int main()
{
    int rpm = 3000, degreesPerSecond;
    // rev = revolution ; rpm = revolutions per minute ; rps = revolutions per second 
    // 1 rev = 360° ; rpm / 60 = rps ; rps * °/rev = degrees per second
    degreesPerSecond = (rpm / 60) * 360;
    printf("%d rpm is equal to %d degrees per second", rpm, degreesPerSecond);
    return 0;
}
