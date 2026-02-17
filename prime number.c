#include <stdio.h>

 int main ()
 {
     int n;

     printf("\n Enter the number :");
     scanf("%d",&n);

     if(n%2==0)
     {
         printf("\n THE GIVEN NUMBER IS A PRIME NUMBER");

     }
     else
        printf("\nTHE GIVEN NUMBER IS NOT A PRIME NUMBER..\n SOMETHING WENT WRONG !TRY AGAIN .. ");

 return 0;
 }
