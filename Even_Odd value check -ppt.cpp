//   Write a program that accepts a nunber and check whether it is divisible by 5 or not?   //

#include<stdio.h>
int main()
{
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	if(n%5==0)
	printf("%d is divisible by 5",n);
	else
	printf("%d is not divisible by 5",n);
	return  0;
}
