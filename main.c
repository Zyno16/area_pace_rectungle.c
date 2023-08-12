#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base;
    float hight;
    float area;
    float perimeter;
printf("enter the base of triangle: \n");
scanf("%f",&base);
printf("enter the hight of triangle:\n");
scanf("%f",&hight);
area=base*hight;
perimeter=(base+hight)*2;
printf("the area: %0.2f",area);
printf("the perimeter:%.2f\n",perimeter);
    return 0;
}
