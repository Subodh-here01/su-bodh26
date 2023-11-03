#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter three numbers :") ;
    scanf("%d %d %d",&a,&b,&c);
    for(int i=1;i<11; i++) {
        
        printf("%d,%d,%d \n",a * i,b*i,c*i);
        
    }
return 0;
} 