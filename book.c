#include<stdio.h>
int main()
{
char d;
printf("enter the word");
scanf("%c",&d);
if((d=='a')||(d=='A')||(d=='e')||(d=='E')||(d=='i')||(d=='I')||(d=='o')||(d=='O')||(d=='u')||(d=='U'))
{
printf("the given word is vowel");
}
else
{
printf("the given word is not a vowel");
}
return 0;
}
