#include<stdio.h>
#include<string.h>
int main()
{
    char csrc[20]={'\0'};
    printf("\n Enter A String :");
    gets(csrc);
    strrev(csrc);
    printf("\n String After Reverse %s:",csrc);
    getch();
    return 0;
}
