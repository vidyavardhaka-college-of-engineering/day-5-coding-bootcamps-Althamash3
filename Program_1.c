//You will be given a string 'str'. Your task is to find the number of vowels in 'str' and print it
//Input: loop Output: 2
#include<stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter the string\n");
    scanf("%s", str);
    int count = 0 ;
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == 'a' ||
                str[i] == 'e' ||
                str[i] == 'i' ||
                str[i] == 'o' ||
                str[i] == 'u')
        {
            count++;
        }

    }
    printf("The string %s contains %d vowels \n",str,count);

    //Write your code here

    return 0;



}