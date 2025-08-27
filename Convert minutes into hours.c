#include<stdio.h>
int main()
{
    int minutes,hours;
    printf("enter minuts");
    scanf("%d %d",minutes,hours);
    hours = minutes / 60;
    printf("%d hours = %d minutes\n",hours,minutes);
}
