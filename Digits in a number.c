#include <stdio.h>

int main()
{
    int num,count=0,i,digit;
    printf("Enter the number:\n");
    scanf("%d", &num);
    printf("Digits=");
    while(num!= 0)                  //This loop makes sure that digits are taken from the number till the number becomes 0
    {
        digit = num % 10;          //This code takes the remainder of the number when divided by 10
        num = num / 10;           //This code takes the remaining number and further divides by 10
        printf(" %d ", digit);
        count++;                 //This takes the digit count
    }
    printf("\nNumber of Digits = %d", count);
    return 0;
}