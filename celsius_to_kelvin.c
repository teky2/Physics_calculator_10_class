// C programming
// Conversion of Temperature between Celsius scale and Kelvin scale: is given by :K= C + 273.15

#include<stdio.h>

    int main(){

    float C /*Assigning Variable in C is = Celsius */,K /*K variable is For Assigning Formulae in it K = Kelvin */; 
    printf("Enter Celsius \n=>:");
    scanf("%f",&C);

    K = C+273.15; /*Formula or logic Implementation  */
    printf("Kelvin(Your->Answer=%f)",K);

    return 0;
}