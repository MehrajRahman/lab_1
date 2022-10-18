#include <stdio.h>
int main ()
{
    long int a;
    long long int bigInt;
    long double longDouble;
    short int shortInt;
    a = 2147483647;
    bigInt = 9223372036854775807;
    longDouble = 1.1E+427;
    shortInt = 32767;
    printf("%li, %lli, %Lf, %hd ", a, bigInt, longDouble, shortInt);
    return 0;

}
