#include <stdio.h>
void main()
{
    int n1,n2,n3;
    printf("Enter number:\n" );
    scanf("%d %d %d",&n1, &n2, &n3);
    
    for (int i=1;i<11;i++){
        printf("%d \n",i*n1);
    }
    for (int i=1;i<11;i++){
        printf("%d \n",i*n2);
    }
     for (int i=1;i<11;i++){
        
        printf("%d \n",i*n3);
    }
    
}