#include<stdio.h>
enter_pin()
{
	int x;
	while(x!=45678)
	{
	printf("\nenter your ATM pin");
	scanf("%d",&x);
	if(x!=45678)
	{
		printf("\nyou entered wrong password");
	}
	else{
			printf("\nwelcome to your bank account");	
	}
	
}	
}
enter_choice()
{
	int choice,a,amount=1000;
	char sentence[500];
	printf("\npress 1 for withdrawl");
	printf("\npress 2 for check balance");
	printf("\npress 3 for mini statement");
	printf("\npress 4 for deposit money");
	printf("\nenter your choice");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			{
				printf("Enter the amount ");				
				scanf("%d",&a);
				if (a>amount)
				{
					printf("insufficient balance");
				}
				else
				{
				
				printf("\ncollect your cash %d/-",a);
				amount=amount-a;
				printf("\nyour remaining balance is %d",amount);
			}
			}
			break;
		case 2:
			{
				printf("your amount is %d",amount);
			}
			break;
		case 3:
			{
				printf("enter your name ");
				fflush(stdin);
				fgets(sentence, 500, stdin);
				printf("\nName: %s",sentence);
			}
			break;
		case 4:
			{
				printf("deposit the cash ");
				scanf("%d",&a);
				amount=amount+a;
				printf("your bank balance is:%d ",amount);
			}
			break;
		default:
		{
			printf("please enter valid choice");
		}
	}
	
}
int main()
{
	printf("*************welcome to the ATM***************\n");
	enter_pin();
	enter_choice();
	return 0;
}
