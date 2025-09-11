#include <stdio.h>
int main() {
	int secs;
	
	printf("Please enter the time in secondes:");
	scanf("%d",&secs);
	
	if (secs<0) {
		printf("Invalid input!!");
	}
	
	int hours,minutes,seconds ;
	hours = secs/3600 ;
	minutes = (secs%3600)/60 ;
	seconds = secs%60;
	
	printf("The time is %d hour(s), %d minute(s), and %d second(s).", hours,minutes,seconds);
	
	return 0;
	
}
