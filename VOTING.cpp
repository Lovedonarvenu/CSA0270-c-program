#include<stdio.h>
int main()
{
    int a;
    printf("enter the age of the person:");
    scanf("%d",&a);
    if(a>=18){
        printf("the person is eligible to vote");
    }
    else{
        
        printf("not eligible to vote " );
        
    }
    printf("has to wait %d years",18-a);
    return 0;
      
        
}
