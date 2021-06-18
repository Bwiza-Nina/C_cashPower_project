#include<stdio.h>
#include<stdlib.h>
int main(){
	int category, age, phone, amount;
	char name[30];
	float units;
	char email[40];

		printf("Please enter your user information!");
		printf("\n1.Residential\n");
	    printf("2.Non-residential\n");
	    printf("3.Telecom Towers\n");
	    printf("4.Water treatment plants and Water pumping stations\n");
	    printf("5.Hotels\n");
	    printf("6.Health facilities\n");
	    printf("7.Broadcasters\n");
	    printf("8.Commercial Data Centers\n");
	    
	    printf("Enter the number of your category you are in: ");
	    scanf("%d",&category);
	
	    printf("Enter your amount of money: ");
	    scanf("%d",&amount);
	    
	    
	    switch(category){
		    case 3:
			    units = amount/201;
		    break;
		    case 4:
			    units = amount/126;
		    break;
		    case 5:
			    units = amount/157;
		    break;
		    case 6:
			    units = amount/186;
		    break;
		    case 7:
			    units = amount/192;
		    break;
		    case 8:
			    units = amount/179;
		    break;
		    default:
			    printf(" Invalid amount or category entered. \n");
		    break;
	    }
	    if(units){
		    printf("Congragulations!!! You successfully bought %f units.",units);
	    }
	}
	
	
	return 0;
}
