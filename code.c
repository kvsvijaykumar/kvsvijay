#include<stdio.h>
int main()
{
   int n,i,fact=1;
   printf("Enter the integer\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      fact=fact*i;
   }
}
