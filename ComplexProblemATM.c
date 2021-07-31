#include<conio.h>
int main()


{
	printf("PROGRAMMER # Junid Ahmed\n\n");
	int pin,accountno,mobileno;
	float a,b,c,d,load,amount;
	char ch;
	
	printf("enter your pin code: ");
	scanf("%d",&pin);
	
	if(pin==pin)
	{
	
	printf("enter initial amount: ");
	scanf("%f",&a); 
	printf("enter \nc for credit amount \nd for debit amount  \nb for balance \ne for bill\nt for transfer the amount\nl for mobile load\n ");
	scanf("\n%c",&ch);
	switch(ch)
	{
		case 'c':
			printf("enter credit amount: \n");
			scanf("%f",&b);
			a=a+b;
			printf("new amount=%f\n",a);
			printf("your credited amount is %f ",b);
						
	break;
	case 'd':
		printf("enter debit amount: \n");
		scanf("%f",&b);
		if(a>b)
		{
			a=a-b;
			printf("new amount =%f\n",a);
			printf("your debited amount is %f",b);
		}
		else
		{
			printf("insufficient amount in your accouunt");
		}
		break;
		case 'b':
			printf("amount in your account is %f",a);
			break;
		case 'e':
			printf("enter the meter no to pay the bill:  \n");
			scanf("%f",&c);
			printf("enter the amount to pay the bill\n");
			scanf("%f",&c);
			if(a>=c)
			{
				a=a-c;
				printf("the remaining amount in your account is %f\n",a);
				printf("your bill has been paid\n");
			}
			else
			{
				printf("insufficient balance in your account\n");
			}
			break;
			case 't':
				printf("enter the bank account no you want to transfer amount: \n");
				scanf("%d",&accountno);
				
				printf("enter the amount you want to tranfer: \n ");
				scanf("%f",&d);
				if(a>=d)
				{
					a=a-d;
					printf("the amount remaining in your account is %f\n",a);
					printf("you have transferred %f\n",d);
				}
				else
				{
					printf("insufficent balance to send in your account");
					
				
					break;
					case'l':
						printf("enter your account no: \n ");
						scanf("%f",&accountno);
						printf("enter your mobile no \n");
						scanf("%f",&mobileno);
						printf("enter the amount you want to transfer: \n");
						scanf("%f",&amount);
						
						if(a>=amount)
						{
							a=a-amount;
							printf("you have loaded success fully to the mobile no\n ");
							printf("you have recharged success fully %f\n",amount);
							printf("your reamining balance is %f",a);
						}
						else
						{
							printf("insufficient balance in your account to perfrom load action\n");
					}
						break;
			}
			default:
				
				printf("choose the correct for operation");
		}
	}
	else
	{
		printf("your pin is incorrect");
	
}
}
