//Area of a circle
#include<stdio.h>
int main()
{
    int r;
    float area;
    printf("Enter radius of circle:\n");
    scanf("%d",&r);
    // Area of circle pi r^2
    area = 3.14*r*r;
    printf("Area of circle is %f having radius %d",area,r);
    return 0;
}