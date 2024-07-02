#include<stdio.h>
main()
{
	int n,q,amt,total_amt=0;
	char c;
	do{
		printf("\n\n\t 1.pizza  price: = 180 rs/pcs");
		printf("\n\n\t 2.Burger price: = 100 rs/pcs");
		printf("\n\n\t 3.Dosa   price: = 120 rs/pcs");
		printf("\n\n\t 4.Idli   price: = 50 rs/pcs");
		
		printf("\n\n\t enter your choice : ");
		scanf("%d",&n);
		
		if(n==1)
		{
			printf("\n\n\t you have selected pizza ");
			printf("\n\n\t Enter the quantity ");
			scanf("%d",&q);
			amt=180*q;
		}
		else if(n==2)
		{
			printf("\n\n\t you have selected burger ");
			printf("\n\n\t Enter the quantity ");
			scanf("%d",&q);
			amt=100*q;
		}
		else if(n==3)
		{
			printf("\n\n\t you have selected dosa ");
			printf("\n\n\t Enter the quantity ");
			scanf("%d",&q);
			amt=120*q;
		}
		else if(n==4)
		{
			printf("\n\n\t you have selected idli ");
			printf("\n\n\t Enter the quantity ");
			scanf("%d",&q);
			amt=50*q;
		}
		else
			printf("\n\n\t invalid choice ");
		
	total_amt=amt+total_amt;
	
	printf("\n\n\t amount is : %d",amt);
	printf("\n\n\t total amount is : %d",total_amt);
	printf("\n\n\t do you want to conitnue ? (y/n) :");
	scanf("%s",&c);
			
		
		
		
	}
	
   while (c == 'y');
   return(0);
	
}
