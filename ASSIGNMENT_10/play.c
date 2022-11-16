#include <stdio.h>

char ga[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

void one(char ca[])
{	
	printf("%s\n", &ca);
	printf("%s\n", &(ca[0]));
	printf("%s\n", &(ca[1]));
}

void two(char *pa)
{
	printf("%s\n", &pa);
	printf("%s\n", &(pa[0]));
	printf("%s\n", &(pa[1]));
	printf("%s\n", ++pa);
}

main()
{	
	one(ga);
	two(ga);
	printf("%s\n", &ga);
	printf("%s\n", &(ga[0]));
	printf("%s\n", &(ga[1]));

	return 0;
}
