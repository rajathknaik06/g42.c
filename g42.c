/*Jim is hosting a party and wants to set up different lighting effects to create the perfect atmosphere. He has three types of lighting modes available: disco lights, strobe lights and laser lights. Each lighting mode has a different intensity adjustment factor.



Conditions for intensity adjustment:

For Disco Lights (Mode 1): The intensity level is multiplied by 1.5.
For Strobe Lights (Mode 2): The intensity level is multiplied by 2.0.
For Laser Lights (Mode 3): The intensity level is multiplied by 1.8.


Write a program to help Jim adjust the intensity of the lighting based on the selected mode.

Input format :
The first line of input consists of an integer N, representing the lighting mode.

The second line consists of a floating-point value M, representing the initial intensity level.

Output format :
The output prints "Intensity: X" where X is a floating point value rounded off to two decimal places, representing the adjusted intensity level.

If invalid modes other than 1, 2, or 3 are given, print "Invalid".*/

#include <stdio.h>

int main() {
    int lightingMode;
    scanf("%d", &lightingMode);
    float intensityLevel;

    switch (lightingMode) {
        case 1: // Disco lights
            scanf("%f", &intensityLevel);
            intensityLevel *= 1.5; // Multiply by 1.5
            printf("Intensity: %.2f", intensityLevel);
            return 0;

        case 2: // Strobe lights
            scanf("%f", &intensityLevel);
            intensityLevel *= 2.0; // Multiply by 2
            printf("Intensity: %.2f", intensityLevel);
            return 0;

        case 3: // Laser lights
            scanf("%f", &intensityLevel);
            intensityLevel *= 1.8; // Multiply by 1.8
            printf("Intensity: %.2f", intensityLevel);
            return 0;

        default:
            printf("Invalid");
            return 0;
    }
}

