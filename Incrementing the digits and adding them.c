#include <stdio.h>
int MultiSum(int o)             //MultiSum() function is being declared
{
	int sum=0;
	while(o!=0) {
		sum=sum+(o%10)+1;          //+1 is being added to increment each digit by 1 and then store it into variable sum
		o=o/10;        //This code is written to divide the number by 10 and store the remaining in o
	}
	return sum;
}
int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d", &n);
	if(n==0)
	{
		printf("1");
	}
	printf("The sum of digits is %d", MultiSum(n));             //MultiSum() function is being called in the main() function
	return 0;
}
