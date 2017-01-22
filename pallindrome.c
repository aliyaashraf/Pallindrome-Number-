/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet No:21
Program:WAP to print the pallindrome of the given number
Date:20,Jan2017
*/
#include<stdio.h>
int main(){
int i,a,rem=0,rev=0;
printf("Enter the first number:\n");
scanf("%d",&a);
i=a;
while(a>0)
{
rem=a%10;
rev=rev*10+rem;
a=a/10;
}
if(i==rev)
{
printf(" pallindrome\n");
}
else
{
printf("isn't pallindrome\n");
}
return(0);
}
