#include <stdio.h>
#include <math.h>
#include "STreug.h"


int main(){
    float a, b, y;
    double S;

    do{
    printf("Vvedite a: ");
    scanf("%f", &a);
    printf("Vvedite b: ");
    scanf("%f", &b);
    printf("Vvedite y: ");
    scanf("%f", &y);

    if(st(a, b, y, &S)==-1){
        printf("Na vhod podany nevernye dannye\n");
    }
    else 
        break;
    }
    while(1);
    printf("S = %f", S);
    return 1;
}
