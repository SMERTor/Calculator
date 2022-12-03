#include <stdio.h>

int main() {
    int fahr, celcius, kelvin;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper)
    {
        kelvin = fahr + 273;
        printf("%d: %d\n",fahr , kelvin);
        fahr = fahr + step;   
    }
    return 0;
}

