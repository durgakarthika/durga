#include<stdio.h>
int main()
{
double n1,n2,n3;
printf("enter the three number:");
scanf("%f %f %f",&n1,&n2,&n3);
if( n1>n2 && n1>n3)
printf("%f this is largest number:",n1);
if(n2>n1 && n2>n3)
printf("%f this is largest number:",n2);
if(n3>n1 && n3>n2)
printf("%f this is largest number:",n3);
return 0;
}
