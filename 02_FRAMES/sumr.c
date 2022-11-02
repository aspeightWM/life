#include <stdio.h>

long cumulative_sum(int N);

int main(int argc, char *argv[])
{
	int N;
	long result;

	printf("Enter a number:\n");
	scanf("%d", &N);
	
	result = cumulative_sum(N);

	printf("The sum from 1 to %d is %ld\n", N, result);

	return 0;
}

long cumulative_sum(int N) {
	long accumulator;

	if (N == 1)
		accumulator = 1;
	else
		accumulator = N + cumulative_sum(N-1);

	return accumulator;
}
