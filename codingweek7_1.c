#include<stdio.h> // จงเขียนโปรแกรมรับ string มา 1 ชุด แล้วหาว่าตัวอักษรใดที่เป็นตัวอักษรหลังสุด (Level 3)
int main()
{
    char str[50];
    char *ptr;
    ptr = str;
    printf("Enter string : ");
    scanf("%s",str);
    while(*ptr != '\0')
    {
        ptr++;
    }
    ptr--;
    printf("The last char is %s",ptr);
    return 0;
}