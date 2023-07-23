#include<stdio.h>
int main()
{
  int cm;
  float meter,km;
  printf("Enter value in centimetre:");
  scanf("%d",&cm);
  meter=cm/100;
  km=cm/pow(10,5);
  printf("The convert value meter=%f\nThe convert value kilometer=%f",meter,km);


}
