#include<stdio.h>

    int main(){


        // kinetic energy formula for class 10 - THE PHYSICS CALCULATOR ->

        float kinetic_energy,mass,velocity;


    // Assigning work for This program
        
        printf("Enter mass in KG\n");
        scanf("%f",&mass);

        printf("Enter velocity m/s^2\n");
        scanf("%f",&velocity);


        //formula for calculation of Kinetic Energy
        kinetic_energy = 0.5*mass*velocity*velocity;

        printf("Kinetic Energy = %fJ",kinetic_energy);

        getch();




    return 0;
}