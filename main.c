#include <stdio.h>

#define PI 3.14159      // kommt vor allem, benötigt keine operatoren wie = oder semikolons

int main() {
    unsigned int test0 = -200000000; // ohne vorzeichen, also immer positiv (merkt er sich jedoch nicht weswegen wir es ihm sagen müssen)
    int var0 = 42;
    int var1;
    var1 = 1337;
    int var2 = var0 + var1;

    const float var3 = 2.5;     // const ist eine konstante variable, final variable
    double var4 = 2.64119846;
    printf("addiert: %d \n",var2);      // %d steht stellvertrehtend für var2
    printf("%u\n", test0);      // %u für "unsignet"
    printf("%f\n", var3);       // %f für float und double
    printf("%f\n", var4);
    printf("%f\n", PI);

    // if, else if und else sind wie sonst immer

    // alle operatoren sind wie gewohnt
    return 0;
}