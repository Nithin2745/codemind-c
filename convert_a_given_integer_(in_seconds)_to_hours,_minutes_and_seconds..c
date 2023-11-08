#include<stdio.h>
int main()
{
    int n,H,M,S;
    scanf("%d",&n);
    H=n/3600;
    M=(n%3600)/60;
    S=n%60;
    printf("H:M:S-%d:%d:%d",H,M,S);
    
}