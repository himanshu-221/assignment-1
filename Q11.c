// WAP to take input from user of time HH:MM and convert it in HH hours and MM minutes
#include<stdio.h>
int main()
{
    int h,m;
    printf("Enter time HH:MM in same formate:\n");
    scanf("%d:%d",&h,&m);
    printf("%d hours and %d minutes",h,m);
    return 0;
}