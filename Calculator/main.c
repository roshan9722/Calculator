#include<stdio.h>

#include<stdlib.h>

int main(){
    int a,b,c,i;    //declaration of variables
    
    printf("Enter your choice:");
    scanf("%d",&i);
    
    printf("num1: %d");     //getting number 1
            scanf("%d",&a);
    printf("\n num2: %d \n");   //getting number 2
    scanf("%d",&b);
    
    switch(i){
        case 1:
           c = a + b;
           printf("Addition is %d",c);
           break;
           case 2:
               if(a>b){
                   c = a - b;
                   printf("Positive Subtraction is: %d",c);
               }
               else{
                   c = b - a;
                   printf("Positive Subtraction is: %d",c);
               }  
           break;
        case 3:
            c = a * b;
            printf("Multiplication is: %d",c);
            break;
        default:
            printf("Error");
    }   
        
}
