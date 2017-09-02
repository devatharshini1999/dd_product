#include<stdio.h>
#include<conio.h>
void main()
{
char c;
if((c='a' || c='e' || c='i' || c='o' || c='u') && (c='A' || c='E' ||c='I' || c='O' || c='U'))
{
printf("character is vowel");
}
else
{
printf("character is consonant");
}
}
