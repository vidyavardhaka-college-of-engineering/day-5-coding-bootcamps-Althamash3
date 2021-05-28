//You will be given a string 'str'. Your task is to find the number of vowels in 'str' and print it
//Input: loop Output: 2
#include<stdio.h>
#include <string.h>
int main()
{
    char str[10];
    printf("Enter the string\n");
    scanf("%s", str);

    printf("The enter string is %s and the reversed string is ",str);
    for (int i = 0; i < strlen(str); ++i) {
        printf("%c",str[(strlen(str) - i)]);

    }
    printf("%c",str[0]);
    printf("\n");
  /*  for (int i = 0; i < strlen(str) ; ++i)
    {
        strcopy[(strlen(strcopy)-i)] = str[i];

    }*/


    return 0;



}