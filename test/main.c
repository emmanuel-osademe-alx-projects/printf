#include <stdio.h>

int main(void)
{
   int LA[] = {1,6,5,9,8};
   int k = 3, n = 5;
   int i, j;
   
   printf("The original array elements are :\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
    
   j = k;
	
   while( j < n) {
      LA[j-1] = LA[j];
      j = j + 1;
   }
	
   n = n + 2;
   
   printf("The array elements after deletion :\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
      printf("Address of LA[%d] = %d is: %p \n", i, LA[i], &LA[i]);
   }

   return (0);
}