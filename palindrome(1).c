#include <stdio.h>
int main()
{
    char str[100];
    int len, strt, end;
    printf("Enter any string : ");
    gets(str);
    len = 0;
    while(str[len] != '\0') len++;
    strt = 0;
    end   = len-1;
    while(strt <= end){
        if(str[strt] != str[end])
            break;
        strt++;
        end--;
    }
    if(strt >= end)
        printf("String is Palindrome\n");
    else
        printf("String is Not Palindrome\n");
}