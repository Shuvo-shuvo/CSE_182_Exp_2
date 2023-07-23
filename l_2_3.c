#include<stdio.h>
void main()
{
    int a,b,p,area;
    printf("Enter length and breadth of rectangle:");
    scanf("%d%d",&a,&b);
    p=2*(a+b);
    area=a*b;
    printf("perimeter:%d\n",p);
    printf("area of rectangle is :%d",area);

}
