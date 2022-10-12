//WAP to take input from user as date formate(DD/MM/YYYY) and print on the screen as Date-DD, Month-MM, Year-YYYY.
#include<stdio.h>
int main()
{
    int d,m,y;
    printf("Enter DD/MM/YYYY as same formate:\n");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("Date-%d, Month-%d, Year-%d",d,m,y);
    return 0;
}