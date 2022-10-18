#include <stdio.h>
int main()
{
    int first_value,middle_value, last_value;
    scanf("%d", &first_value );
    scanf("%*d");
    scanf("%d", &last_value );
    printf("First Value = %d, Last Value = %d", first_value, last_value);
    return 0;
}
