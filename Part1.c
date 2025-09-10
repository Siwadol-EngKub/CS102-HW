#include <stdio.h>

int main() {
    
	//หาค.สูงพ่อแม่
	float Mh,Fh;
    printf("Enter the height of the mother (centimeters): \n");
    scanf("%f",&Mh);
    printf("Enter the height of the father (centimeters): \n");
    scanf("%f",&Fh);
  
    //คำนวณmaxminจากavg
	float Havg,Hmin,Hmax;
	Havg = (Mh + Fh)/2;
	Hmin = Havg - 13.5;
	Hmax = Havg + 13.5;
	
	//แสดงผล
	printf("The possible height of the child is between %.2f to %.2f centimeters.",Hmin,Hmax);

    return 0;
}
