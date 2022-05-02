#include <stdio.h>

int main(){

    unsigned char vuchar;
    unsigned long vulong;
    int vint;
    float xfloat,yfloat;

    vint = -2;
    printf("vint: %d %u %X\n", vint, vint, vint);
    //outputs the value of vint as signed integer (%d), unsigned int (%u), hexadecimal format (%X)

    vuchar = vint;
    vulong = vint;
    printf("vuchar: %u %X\n", vuchar, vuchar);
    //%u expects an unsigned int, %hhu would expect unsigned char
    printf("vulong: %1X\n", vulong);
    //hexadecimal format of the long value, print in 1 width and pad with blank spaces

    xfloat = 3.6F;
    printf("xfloat: %f \n", xfloat);
    //output float value of xfloat
    printf("(int) xfloat: %d\n", (int) xfloat);
    //outputs 3 because we typecast the value of xfloat into an integer, It converts the float value to the nearest
    //integer value: 3.6 -> 3

    yfloat = xfloat / vint;                     //divide value of xfloat by value of vint 3.6/(-2) = -1.8
    printf("yfloat: %f \n", yfloat);
    //output: quotient of xfloat and vint saved in yfloat as float value
    printf("(int) yfloat: %d\n", (int) yfloat);
    //typecast float value to nearest integer value -1.8 -> -1

    return 0;
}
