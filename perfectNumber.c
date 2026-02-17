#include <stdio.h>
int main()
{
    int n,i;
    int sum=0;
         printf("\n Enter the number :");
     scanf("%d",&n);

     for (i=1;i<=n/2;i++)
     {
         if(n%i==0){
        sum += i;
         }

     }
     if (sum==n)
     {
        printf("\n THE GIVEN NUMBER IS A PERFECT NUMBER");

     }
     else
                 printf("\n THE GIVEN NUMBER IS not A PERFECT NUMBER");

                 return 0;
}
