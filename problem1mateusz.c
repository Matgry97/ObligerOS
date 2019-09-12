#include <stdio.h>

int main()
{
   int i, rows;  
    for(i=1; i<=4; i++) { 
        for(rows=1; rows<=i; rows++) {
            if (rows == 1) {
                
            printf(" %d", i);
            }
            else {

            printf("  ");
             printf(" %d", i);
            }
            
    }
       
       
        printf("\n");
    }
    return 0;
}





