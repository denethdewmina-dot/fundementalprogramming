#include <stdio.h>

int main (){

    char name_initial ;
    int reg_num ;
    double GPA ; 
    int year ;
    
    printf("Enter intial         : " ) ;
    scanf("%c" ,&name_initial) ;

    printf("Enter reg. no.       : " ) ;
    scanf("%d" ,&reg_num) ;

    printf("Enter GPA            : " ) ;
    scanf("%lf" ,&GPA) ;

    printf("Enter Year           : " ) ;
    scanf("%d" ,&year) ;

    printf("-----------------------\n") ;

    printf("Initials      :%c\n",name_initial);
    printf("Reg. No.      :%d\n",reg_num);
    printf("GPA           :%.2f\n",GPA);
    printf("Year          :%d\n",year);

    
    

    return 0;
}