#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char* a = malloc(50);
	char* b = malloc(50);
    char i,j; 

	printf("Enter desired word : ");
	scanf("%s", a); 
    printf("\nWord to combine : ");
    scanf("%s", b);

    //Counting the length of a and storing it in i 
    for(i=0; a[i]!='\0';++i);

    //Counting the lenght og b and storing it in j
    for(j=0; b[j]!='\0'; ++j, ++i){
        a[i]=b[j];
    }
    a[i]='\0';
    printf("\n Melted string: %s", a);

	return 0;
}