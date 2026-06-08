#include <stdio.h>

int main (){

    double km ;
    double celsius ;

    printf("Enter the distance in km : ") ;
    scanf("%lf" ,&km);

    float miles = km * 0.621371 ;
    float meter = km * 1000 ;
    float centimeter = km * 10000 ;

    printf("miles       : %.2f miles\n",miles) ;
    printf("meters      : %.2f m\n",meter) ;
    printf("Centimeter  : %.2f cm\n",centimeter) ;

    printf("Enter the Temperature in Celsius : ") ;
    scanf("%lf" ,&celsius);

    float F = (celsius*9/5)+32 ;
    float k = celsius + 273.15 ;

    printf("Fahrenheit       : %.2fF\n",F) ;
    printf("Kelvin           : %.2f k\n",k) ;


    return 0 ;
}