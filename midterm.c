#include <stdio.h>

int main(){

    float regularRate = 0.40, initialCost, finalCost, minutesAboveSixty, federalTax;
    int startTime, lengthInMinutes;

    printf(" \nHELLO, LOVE, GOODBYE \n\n");

    //question 1
    printf("Enter start time for call [military time] \nExample: 1800 (06:00 PM) or 0800 (08:00 AM) \n:");
    scanf("%d", &startTime);
    
    //question 2
    printf("Enter length of time in minutes: ");
    scanf("%d", &lengthInMinutes);

    //calculations
    
    if (startTime >= 800 && startTime < 1800){   //discount related to time called
        if(lengthInMinutes >= 60){
            initialCost = lengthInMinutes * regularRate;  
            minutesAboveSixty = initialCost * 0.85;  
            finalCost = minutesAboveSixty * 0.50;
            printf("Gross cost: $%.2f \n", finalCost);

            federalTax = minutesAboveSixty * (1 + 0.40);
            printf("Net cost: $%.2f \n", federalTax);

        }else{
            initialCost = lengthInMinutes * regularRate;  
            printf("Gross cost: $%.2f \n", initialCost);

            finalCost = initialCost * 0.50;
            federalTax = finalCost * (1 + 0.40);
            printf("Net cost: $%.2f \n", federalTax);
        }
    }else{                                                                      //NO discount related to time called
        if(lengthInMinutes >= 60){
            finalCost = lengthInMinutes * regularRate;  
            minutesAboveSixty = finalCost * 0.85; 
            printf("Gross cost: $%.2f \n", minutesAboveSixty); 

            federalTax = minutesAboveSixty * (1 + 0.40);
            printf("Net cost: $%.2f \n", federalTax);

        }else{
            finalCost = lengthInMinutes * regularRate; 
            printf("Gross cost: $%.2f \n", finalCost);

            federalTax = finalCost * (1 + 0.40);
            printf("Net cost: $%.2f \n", federalTax);
        }
    }
    
    return 0;
}