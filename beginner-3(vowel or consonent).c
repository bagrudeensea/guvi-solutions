#include <stdio.h>

void main()
{
    char c;
    c=getchar();
    
    if(c=='a'|c=='e'|c=='i'|c=='o'|c=='u'){
        printf("Vowel");
    }else {
        printf("Consonent");
    }
}