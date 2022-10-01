#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    char *ptr;
    printf("Enter string : ");
    scanf("%s",str);
    printf("The last char is %c",str[strlen(str)-1]);
    return 0;
}