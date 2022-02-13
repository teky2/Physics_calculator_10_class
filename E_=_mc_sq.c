#include<stdio.h>

    int main(){
    	
//  VARIABLE DECLARATION 


    float m,c,E;

    printf("This program is fo E = mc square\n");


//	MASS = m
    printf("Enter m\n");
    scanf("%f",&m);
    
//  SPEED OF LIGHT SQUARED = C square

    printf("Enter C\n");
    scanf("%f",&c);
    
//  SPEED OF LIGHT SQUARED = C square
//MASS
//ENERGY

    E = m*c*c;

	printf("Formula Derived E = mc^2\n");
	
    printf("your answer E = %f",E);


    return 0;
}
