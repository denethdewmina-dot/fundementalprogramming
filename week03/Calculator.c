#include <stdio.h> 

int main() {

    printf("********* Mini Calculator *********\n\n") ;
    
    float num1 ;
    float num2 ;

    printf("Enter the first Number :\n") ;
    scanf("%f", &num1) ;

    printf("Enter the Second Number :\n") ;
    scanf("%f", &num2) ;
  
    printf("The Addtion of the Numbers are : %.2f\n" , num1+num2) ;
    printf("The Substraction of the Numbers are : %.2f\n" , num1-num2) ;
    printf("The Multiplication of the Numbers are : %.2f\n" , num1*num2) ;
    printf("The Division of the Numbers are : %.2f\n" , num1/num2) ;

    printf("\n********* End *********") ;


    return 0 ;
}