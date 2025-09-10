#include <stdio.h>

float MAX_WEIGHT = 5.6;
int motors;
int packages;

int main(void) {
printf("Input amount of motors: \n");
scanf("%d", &motors);

printf("Input weight: \n");
scanf("%d", &packages);

printf("Your input was %d motors and %d packages \n", motors, packages);

if (packages / motors <= MAX_WEIGHT)
	printf("The belt can carry the package");
else
	printf("The belt can't carry the package");
}