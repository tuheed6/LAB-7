#include <stdio.h>

int main() {
    float temperatures[7];
    float sum = 0;
    float average = 0;
    int extremeDays[7] = {0};
    int extremeCount = 0;

    printf("Enter the temperatures for 7 days:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &temperatures[i]);
        sum += temperatures[i];
        
        if (temperatures[i] > 40 || temperatures[i] < 0) {
            extremeDays[extremeCount++] = i + 1;
        }
    }

    average = sum / 7.0;
    printf("Average temperature: %.1f°C\n", average);

    if (extremeCount > 0) {
        printf("Extreme temperatures on day(s): ");
        for (int i = 0; i < extremeCount; i++) {
            printf("%d ", extremeDays[i]);
        }
        printf("\n");
    } else {
        printf("No extreme temperatures recorded.\n");
    }

    return 0;
