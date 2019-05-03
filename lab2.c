/* Name:	Michael Ressler
 * Class:	CSCI112 Programming with C
 * Assignment:	Lab 2
 * Date:	1/30/19
*/

#include<stdio.h>
#include<math.h>

// function that calculates BMI and returns that value to BMI variable
int calcBmi(double h, double w) {
	double bmi;
	bmi = ((703 * w) / pow(h, 2.0)); //formula to compute BMI that uses math library to compute square of height
return (bmi); //returns value to main function where it is called, and saves to variable bmi.
}

void bmiStatus(double bmi) {
	if (bmi >= 25 && bmi < 30){ //BMI status for overweight: between 25 and 29.9 BMI
		printf("You are overweight\n");
		}
	else if (bmi >= 30){ //BMI status for obese: 30 and over BMI
		printf("You are obese\n");
		}
	else if (bmi < 18.5 && bmi > 0) { //BMI status for underweight: below 18.5 BMI
		printf("You are underweight\n");
		}
	else if (bmi >= 18.5 && bmi < 25){ //BMI status for normal weight: between 18.5 and 24.9 BMI
		printf("You are normal weight\n");
		} 
	else {
	printf("ERROR: incorrect values!\n"); //catches if BMI is zero or below, input error
	}
}

int main(int argc, char** argv)  {
	double 	ht_in,
		wt_lb,
		bmi;

printf("Enter your height in inches, then weight in pounds: ");
scanf("%lf %lf", &ht_in, &wt_lb);

printf("Height: %.1f inches, Weight: %.1f pounds\n",ht_in, wt_lb);

bmi = calcBmi(ht_in, wt_lb); //calls function that calculates the BMI value
printf("Your BMI is %.1f\n",bmi);

bmiStatus(bmi); //calls function to print the BMI status
 
return(0);
}
