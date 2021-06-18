#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct user {
	int CPID;
	char username[100];
	char category[300];
int  prevUnits;
};


int main() {
	FILE *fptr;
	char *token;
	char buffer[201];
	struct user temp_user;
	struct user current_user;
	int user_cpid;
	float amount;
	
	if((fptr = fopen("clients.csv","r"))== NULL) {
		printf("Error!");
		exit(1);
	}
	
	printf("Hello,Welcome to E-CASHPOWER\n\n");
	printf("Enter your cashpower number:\n");
	scanf("%d",&user_cpid);
	printf("Enter required amount:\n");
	scanf("%f",&amount);
	
	
	while (fgets(buffer,sizeof(buffer)-1,fptr) != NULL) {
	int i= 0;
    token = strtok(buffer,",");
    while (token!=NULL)
        {
            if(i==0){
            	temp_user.CPID = atoi(token);
            }
            if(i==1){	
                strcpy(temp_user.username,token);
            }
            
            if(i==2) {
            	strcpy(temp_user.category,token);
			}
        
            
            if(i==3) {
            	temp_user.prevUnits = atoi(token);
			}
            i++;
            token = strtok(NULL, ",");
        }
        
        
        if(temp_user.CPID==user_cpid){
            current_user = temp_user;
  			break;

        }
       
  }  	
  
float non_residential() {
  	float result;
  float units;
  if(!strcmp(current_user.category,"non-residential")){
  	if(current_user.prevUnits==0){
  		if(amount>=0 && amount<=22700){
  		 units=amount/227;
		  }else{
		  	result=amount-22700;
		  	units=(result/255)+100;
		  }
		  
		  
	  }else{
	  	if(current_user.prevUnits<100){
	  		result=(100-current_user.prevUnits)*227;
	  		if(amount<=result){
	  			units=amount/227;
			  }else if(amount>result){
			  	units=(amount-result)/255;
			  	units+=(100-current_user.prevUnits);
			  }
			  else{
			  	units=0;
			  }
	  	}else if(current_user.prevUnits>= 100){
	  		units=amount/227;
		  }
	  }
	  
   printf("%f",units);
    found=0;
   
FILE *fp,*fp1;
struct user1;
fp1=fopen("temp.txt","w");

fwrite(&current_user,sizeof(user),1,fp1);

fclose(fptr);
fclose(fp1);

	fp1=fopen("temp.txt","r");
	fp=fopen("clients.csv","w");
	while(fread(&user1,sizeof(student),1,fp1)){
		fwrite(&user1,sizeof(student),1,fp);
	}
	fclose(fp1);
  }
  
}
  
  
   
  fclose(fptr);
  

		
	return 0;
}



