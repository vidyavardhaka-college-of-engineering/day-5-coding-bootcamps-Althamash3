//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
#include<stdio.h>
#include <string.h>

int main()
{
    char str[10],strcopy[10];
    int i,n,count=0;

    printf("Enter the string\n");
    scanf("%s",str);
    n=strlen(str);

    for(i=0;i<n/2;i++)
    {
        if(str[i]==str[n-i-1])
            count++;

    }
    if(count==i)
        printf("string is palindrome");
    else
        printf("string is not palindrome");



    return 0;
}
