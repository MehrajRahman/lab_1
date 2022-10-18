#include <stdio.h>
int a  = 20;
int main()
{
    printf("Global: %d\n", a);
    int a  = 30;
    printf("Local: %d\n", a);
    {
        extern int a;
        printf("Global: %d\n", a);
    }
    return 0;
}
