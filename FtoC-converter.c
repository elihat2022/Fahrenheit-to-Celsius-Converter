//Fahrenheit to Celsius Converter
#include<stdio.h>

int main (void){
    float celsius, fahr;
    
    printf("Enter the temperature in Fahrenheit to convert: \n");
    scanf("%f", &fahr);

    celsius = (5.0/9.0) * (fahr - 32.0); 
    printf("%2.0f° Fahrenheit is equal t %2.0f° Celsius \n", fahr, celsius);

    return 0;

}
