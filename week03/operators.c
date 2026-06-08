#include <stdio.h>


int main() {

    int a = 15 ;
    int b = 4 ;
    int c = 0 ;

    //Arithmatic Operators

 
    printf("Addition of a and b : %d \n",a+b) ;
    printf("Substraction of a and b : %d \n",a-b) ;
    printf("Multiplication of a and b : %d \n",a*b) ;
    printf("Division of a and b : %d \n",a/b) ;
    printf("Remainder of a and b : %d \n",a%b) ;

    // Relational Operators
 
    
    printf("a==b : %d\n", a==b) ; // Equal
    printf("a!=b : %d\n", a!=b) ; // Not Equal
    printf("a>b : %d\n", a>b) ; // Greater than
    printf("a<b : %d\n", a<b) ; // Less than
    printf("a>=b : %d\n", a>=b) ; // Greater Than or Equal
    printf("a<=b : %d\n", a<=b) ; // Less Than or Equal

    

    // Logical Operators

  
    
    printf("a && b : %d\n", a&&b); // AND
    printf("a || b : %d\n", a||b); // OR
    printf("!a : %d\n", !a); // NOT A
    printf("!b : %d\n", !c); // NOT C
    


    //Bitwise Operators

    printf("a&b : %d\n", a&b); //Bitwise AND
    printf("a|b : %d\n", a|b); // Bitwise OR
    printf("a^b : %d\n", a^b); // Bitwise XOR
    printf("-c : %d\n", !c); // Bitwise NOT
    printf("a<<b : %d\n", a<<2); //Left shift
    printf("a>>b : %d\n", a>>1a); //Right shift



    return 0;
}