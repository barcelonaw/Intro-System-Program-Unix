/*---------------------------------------------------*/
/* Mico Barcelona                                         */
/* Lab 4                                             */
/* Figure the area of a trapezoid using a data file  */

#include <stdio.h>
#include <stdlib.h>


#define FILE_IN "lab4.dat"
#define FILE_OUT "lab4.txt"


int main(void)
{
    double h, s1, s2, area;
    FILE* dat;
    FILE* txt;


   
		dat = fopen ("lab4.dat", "r");

	if(dat == NULL){
        printf("Error on fopen input file\n");
	
	exit (EXIT_FAILURE);
}


 		txt = fopen ("lab4.txt", "w");
	if(txt == NULL){

        printf("Error on fopen output file\n");
	
	exit(EXIT_FAILURE);
}

    fprintf(txt, "\nMico Barcelona.  Lab 4. \n\n");
    fprintf(txt, "Area of Trapezoid \n\n");
    fprintf(txt, " Height      Side1       Side2         Area   \n");
    fprintf(txt, "--------   ---------   ---------   ---------- \n");
                               
  

   while((fscanf(dat,"%lf %lf %lf", &h, &s1, &s2, "\n\n"))==3){
	
	area = 0.5 *(s1 + s2)*h;
	fprintf(txt,"%4.3lf       %4.3lf       %4.3lf       %4.3lf\n\n\n",h,s1,s2,area);

}

	fclose(dat);
	fclose(txt);
	return EXIT_SUCCESS;

}
/*---------------------------------------------------*/
