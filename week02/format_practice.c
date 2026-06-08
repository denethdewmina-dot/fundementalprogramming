#include <stdio.h> 

int main(){
    printf("Integer (decimal)  : %d\n", 255) ;
    printf("Integer (hex)      : %x\n" , 255) ;
    printf("Integer (octal)    : %o\n" , 255) ;
    printf("Float (Default)    : %f\n" , 3.141593) ;
    printf("Float (2 dp)       : %.2f\n" , 3.141593) ;
    printf("Float (scientific) : %e\n" , 3.141593) ;
    printf("Character          : %c\n", 'A') ;
    printf("Percentage         : 33%%\n" );



    return 0 ;
}