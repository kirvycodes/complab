#include <stdio.h>

int main(void)
{
    // 1. Variable declaration
    float level;
    // 2. User-input prompt and scan
    printf("\nEnter earthquake level: \n");
    scanf("%f", &level);
    // 3. Decision
    if (level < 5.0)
        printf("Little or no damage \n");
    else if (5.0 <= level && level < 5.5)
        printf("Some damage \n");
    else if (5.5 <= level && level < 6.5)
        printf("Serious damage \n");
    else if (6.5 <= level && level < 7.5)
        printf("Disaster \n");
    else
        printf("Catastrophe \n");
    // Exit
    return 0;
}
