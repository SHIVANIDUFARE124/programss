#include<stdio.h>
#include<conio.h>
int main()
{
	int n,reverse=0,rem;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n/=10;
	}
	printf("the reverse of number is %d",reverse);
	return 0;
}
