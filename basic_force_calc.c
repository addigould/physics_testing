#include <stdio.h>

int main(){

	double accel;
	double mass;
	double force;

	printf("Hello dear physics student.\n"
		"This is a very simple program I wrote not only to help myself learn how to use vim and create programs on my own laptop,\n"
		"but also so you can have a simple force caluclator that you probably don't need! Don't worry, I'll make more helpful stuff in the future.\n");

	printf("In this program you will enter an accelleration and mass and the program will tell you the force needed to carry out such an action.\n"
		"\n"
		"Enter the accelleration in meters per second squared and hit enter here:\n");
	scanf("%lf", &accel);
	printf("Enter the mass in kilograms and hit enter here:\n"
		"\n");
	scanf("%lf", &mass);

	force = (mass * accel);

	printf("The force required to accellerate a mass of %lf kilograms to %lf m/s^2 is: %lf Newtons\n", mass, accel, force);

	return 0;

}
