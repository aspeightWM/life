//Compute sum of consecutive integers from 1 to N (inclusive)
//git will track everything else!

#include <stdio.h>

long cumulative_sum(int N); //Function prototype. Defines the input and output. Allows us to put the definition somewhere else

int main(int argc, char *argv[])
{
	int N;
	long result;

	//Ask for number
	printf("Enter a number:\n");
	scanf("%d", &N);
	
	//Compute result
	result = cumulative_sum(N);
	
	//Display result
	printf("The sum from 1 to %d (inclusive) is %ld\n", N, result); 	
	
	return 0;
}

long cumulative_sum(int N)
{
	long accumulator;
	
	if (N == 0)
		accumulator = 0;
	else
		accumulator = N + cumulative_sum(N-1);

	return accumulator;	
}

