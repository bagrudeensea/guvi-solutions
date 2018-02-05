#include <stdio.h>

void main()
{
    char c;
    c=getchar();
    
    if((c<'z'&&c>'a')|(c<'Z'&&c>'A')){
        printf("Alphabet");
    }else {
        printf("No");
    }
}