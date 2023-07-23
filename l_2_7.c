#include<stdio.h>
int main()
{
  float d,y,m,w,days;
  printf("Enter days:");
  scanf("%f",&d);
  y=d/365;
  m=d/30;
  w=d/7;
  printf("year:%f\n",y);
  printf("month:%f\n",m);
  printf("week:%f\n",w);
  printf("days:%f",days);

}
