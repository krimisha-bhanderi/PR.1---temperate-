#include<stdio.h>

void main()
{
 int i,n;

 printf("enter any number:");
 scanf("%d",&n);
 for(i=0;n>0;)
 {
 n=n/10;
 i++;
 }
 printf("the total number of digits in a number:%d",i);

 }

