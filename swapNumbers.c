#include<stdio.h>
int main()
{
  int a=2;
  int b=3;
  printf("Before swapping a= %d b= %d \n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After swapping a= %d b= %d",a,b);
  return 0;
}
  
