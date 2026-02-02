#include<stdio.h>
#include<conio.h>
int main()
 {
    int n;
    long long fact = 1;

    printf("\n Enter a number: ");
    scanf("%d",&n);

    if (n < 0)
    {
      printf("\n Factorial of a negative number doesn't exist.\n");
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("\n Factorial of %d is %lld\n", n, fact);
    }
    return 0;
}
