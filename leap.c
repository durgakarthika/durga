#include<stdio.h>
int main()
{
int y;
printf("enter the year:");
scanf("%d",&y);
if((( y % 400)==0)&&(( y % 4 )==0)))
printf("%d this is leap year:",y);
else if((y % 100)==0)
printf("%d this is not leap year:",y);
return 0;
}
