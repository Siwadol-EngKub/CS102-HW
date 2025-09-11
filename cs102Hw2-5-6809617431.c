#include <stdio.h>
int main() {
	
	int ticketNum ;
	printf("Please enter your ticket number <xxxxx> :");
	scanf("%d",&ticketNum);
	
	int Num1,Num2,Num3,Num4,Num5,sum1 ;
	Num1 = ticketNum/10000 ;
	Num2 = (ticketNum/1000)%10 ;
	Num3 = (ticketNum/100)%10 ;
	Num4 = (ticketNum/10)%10 ;
	Num5 = ticketNum%10 ;
	sum1 = Num1+Num2+Num3+Num4+Num5 ;
	
	int Numfirst,Numsecond,sum2;
	Numfirst = sum1/10;
	Numsecond = sum1%10;
	sum2 = Numfirst+Numsecond ;
	
	switch (sum2) {
		case 0 :
			printf("Your number is : %d \n",sum2) ;
			printf("Your prediction is: Bad luck") ;
			break ;
		case 1 :
			printf("Your number is : %d \n",sum2) ;
			printf("Your prediction is: Good luck :)") ;
			break ;
		case 2 :
			printf("Your number is : %d \n",sum2) ;
			printf("Your prediction is: Will meet your soul-mate soon ^__^") ;
			break ;
		case 3 :
			printf("Your number is : %d \n",sum2) ;
			printf("Your prediction is: Should make merit") ;
			break ;
		case 4 :
			printf("Your number is : %d \n",sum2) ;
			printf("Your prediction is: Lucky in love") ;
			break ;
		case 5 :
			printf("Your number is : %d \n",sum2) ;
			printf("Your prediction is: Need more rest!") ;
			break ;
		case 6 :
			printf("Your number is : %d \n",sum2) ;
			printf("Your prediction is: Beware of an accident @_@") ;
			break ;
		case 7 :
			printf("Your number is : %d \n",sum2) ;
			printf("Your prediction is: Lucky in game") ;
			break ;
		case 8 :
			printf("Your number is : %d \n",sum2) ;
			printf("Your prediction is: Looking good") ;
			break ;
		case 9 :
			printf("Your number is : %d \n",sum2) ;
			printf("Your prediction is: Will get some money soon.") ;
			break ;	
	}
	
	
	return 0;
	
}
