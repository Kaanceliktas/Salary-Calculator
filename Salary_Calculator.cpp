#include <stdio.h>
int main ()
{
	int section;
	float sumofsalary=0,total=0,sold,time;
	
	
	while(1)
	{
		
	printf("Please enter your section 1,2,3,4: \n");
	scanf ("%d", &section);


	switch(section)
	{
		case 1: 
		printf("Please enter the product value that you sold: \n");
		scanf("%f", &sold);
		sumofsalary = (float) sumofsalary + (float) (((sold*13)/100)+50000);
		total=((float)total+(float)sumofsalary)*22;
		break;
		
		case 2: 
		printf("Please enter the product value that you sold: \n");
		scanf("%f", &sold);
		sumofsalary = (float) sumofsalary + (float) ((sold*22)/100);
		total=((float)total+(float)sumofsalary)*22;
		
		break;
		
		case 3: 
		printf("Please enter the hour that you worked: \n");
		scanf("%f", &time);
		sumofsalary = (float) sumofsalary + (float) (time*7000);
		total=((float)total+(float)sumofsalary)*22;
		
		break;
		
		case 4: 
		printf("Please enter the hour that you worked: \n");
		scanf("%f", &time);
		
		if(time<=40)
		{
		
	    sumofsalary = (float) sumofsalary + (float) (time*7000);
		total=((float)total+(float)sumofsalary)*22;
		}
		else
		{
		sumofsalary = (float) sumofsalary + 280000;
		
		sumofsalary = (float) sumofsalary + (float) ((time-40)*10000);
		total=((float)total+(float)sumofsalary)*4;
		}
		break;
		
		default:
			printf("please enter the number belongs to given you !! \n");
			break;
		
	}
	break;
		
	}
	
	
	printf("total: \n %.2f tl",total);
	
}
