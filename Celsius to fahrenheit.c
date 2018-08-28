#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float cel, fah;
    scanf("%f",&cel);
    fah=(1.8 * cel) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit",cel,fah);   
    return 0;
}
