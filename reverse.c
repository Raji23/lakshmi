#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str[100],temp;
int i,j=0;
printf("Enter the string");
gets(str);
j=0;
j=strlen(str)-1;
while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
j++;
j--;
}
printf("\n Reverse string is %s",str);
return 0;
}
