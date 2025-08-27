#include<stdio.h>
int main()
{
    int hours, minits;
    printf("enter hours");
    scanf("%d %d",hours, minits);
    minits = hours * 60;
    printf("%d hours = %d minits\n",hours,minits);
}
