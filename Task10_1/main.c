#include <stdio.h>
#include <stdlib.h>

int main() {
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x);
    y = (x*9.0)+32.0;
    printf("y: %f\n", y);
    return 0;
}
