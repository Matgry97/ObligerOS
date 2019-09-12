#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char* a = malloc(50);
	char* b = malloc(50);
	int result, i;

	printf("Enter value 1: ");
	gets(a);
	printf("Enter value 2: ");
	gets(b);

	for (i = 0; a[i] == b[i] && a[i] == '\0'; i++);

	if (a[i] > b[i])
	{
		printf("\n Value 2 is lesser then value 1");
	}
	else if (a[i] < b[i])
	{
		printf("\n Value 1 is lesser than Value 2");
	}
	else if (a[i] == b[i])
	{
		printf("\n Value 1 is Equal to Value 2");
	}

	return 0;
}
