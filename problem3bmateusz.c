#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char* a = malloc(50);
	int counter;

	printf("Enter desired word : ");
	gets(a);
	for (counter = 0; a[counter] != '\0'; ++counter);
	printf("lenghth of the string is: %d", counter);
	return 0;
}