#include<stdio.h>
int main()
{
    int n,i=0,l,j,num[100];
    printf("Enter the number:\n");
    scanf("%d", &n);
    l=n;
    while(l!=0)
    {
        num[i]=l%10;            //Taking the remainder of the number starting from the last digit
        i++;                    //adding up
        l=l/10;
    }
    for(j=i-1;j>=0;j--)
    {
        if(num[j]==0)           //Checking to see if the number contains any zeroes
        {
            continue;           //If the number contains any zeroes, then it'll continue on the traversal without considering the zero
        }
        printf("%d\t", num[j]);
    }
    return 0;
}