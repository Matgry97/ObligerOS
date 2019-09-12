#include <stdio.h>

int main()
{
   int first = 1, space, i, j;
    for(i=0; i<6; i++)
    {
        for(space=1; space <= 6-i; space++)
            printf("  ");
        for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                first = 1;
            else
                first = first*(i-j+1)/j;
            printf("%4d", first);
        }
        printf("\n");
    }
    return 0;
}





