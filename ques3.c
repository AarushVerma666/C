// Write a program to convert Celsius (Centigrade) temperature to Fahrenheit.

#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius: ");
    scanf("%f",&celsius);
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("Temperature in Fahrenheit is: %f",fahrenheit);
    printf("\n");
    return 0;
}