/**	

* c program to calculate sum of digits using recursion
*/

#include<stdio.h>

/* function declaration */
int sumOfDigits(int num);


int main()
{
	int num, sum;
	
	printf("enter any number to find sum of digits: ");
	scanf("%d", &num);
	
	sum = sumOfDigits(num);
	
	printf("sum of digits of %d = %d", num, sum);
	return 0;
}


/**
 * Recursive function to find sum of digits of a number
 */
int sumOfDigits(int num)
{
	// base condition
	if(num == 0)
	    return 0;
	    
	return((num % 10) + sumOfDigits(num / 10));
}
