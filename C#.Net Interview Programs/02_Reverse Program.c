#include<stdio.h>
int main()
{
   int No = 0,rev = 0,rem = 0;

   printf("\n Enter A Number:");
   scanf("%d",&No);
   while(No!=0)
   {
       rem = No%10;
       rev = rev*10+rem;
       No  = No/10;
   }
   printf("\n Reverse Number:%d",rev);
   return 0;
}
