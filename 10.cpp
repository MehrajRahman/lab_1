#include <stdio.h>
#include <limits.h>
#include <float.h>

int main ()
{
    long int a;
    long long int bigInt;
    long double longDouble;
    short int shortInt;
    a = 2147483647;
    bigInt = 9223372036854775807;
    longDouble = 1.1E+4932;
    shortInt = 32767;
    printf("%li, %lli, %28.7Lg, %hd ", a, bigInt, longDouble, shortInt);

  printf( "long double  %14.7Lg  %14.7Lg\n" , LDBL_MIN , LDBL_MAX );
    return 0;

}
