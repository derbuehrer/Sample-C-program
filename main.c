#include <stdio.h>
#include <string.h>

#define PI 3.14159      // kommt vor allem, benötigt keine operatoren wie = oder semikolons

int globalvar = 51;

int main() {
    unsigned int test0 = -200000000; // ohne vorzeichen, also immer positiv (merkt er sich jedoch nicht weswegen wir es ihm sagen müssen)
    int var0 = 42;
    int var1;
    var1 = 1337;
    int var2 = var0 + var1;
    int var3[5][10];
    var3[0][0] = 8432;
    int *ptr;       // Pointer verweist auf eine andere Variable
    ptr = &var0;
    char meinString[] = {'H', 'i', '\0'};       // In C gibt es keinen String, nur chars die ein Array sind
    char meinString2[] = " Hallo";      // Viel besser
    strcat(meinString, meinString2);        // Strings werden zusammen getan

    int c = getchar();      // wartet auf eine 1byte große angabe des benutzers (auch buchstaben, da diese auch zahlen sind...)
    test(c);

    const float var4 = 2.5;     // const ist eine konstante variable, final variable
    double var5 = 2.64119846;
    printf("addiert: %d \n",var2);      // %d steht stellvertrehtend für var2
    printf("%u\n", test0);      // %u für "unsignet"
    printf("%f\n", var4);       // %f für float und double
    printf("%f\n", var5);
    printf("%f\n", PI);
    printf("%s\n\n", meinString);

    // if, else if und else sind wie sonst immer
    if (var0 != var1) {
        printf("var0 entspricht nicht var1\n");
    }
    else printf("var0 und var1 besitzen den gleichen Wert!");  //Ausgegraut weil nie ausführbar, aber funktioniert
    // switch case anweisungen sind wie gewohnt
    // alle operatoren sind wie gewohnt
    // alle schleifen sind gleich
    do {
        printf("hoooh\n");
        var0++;
    } while (var0 < 50);


    return 0;
}

int test(int c) {
    printf("dies ist eine weitere funktion\n");
    printf("die taste die du gedrückt hast, hat den keycode %dh\n", c);
}