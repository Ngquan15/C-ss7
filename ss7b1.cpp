#include <stdio.h>

int main() {
   int number[] ={1,2,3};
    int length = 0 ;
	 for (int i = 0 ;i < 3 ; i++ ){
         printf ("%d\n", number[i]);     
	      length ++;		    
	}
    printf ("do dai cua bien %d\n ", length	 );
    return 0;
}
