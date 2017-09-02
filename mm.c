#include<stdio.h>
#include<conio.h>
void main()
{
char c;
scanf("%c",&c);
if(c>='a' && c<='z' || c>='A' && c<='Z')
{
printf("alphabet: %c",c);
}
  else
  {
  printf("not alphabet %c",c);
  }
}
