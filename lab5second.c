#include <stdio.h>
#include <stdlib.h>

float m2km(float mi);
float p2kg(float lbs);
float temp(float degf);

int main(void)
{
    float mi, lbs, degf
        // 1. Declare variables
        ;
    int pick;
    // Your code here! (More declarations)
    // 2. Display the menu
    printf("========================\n"
           "     MENU Options\n"
           "========================\n"
           "(1) Conversions from mi to km\n"
           "(2) Conversions from lbs to kg\n"
           "(3) Conversions from deg. F to deg. R\n");
    // 3. Prompt the user and scan value
    printf("\nEnter choice: \n");

    pick = getchar();

    // 4. Decision
    switch (pick)
    {
    case '1':
        printf("You chose conversions from mi to km");
        float miles;
        printf("\nEnter miles");
        scanf("%f", &miles);
        printf("In km, it is equal to: %0.2f\n", miles, m2km(miles));
        break;
    case '2':
        printf("You chose conversions from lbs to kg");
        float pounds;
        printf("\nEnter lbs");
        scanf("%f", &pounds);
        printf("In kg, it is equal to: %0.2f\n", pounds, p2kg(pounds));
        break;
    case '3':
        printf("You chose conversions from deg. F to deg. R");
        float degreef;
        printf("\nEnter deg F");
        scanf("%f", &degreef);
        printf("In deg r, it is equal to: %0.2f\n", degreef, temp(degreef));
        break;
    default:
        printf("This is an invalid option!");
    }
    // Exit
    return 0;
}

float m2km(float mi)
{
    return (mi * 1.6093440);
}

float p2kg(float lbs)
{
    return (lbs * 2.205);
}

float temp(float degf)
{
    return (degf - 459.67);
}
