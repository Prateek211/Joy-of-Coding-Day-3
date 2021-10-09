#include <stdio.h>
int MultiSum(int o)
{
	int sum=0;
	while(o!=0) {
		sum=sum+o%10;
		o=o/10;
	}
	return sum;
}
int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d", &n);
	printf("The sum of digits is %d", MultiSum(n));
	return 0;
}
