/****Mico Barcelona****/

/*Lab 5, class_stats function*/


#include "lab5.h"

void class_stats(int grades[], int number_of_grades, double *average, int distribution[]){

	*average = 0.0;

	double sum = 0;

	
	for(int i = 0; i < DIST_SIZE; i++){
		distribution[i] = 0;
}


	
	for(int j = 0; j < number_of_grades; j++){
		sum += grades[j];
		int pos = grades[j]/10;
		distribution[pos]++;
}

	*average =(1.0 *sum / number_of_grades);

		return;

}












