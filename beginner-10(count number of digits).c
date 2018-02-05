#include <stdio.h>

void main()
{
    int n,i=0;
    
    scanf("%d",&n);
    
        while(n>=10){
            n=n/10;
            i++;
        }
        i++;
        printf("%d",i);
}