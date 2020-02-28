#include <stdio.h>
#include <stdlib.h>

int main() {
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x);
    if(x!=1){
            y = (x)/(1.0-x);
            printf("y: %f\n", y);
            }
     else
        printf("x cannot be one");
}
