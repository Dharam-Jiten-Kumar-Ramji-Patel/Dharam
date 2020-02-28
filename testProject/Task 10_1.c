#include <stdio.h>
#include <stdlib.h>

int Task1()
{
    float a;
    float b;
    printf("Enter a number: ");
    scanf("%f", &a);
    b = (a*9.0)+32.0;
    printf("b: %f\n", b);
    return 0;
}
