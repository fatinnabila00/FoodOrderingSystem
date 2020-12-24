#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include<windows.h>
#include<time.h>
#define PASSWORD 1234


void menu1 (void);
void menu10 (void);
void food (void);
void alacarte (void);
void malayfood (void);
void westernfood (void);
void receipt (void);
void pickup (void);
void NasiLemakA(int);
void NasiLemakT(int);
void NasiAyam(int);
void NasiKukusA(int);
void NasiKukusI(int);
void RotiCanai(int);
void RotiTelur(int);
void RotiBom(int);
void rate (void);
void cancel (void);
void rating (char stall[]);
void listofmenu (void);
void type (void);
float H (int );
float S(int );
float P (int );
float T (int );
void table (int ,int ,int ,int ,int ,int ,int );
void rating (void);
int quantity[100]={0};
float totalprice[100]={0}, total=0;
float time1=0, before=0;
int y, container, i, loop, wait;
char name[100], id [10], phone[100];
int pass;
int choice, stall, num, code, a, count;
char n0 [30]={"Nasi Goreng Kampung(EC)"};	
char n1 [30]={"Nasi Goreng Kampung(M)"};	
char n2 [30]={"Nasi Goreng Kampung(L)"};		
char n3	[30]={"Nasi Goreng Cina(EC)"};		
char n4	[30]={"Nasi Goreng Cina(M)"};		
char n5	[30]={"Nasi Goreng Cina(L)"};		
char n6	[30]={"Nasi Goreng Ikan Masin(EC)"};		
char n7	[30]={"Nasi Goreng Ikan Masin(M)"};		
char n8	[30]={"Nasi Goreng Ikan Masin(L)"};		
char n9	[30]={"Nasi Goreng Paprik(EC)"};		
char n10[30]={"Nasi Goreng Paprik(M)"};		
char n11[30]={"Nasi Goreng Paprik(L)"};		
char n12[30]={"Nasi Goreng Ladna(EC)"};			
char n13[30]={"Nasi Goreng Ladna(M)"};		
char n14[30]={"Nasi Goreng Ladna(L)"};		
char n15[30]={"Kuey Teow Kung Fu(EC)"};		
char n16[30]={"Kuey Teow Kung Fu(M)"};		
char n17[30]={"Kuey Teow Kung Fu(L)"};		
char n18[30]={"Kuey Teow Sup(EC)"};		
char n19[30]={"Kuey Teow Sup(M)"};		
char n20[30]={"Kuey Teow Sup(L)"};		
char n21[30]={"Kuey Teow Goreng(EC)"};		
char n22[30]={"Kuey Teow Goreng(M)"};		
char n23[30]={"Kuey Teow Goreng(L)"};		
char n24[30]={"Kuey Teow Tomyam(EC)"};		
char n25[30]={"Kuey Teow Tomyam(M)"};		
char n26[30]={"Kuey Teow Tomyam(L)"};
char n27[30]={"Nasi Goreng Pataya(EC)"};		
char n28[30]={"Nasi Goreng Pataya(M)"};		
char n29[30]={"Nasi Goreng Pataya(L)"};		
char n30[30]={"Mee Kung Fu(EC)"};		
char n31[30]={"Mee Kung Fu(M)"};		
char n32[30]={"Mee Kung Fu(L)"};		
char n33[30]={"Mee sup(EC)"};	
char n34[30]={"Mee sup(M)"};		
char n35[30]={"Mee sup(L)"};	
char n36[30]={"Mee Goreng(EC)"};		
char n37[30]={"Mee Goreng(M)"};		
char n38[30]={"Mee Goreng(L)"};			
char n39[30]={"Meehun Tomyam(EC)"};		
char n40[30]={"Meehun Tomyam(M)"};		
char n41[30]={"Meehun Tomyam(L)"};		
char n42[30]={"Nasi Bujang(EC)"};		
char n43[30]={"Nasi Bujang(M)"};		
char n44[30]={"Nasi Bujang(L)"};		
char n45[30]={"Nasi Lemak Ayam(NLH)"};		
char n46[30]={"Nasi Lemak Ayam(EC)"};	
char n47[30]={"Nasi Lemak Ayam(IS)"};		
char n48[30]={"Nasi Lemak Telur(NLH)"};		
char n49[30]={"Nasi Lemak Telur(EC)"};		
char n50[30]={"Nasi Lemak Telur(IS)"};		
char n51[30]={"Nasi Ayam(NLH)"};		
char n52[30]={"Nasi Ayam(EC)"};		
char n53[30]={"Nasi Ayam(IS)"};		
char n54[30]={"Nasi Kukus Ayam(NKAP)"};		
char n55[30]={"Nasi Kukus Ayam(L)"};		
char n56[30]={"Nasi Kukus Ikan(NKAP)"};	
char n57[30]={"Roti Canai(EC)"};		
char n58[30]={"Roti Telur(EC)"};		
char n59[30]={"Roti Bom(EC)"};		
char n60[30]={"Chicken Chop(RSC)"};		
char n61[30]={"Chicken Chop(M)"};		
char n62[30];	
char n63[30];			
char n64[30]={"Spagetthi Bolognese(M)"};		
char n65[30]={"Spagetthi Carbonara(M)"};		
char n66[30]={"Roti John(RSC)"};		
char n67[30]={"Beef Burger(RSC)"};		
char n68[30]={"Beef Burger(L)"};		
char n69[30]={"Chicken Burger(RSC)"};		
char n70[30]={"Chicken Burger(L)"};		
char n71[30]={"Benjo(L)"};		
char n72[30]={"Ayam Bob(PP)"};		
char n73[30]={"Sausage(PP)"};	
char n74[30]={"Chicken Shawarma(PP)"};
int main ()
{   
    int category; 
    printf("\n\n\n\n\n\t\t\t\t\tProcessing");
	
	for(wait=0;wait<=3;wait++)
    {
		Sleep(1000);			//	to delay for 0.5 second
    	printf(" .");
    }
        system("cls");
        
	for (loop=0;loop<5;loop++)
	{
	printf("\n\n\n");
	printf("\n\t\t ===========   =====      ===  ===============   ===         ===  =====      ===   ============");
	printf("\n\t\t ===========   === ==     ===  ===============   ===         ===  === ==     ===   ============");
	printf("\n\t\t==         ==  === ==     ===          ==        ===         ===  === ==     ===  ==");
	printf("\n\t\t==         ==  ===  ==    ===          ==        ===         ===  ===  ==    ===  ==");
	printf("\n\t\t==         ==  ===  ==    ===          ==        ===         ===  ===  ==    ===  ==       =====");
	printf("\n\t\t=============  ===   ==   ===          ==        ===         ===  ===   ==   ===  ==       =====");
	printf("\n\t\t=============  ===   ==   ===   ===    ==        ===         ===  ===   ==   ===  ==           ==");
	printf("\n\t\t==         ==  ===    ==  ===   ===    ==        ===         ===  ===    ==  ===  ==           ==");
	printf("\n\t\t==         ==  ===    ==  ===     ===  ==        ===         ===  ===    ==  ===  ==           ==");
	printf("\n\t\t==         ==  ===     == ===     ===  ==         =============   ===     == ===   ============= ");
	printf("\n\t\t==         ==  ===      =====        ===           ===========    ===      =====   ============= ");
	printf("\n");
	printf("\n\t\t=============    ===============  =====      ===   ============    ===        ===    ===============  ===");
	printf("\n\t\t=============    ===============  === ==     ===   ============    ===        ===    ===============  ===");
	printf("\n\t\t==           ==  ===              === ==     ===  ==               ===      ===            ===        ===");
	printf("\n\t\t==           ==  ===              ===  ==    ===  ==               ===      ===            ===        ===");
	printf("\n\t\t==           ==  ==============   ===  ==    ===  ==       =====   ========                ===        ===");
	printf("\n\t\t==           ==  =============    ===   ==   ===  ==       =====   ===      ===            ===        ===");
	printf("\n\t\t==           ==  ===              ===   ==   ===  ==           ==  ===      ===            ===        ===");
	printf("\n\t\t==           ==  ===              ===    ==  ===  ==           ==  ===        ===          ===        ===");
	printf("\n\t\t==           ==  ===              ===    ==  ===  ==           ==  ===        ===          ===        ===");
	printf("\n\t\t=============    ===============  ===     == ===   =============   ===          ===  ===============  =============");
	printf("\n\t\t=============    ===============  ===      =====   =============   ===          ===  ===============  =============");	
	printf("\n\n\n");
	Sleep(500);
		system("cls");
	}
	Sleep(500);
	printf("\n\n\n\n\n\t\t\t\t\tProcessing");
	
	for(wait=0;wait<=3;wait++)
    {
		Sleep(1000);			//	to delay for 0.5 second
    	printf(" .");
    }
    
    system("cls");
	printf("\n\n");
	for(int count=0; count<160; count++){printf("-");}
	printf("\n\n\t\t\t\t\t\t WELCOME TO UITM DENGKIL ONLINE FOOD STORE\n\n");
	for(int count=0; count<160; count++){printf("-");}
    printf("\n\n\t\t\t\t\t\t\t MAIN PAGE\n");
    printf("\n\t\t\t\t\t\t\t 1. Enter login page");
    printf("\n\t\t\t\t\t\t\t 2. Rate stalls");
    printf("\n\t\t\t\t\t\t\t 3. Exit");
    printf("\n\n\t\t\t\t\t ENTER YOUR CHOICE : ");
    scanf("%d", &choice);
    Sleep(500);
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tProcessing");
	
	for(wait=0;wait<=3;wait++)
    {
		Sleep(1000);			//	to delay for 0.5 second
    	printf(" .");
    }
    
    
    switch (choice)
    {
    	case 1: system("cls");
				type();
				break;
		
		case 2: system("cls");
				rating();
				break;		
	            
    	case 3:	system("cls");
				printf("\n\n\n\t\t\t\t\t\tHave a nice day ahead! :) \n\n\n");
    	    	break;
    	
    	default	: while(choice!=1||choice!=2||choice!=3)
				{
					
					printf("\n\n\t\t\t\t\tInvalid choice. Please re-enter.\n\n");
					Sleep(2000);
       				system("cls");
       				
					for(int count=0; count<160; count++){printf("-");}
					printf("\n\n\t\t\t\t\t\t WELCOME TO UITM DENGKIL ONLINE FOOD STORE\n\n");
					for(int count=0; count<160; count++){printf("-");}
    				printf("\n\n\t\t\t\t\t\t\t MAIN PAGE\n");
    				printf("\n\t\t\t\t\t\t\t 1. Enter login page");
    				printf("\n\t\t\t\t\t\t\t 2. Rate stalls");
    				printf("\n\t\t\t\t\t\t\t 3. Exit");
    				printf("\n\n\t\t\t\t\t ENTER YOUR CHOICE : ");
    				scanf("%d", &choice);
    				Sleep(500);
					printf("\n\n\n\n\n\t\t\t\t\tProcessing");
	
					for(wait=0;wait<=3;wait++)
    				{
						Sleep(1000);			//	to delay for 0.5 second
    					printf(" .");
    				}
       				
       				if(choice==1)
					type();
					
					if (choice==2)
					rating();
					
					if (choice==3)
					exit(0);
				}
    
	        
	}
	
return 0;		
}

void type (void)
{
	while(choice!=1 || choice!=2 || choice!=3)
	{
	system("cls");
	printf("\n\n\n");
	printf("\t\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t\t\t\t\t$$$$$                                                          $$$$$\n");
	printf("\t\t\t\t\t\t$$$$$                Choose your category:                     $$$$$\n");
	printf("\t\t\t\t\t\t$$$$$                                                          $$$$$\n");
	printf("\t\t\t\t\t\t$$$$$                [1] - LECTURER                            $$$$$\n");
	printf("\t\t\t\t\t\t$$$$$                                                          $$$$$\n");
	printf("\t\t\t\t\t\t$$$$$                [2] - STUDENT                             $$$$$\n");
	printf("\t\t\t\t\t\t$$$$$                                                          $$$$$\n");
	printf("\t\t\t\t\t\t$$$$$                [3] - STAFF                               $$$$$\n");
	printf("\t\t\t\t\t\t$$$$$                                                          $$$$$\n");
	printf("\t\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	
	printf("\n\n\t\t\t\t\t\tEnter you choice : ");
	scanf("%d", &choice);
	if(choice==1 || choice==2 || choice==3)
	{
	menu1 ();
	}
	else
	{
	printf("\n\n\t\t\t\t\t\tInvalid choice. Please re-enter.\n\n");
	Sleep(2000);
	}
	}
	
}

void menu1 (void)
{
	while(pass!=PASSWORD)
	{
	system("cls");
	printf("\n\n");
	printf("\n\t\t**           ***********  ***********  ******  ****    **        ************  ************  ***********  ***********");
	printf("\n\t\t**           ***********  ***********  ******  ****    **        ************  ************  ***********  ***********");
	printf("\n\t\t**           **       **  **             **    ** **   **        **        **  **        **  **           **         ");
	printf("\n\t\t**           **       **  **    *****    **    **  **  **        **        **  **        **  **    *****  ***********");
	printf("\n\t\t**           **       **  **    *****    **    **  **  **        ************  ************  **    *****  ***********");
	printf("\n\t\t**           **       **  **       **    **    **   ** **        ************  ************  **       **  **         ");
	printf("\n\t\t**           **       **  **       **    **    **   ** **        **            **        **  **       **  **         ");
	printf("\n\t\t***********  ***********  ***********  ******  **    ****        **            **        **  ***********  ***********");
	printf("\n\t\t***********  ***********  ***********  ******  **    ****        **            **        **  ***********  ***********");
    
	printf("\n\n\n\n\n\t\t\t\t\t\t\tID >>  ");
	gets(id);
	gets(id);
	printf("\n\t\t\t\t\t\t\tPASSWORD   >>  ");
	scanf("%d", &pass);
	
	if(pass==PASSWORD)
	  {
		system("cls");
		printf("\n\n\t\t\t\t\t\t\tYOU HAVE SUCCESSFULLY LOGGED IN!");
		printf("\n\n\t\t\t\t\t\t\tEnter your name : ");
		gets(name);
		gets(name);
		printf("\n\n\t\t\t\t\t\tEnter your phone number : ");
		gets(phone);
		printf("\n\t\t\t\t\t\t\tHello, ");
		puts(name);
	}
	
	else
	{
		  printf("\n\n\n\n\n\t\t\t\tINCORRECT PASSWORD!");
		  printf("\n\n\n\n\n\t\t\t\t\t\tPlease re-enter your password");
		  Sleep(2000);
	      
	} 
	
	}
	
	printf("\n\n\t\t\t\t\t\t\tEnter 1 to proceed : ");
	scanf("%d",&choice);
	system("cls");
	menu10 ();
}

void menu10 (void)
{
	while(choice!=1||choice!=2||choice!=3||choice!=4||choice!=5||choice!=0||choice!=6)
	{
	system("cls");
	printf("\n\n\t\t\t\t\t*********************************************************************************************\n");
	printf("\t\t\t\t\t***************************************==========********************************************\n");
	printf("\t\t\t\t\t**************************************|   MENU   |*******************************************\n");
	printf("\t\t\t\t\t***************************************==========********************************************\n");
	printf("\t\t\t\t\t*********************************************************************************************\n");
	printf("\t\t\t\t\t*******                  **********                   **********                    *********\n");
	printf("\t\t\t\t\t*****                      ******                       ******                        *******\n");
	printf("\t\t\t\t\t****          -1-           ****           -2-           ****           -3-            ******\n");
	printf("\t\t\t\t\t***                          **                           **                            *****\n");
	printf("\t\t\t\t\t****     DISPLAY MENU       ****      MAKE AN ORDER      ****   CHOOSE PICK UP TIME    ******\n");
	printf("\t\t\t\t\t*****                      ******                       ******                        *******\n");
	printf("\t\t\t\t\t*******                  **********                   **********                    *********\n");
	printf("\t\t\t\t\t*********************************************************************************************\n");
	printf("\t\t\t\t\t*********************************************************************************************\n");
	printf("\t\t\t\t\t*******                  **********                   **********                    *********\n");
	printf("\t\t\t\t\t*****                      ******                       ******                        *******\n");
	printf("\t\t\t\t\t****          -4-           ****           -5-           ****           -6-            ******\n");
	printf("\t\t\t\t\t***                          **                           **                            *****\n");
	printf("\t\t\t\t\t****       CANCEL ORDER     ****        RECEIPT          ****          RATING          ******\n");
	printf("\t\t\t\t\t*****                      ******                       ******                        *******\n");
	printf("\t\t\t\t\t*******                  **********                   **********                    *********\n");
	printf("\t\t\t\t\t*********************************************************************************************\n");
	printf("\t\t\t\t\t*********************************************************************************************\n");
	printf("\t\t\t\t\t***********************************                   ***************************************\n");
	printf("\t\t\t\t\t*********************************                       *************************************\n");
	printf("\t\t\t\t\t*******************************            -0-           ************************************\n");
	printf("\t\t\t\t\t*******************************                           ***********************************\n");
	printf("\t\t\t\t\t********************************       EXIT SYSTEM       ************************************\n");
	printf("\t\t\t\t\t*********************************                       *************************************\n");
	printf("\t\t\t\t\t***********************************                   ***************************************\n");	
	printf("\t\t\t\t\t*********************************************************************************************\n");
	printf("\t\t\t\t\t*********************************************************************************************\n");
	
	printf("\n\n\t\t\t\t\tENTER YOUR CHOICE : ");
	scanf("%d", &choice);
	system("cls");
	if(choice==1)
	listofmenu();
	if(choice==2)
	food ();
	else if(choice==3)
	pickup ();
	else if(choice==4)
	cancel ();
	else if (choice==5)
	receipt ();
	else if (choice==6)
	rating ();
	else if(choice==0)
	exit(0);
	else
	{
		printf("\n\n\t\t\t\t\tInvalid choice. Please re-enter.\n\n");
		Sleep(2000);
	}
	}
}

void food (void)
{
	int i;
	while(choice!=1||choice!=2||choice!=3)
	{
	system("cls");
	printf("\n\t\t\t\t\t\t      ###############     TYPE OF FOOD      ###############\n");
	printf("\t\t\t\t\t\t     ##             ##     ===========     ##             ##\n");
    printf("\t\t\t\t\t\t    ##               ##                   ##               ##\n");
    printf("\t\t\t\t\t\t   ##                 ##                 ##                 ##\n");
    printf("\t\t\t\t\t\t  ##                   ##               ##                   ##\n");
    printf("\t\t\t\t\t\t ##                     ##             ##                     ##\n");
    printf("\t\t\t\t\t\t##       1. ALA          ###############       2. MALAY       ##\n");
    printf("\t\t\t\t\t\t ##        CARTE        ##             ##         FOOD        ##\n");
    printf("\t\t\t\t\t\t  ##                   ##               ##                   ##\n");
    printf("\t\t\t\t\t\t   ##                 ##                 ##                 ##\n");
    printf("\t\t\t\t\t\t    ##               ##                   ##               ##\n");
    printf("\t\t\t\t\t\t     ##             ##                     ##             ##\n");
    printf("\t\t\t\t\t\t      ###############      3. WESTERN       ###############\n");
    printf("\t\t\t\t\t\t                    ##        FOOD         ##\n");
    printf("\t\t\t\t\t\t                     ##                   ##\n");
	printf("\t\t\t\t\t\t                      ##                 ##\n");
    printf("\t\t\t\t\t\t                       ##               ##\n");
    printf("\t\t\t\t\t\t                        ##             ##\n");
    printf("\t\t\t\t\t\t                         ###############\n\n");
	
	printf("\n\n\t\t\t\t\t\tEnter your choice : ");
	scanf("%d", &choice);
	if(choice==1)
	alacarte ();
	else if(choice==2)
	malayfood ();
	else if(choice==3)
	westernfood ();
	else
	{
		printf("\n\n\t\t\t\t\tInvalid choice. Please re-enter.\n\n");
		Sleep(2000);
	}
    }
}

void alacarte(void)
{
	int code, stall, x, y, z;
	float price;
	while(code<1||code>15)
	{
	system("cls");
	printf("\t\t\t\t\t\tALA CARTE\n");
	printf("\n\t\t _______________________________ ________________________________ ________________________________");
	printf("\n\t\t| code |      AlaCarte          || code |      AlaCarte          || code |      AlaCarte          |");
	printf("\n\t\t|______|________________________||______|________________________||______|________________________|");
	printf("\n\t\t|   1  |  Nasi Goreng Kampung   ||   6  |    Kuew Teow Kungfu    ||  11  |      Mee Kungfu        |");
	printf("\n\t\t|______|________________________||______|________________________||______|________________________|");
	printf("\n\t\t|   2  |  Nasi Goreng Cina      ||   7  |    Kuew Teow Sup       ||  12  |      Mee Sup           |");
	printf("\n\t\t|______|________________________||______|________________________||______|________________________|"); 
	printf("\n\t\t|   3  | Nasi Goreng Ikan Masin ||   8  |    Kuew Teow Goreng    ||  13  |      Mee Goreng        |");
	printf("\n\t\t|______|________________________||______|________________________||______|________________________|");
	printf("\n\t\t|   4  | Nasi Goreng Paprik     ||   9  |    Kuew Teow Tomyam    ||  14  |      Meehun Tomyam     |");
	printf("\n\t\t|______|________________________||______|________________________||______|________________________|");
    printf("\n\t\t|   5  | Nasi Goreng Ladna      ||  10  |   Nasi Goreng Pataya   ||  15  |      Nasi Bujang       |");
	printf("\n\t\t|______|________________________||______|________________________||______|________________________|");
	printf("\n\n\t\tEnter type of food using code given : ");
	scanf("%d",&code);
	system("cls");

	if (code == 1)
	{
  		printf("\t\t\tNASI GORENG KAMPUNG\n");
		printf("__________________________________________________________________________________");
		printf("\n|      |                              stall                                      |");
		printf("\n| code |_________________________________________________________________________|");
		printf("\n|      | Engineering's Cafe (1) |     Meletop (2)    |    Lengkuas (3)           |");
		printf("\n|______|________________________|____________________|___________________________|");
		printf("\n|  1   | Nasi Goreng Kampung    |Nasi Goreng Kampung |   Nasi Goreng Kampung     |");
		printf("\n|      |        4.00            |       4.00         |        4.00               |");
		printf("\n|______|________________________|____________________|___________________________|");
    	printf("\n\n\n\t\tENTER STALL CODE : ");
    	scanf("%d", &stall);
    	
    	if (stall==1)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[0]+=a;
          totalprice[0]+=(4.00 * a);
          printf("\n\n\t\tTotal price is %.2f", 4.00*a);	
		}
		
		if (stall==2)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[1]+=a;
          totalprice[1]+=(4.00 * a);
          printf("\n\n\t\tTotal price is %.2f", 4.00 * a);	
		}
		
		if(stall==3)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[2]+=a;
          totalprice[2]+= 4.00 * a;
          printf("\n\n\t\tTotal price is %.2f", 4.00 * a);	
		}
       
	}

	else if (code == 2)
	{
		printf("\t\t\tNASI GORENG CINA\n");
	    printf("__________________________________________________________________________________");
	    printf("\n|      |                              stall                                      |");
	    printf("\n| code |_________________________________________________________________________|");
	    printf("\n|      | Engineering's Cafe (1) |     Meletop (2)    |    Lengkuas (3)           |");
	    printf("\n|______|________________________|____________________|___________________________|");
	    printf("\n|  2   |     Nasi Goreng Cina   |  Nasi Goreng Cina  |    Nasi Goreng Cina       |");
	    printf("\n|      |        5.00            |       5.00         |        4.50               |");
	    printf("\n|______|________________________|____________________|___________________________|");
    	printf("\n\n\n\t\tENTER STALL CODE : ");
    	scanf("%d", &stall);
		
		if (stall==1)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[3]+=a;
          totalprice[3]+=5.00 * a;
          printf("\n\n\t\tTotal price is %.2f", 5.00 * a);	
		}
		
		if (stall==2)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[4]+=a;
          totalprice[4]+=5.00 * a;
          printf("\n\n\t\tTotal price is %.2f", 5.00 * a);	
		}
		
		if (stall==3)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[5]+=a;
          totalprice[5]+=4.50 * a;
          printf("\n\n\t\tTotal price is %.2f", 4.50 * a);	
		}
	}
   
	else if (code == 3)
	{
		printf("\t\t\tNASI GORENG IKAN MASIN\n");
	    printf("\n____________________________________________________________________________________");
	    printf("\n|      |                              stall                                        |");
	    printf("\n| code |___________________________________________________________________________|");
	    printf("\n|      | Engineering's Cafe (1) |     Meletop (2)      |    Lengkuas (3)           |");
	    printf("\n|______|________________________|______________________|___________________________|");
	    printf("\n|  2   | Nasi Goreng Ikan Masin |Nasi Goreng Ikan Masin|   Nasi Goreng Ikan Masin  |");
	    printf("\n|      |        5.00            |       4.00           |        4.00               |");
	    printf("\n|______|________________________|______________________|___________________________|");
    	printf("\n\n\n\t\tENTER STALL CODE : ");
    	scanf("%d", &stall);
		
		if (stall==1)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[6]+=a;
          totalprice[6] += 5.00 * a;
          printf("\n\n\t\tTotal price is %.2f", 5.00 * a);	
		}
		
		if (stall==2)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[7]+=a;
          totalprice[7] += 4.00 * a;
          printf("\n\n\t\tTotal price is %.2f", 4.00 * a);	
		}
		
		if (stall==3)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[8]+=a;
          totalprice[8] += 4.50 * a;
          printf("\n\n\t\tTotal price is %.2f", 4.00 * a);	
		}
	}
	
    else if (code == 4)
    {
	  	printf("\t\t\tNASI GORENG PAPRIK\n");
	    printf("__________________________________________________________________________________");
	    printf("\n|      |                              stall                                      |");
	    printf("\n| code |_________________________________________________________________________|");
	    printf("\n|      | Engineering's Cafe (1) |     Meletop (2)    |    Lengkuas (3)           |");
	    printf("\n|______|________________________|____________________|___________________________|");
	    printf("\n|  2   |   Nasi Goreng Paprik   | Nasi Goreng Paprik |    Nasi Goreng Paprik     |");
	    printf("\n|      |        5.00            |       4.00         |        5.00               |");
	    printf("\n|______|________________________|____________________|___________________________|");
    	printf("\n\n\n\t\tENTER STALL CODE : ");
    	scanf("%d", &stall);
    	
		if (stall==1)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[9]+=a;
          totalprice[9] += 5.00 * a;
          printf("\n\n\t\tTotal price is %.2f", 5.00 * a);	
		}
		
		if (stall==2)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[10]+=a;
          totalprice[10] += 4.00 * a;
          printf("\n\n\t\tTotal price is %.2f", 4.00 * a);	
		}
		
		if (stall==3)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[11]+=a;
          totalprice[11] += 5.00 * a;
          printf("\n\n\t\tTotal price is %.2f", 5.00 * a);	
		}
	}
    	
    else if (code == 5)
    {
	   	printf("\t\t\tNASI GORENG LADNA\n");
	    printf("__________________________________________________________________________________");
	    printf("\n|      |                              stall                                      |");
	    printf("\n| code |_________________________________________________________________________|");
	    printf("\n|      | Engineering's Cafe (1) |     Meletop (2)    |    Lengkuas (3)           |");
	    printf("\n|______|________________________|____________________|___________________________|");
	    printf("\n|  2   |    Nasi Goreng Ladna   |  Nasi Goreng Ladna |    Nasi Goreng Ladna      |");
	    printf("\n|      |         5.50           |        4.00        |          5.00             |");
	    printf("\n|______|________________________|____________________|___________________________|");
    	printf("\n\n\n\t\tENTER STALL CODE : ");
    	scanf("%d", &stall);
	
		if (stall==1)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[12]+=a;
          totalprice[12] += 5.50 * a;
          printf("\n\n\t\tTotal price is %.2f", 5.50 * a);	
		}
		
		if (stall==2)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[13]+=a;
          totalprice[13] += 4.00 * a;
          printf("\n\n\t\tTotal price is %.2f", 4.00 * a);	
		}
		
		if (stall==3)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[14]+=a;
          totalprice[14] += 5.00 * a;
          printf("\n\n\t\tTotal price is %.2f", 5.00 * a);	
		}
	}
	
	else if (code==6)
	{
		
		printf("KUEY TEOW KUNG FU\n");
		printf("\n");
		printf("\t\t\t ________________________________________________________________________________\n");
		printf("\t\t\t|      |                              STALL                                      |\n");
		printf("\t\t\t| CODE |_________________________________________________________________________|\n");
		printf("\t\t\t|      |  Engineers's Cafe (1)  |     Meletop (2)    |        Lengkuas (3)       |\n");
		printf("\t\t\t|______|________________________|____________________|___________________________|\n");
		printf("\t\t\t|  6   |         RM5.50         |       RM3.50       |          RM4.50           |\n");
		printf("\t\t\t|______|________________________|____________________|___________________________|\n");
	
		printf("\n\nEnter stall code  : ");
		scanf("%d", &stall);	
		if(stall==1)
		{
			printf("\nEnter the quantity : ");
			scanf("%d", &a);
          	quantity[15]+=a;
			totalprice[15]+= 5.5*a;
			printf("\nThe total is %.2f", 5.5*a);
		}
			
		if(stall==2)
		{
			printf("\nEnter the quantity : ");
			scanf("%d", &a);
          	quantity[16]+=a;
			totalprice[16]+= 3.5*a;
			printf("\nThe total is %.2f", 3.5*a);
		}
			
		if(stall==3)
		{
			printf("\nEnter the quantity : ");
			scanf("%d", &a);
          	quantity[17]+=a;
			totalprice[17]+= 4.5*a;
			printf("\nThe total is %.2f", 4.5*a);
		}
	}
		
	else if (code==7)
	{
		printf("\t\t\tKUEY TEOW SUP\n");
		printf("\n");
		printf("\t\t\t ________________________________________________________________________________\n");
		printf("\t\t\t|      |                              STALL                                      |\n");
		printf("\t\t\t| CODE |_________________________________________________________________________|\n");
		printf("\t\t\t|      |  Engineers's Cafe (1)  |     Meletop (2)    |        Lengkuas (3)       |\n");
		printf("\t\t\t|______|________________________|____________________|___________________________|\n");
		printf("\t\t\t|  7   |         RM5.50         |       RM3.50       |          RM6.00           |\n");
		printf("\t\t\t|______|________________________|____________________|___________________________|\n");
		printf("\n\nEnter stall code  : ");
		scanf("%d", &stall);	
		if(stall==1)
		{
			printf("\nEnter the quantity : ");
			scanf("%d", &quantity[18]);
			totalprice[18]+= 5.50*a;
			printf("\nThe total is %.2f", 5.50*a);
		}
			
		if(stall==2)
		{
			printf("\nEnter the quantity : ");
			scanf("%d", &a);
          	quantity[19]+=a;
			totalprice[19]+= 3.5*a;
			printf("\nThe total is %.2f", 3.5*a);
		}
			
		if(stall==3)
		{
			printf("\nEnter the quantity : ");
			scanf("%d", &a);
          	quantity[20]+=a;
			totalprice[20]+= 6.0*a;
			printf("\nThe total is %.2f", 6.0*a);
		}
	}
	
	else if (code==8)
	{
		printf("\t\t\tKUEY TEOW GORENG\n");
		printf("\n");
		printf("\t\t\t ________________________________________________________________________________\n");
		printf("\t\t\t|      |                              STALL                                      |\n");
		printf("\t\t\t| CODE |_________________________________________________________________________|\n");
		printf("\t\t\t|      |  Engineers's Cafe (1)  |     Meletop (2)    |        Lengkuas (3)       |\n");
		printf("\t\t\t|______|________________________|____________________|___________________________|\n");
		printf("\t\t\t|  8   |         RM4.00         |       RM3.50       |          RM6.00           |\n");
		printf("\t\t\t|______|________________________|____________________|___________________________|\n");
		printf("\n\nEnter stall code  : ");
		scanf("%d", &stall);	
		
		if(stall==1)
		{
			printf("\nEnter the quantity : ");
			scanf("%d", &a);
          	quantity[21]+=a;
			totalprice[21]+= 4.0*a;
			printf("\nThe total is %.2f", 4.0*a);
		}
			
		if(stall==2)
		{
			printf("\nEnter the quantity : ");
			scanf("%d", &a);
          	quantity[22]+=a;
			totalprice[22]+= 3.5*a;
			printf("\nThe total is %.2f", 3.5*a);
		}
			
		if(stall==3)
		{
			printf("\nEnter the quantity : ");
			scanf("%d", &a);
          	quantity[23]+=a;
			totalprice[23]+= 6.0*a;
			printf("\nThe total is %.2f", 6.0*a);
		}
	}
	
	else if (code==9)
	{
		printf("KUEY TEOW TOMYAM\n");
		printf("\n");
		printf("\t\t\t ________________________________________________________________________________\n");
		printf("\t\t\t|      |                              STALL                                      |\n");
		printf("\t\t\t| CODE |_________________________________________________________________________|\n");
		printf("\t\t\t|      |  Engineers's Cafe (1)  |     Meletop (2)    |        Lengkuas (3)       |\n");
		printf("\t\t\t|______|________________________|____________________|___________________________|\n");
		printf("\t\t\t|  9   |         RM5.50         |       RM5.00       |          RM5.50           |\n");
		printf("\t\t\t|______|________________________|____________________|___________________________|\n");
		printf("\n\nEnter stall code  : ");
		scanf("%d", &stall);	
		
		if(stall==1)
		{
			printf("\nEnter the quantity : ");
			scanf("%d", &a);
          	quantity[24]+=a;
			totalprice[24]+= 5.5*a;
			printf("\nThe total is %.2f", a*5.5);
		}
			
		if(stall==2)
		{
			printf("\nEnter the quantity : ");
			scanf("%d", &a);
          	quantity[25]+=a;
			totalprice[25]+= y*a;
			printf("\nThe total is %.2f", a*5.0);
		}
			
		if(stall==3)
		{
			printf("\nEnter the quantity : ");
			scanf("%d", &a);
          	quantity[26]+=a;
			totalprice[26]+= z*a;
			printf("\nThe total is %.2f", 5.5*a);
		}
	}
		
	else if (code==10)
	{
		printf("\n\n\nNASI GORENG PATTAYA\n");
		printf("\n");
		printf("\t\t\t ________________________________________________________________________________\n");
		printf("\t\t\t|      |                              STALL                                      |\n");
		printf("\t\t\t| CODE |_________________________________________________________________________|\n");
		printf("\t\t\t|      |  Engineers's Cafe (1)  |     Meletop (2)    |        Lengkuas (3)       |\n");
		printf("\t\t\t|______|________________________|____________________|___________________________|\n");
		printf("\t\t\t|  10  |         RM5.00         |       RM5.00       |          RM5.00           |\n");
		printf("\t\t\t|______|________________________|____________________|___________________________|\n");
		printf("\n\nEnter stall code  : ");
		scanf("%d", &stall);	
		if(stall==1)
		{
			printf("\nEnter the quantity : ");
			scanf("%d", &a);
          	quantity[27]+=a;
			totalprice[27]+= 5.0*a;
			printf("\nThe total is %.2f", 5.0*a);
		}
			
		if(stall==2)
		{
			printf("\nEnter the quantity : ");
			scanf("%d", &a);
          	quantity[28]+=a;
			totalprice[28]+= 5.0*a;
			printf("\nThe total is %.2f", 5.0*a);
		}
			
		if(stall==3)
		{
			printf("\nEnter the quantity : ");
			scanf("%d", &a);
          	quantity[29]+=a;
			totalprice[29]+= 5.0*a;
			printf("\nThe total is %.2f", 5.0*a);
		}
	}

	else if(code==11)
	{
		printf("\t\t\tMEE KUNGFU\n");
		printf("\n");
		printf("__________________________________________________________________________________");
		printf("\n|      |                              stall                                      |");
		printf("\n| code |_________________________________________________________________________|");
		printf("\n|      | Engineering's Cafe (1) |     Meletop (2)    |    Lengkuas (3)           |");
		printf("\n|______|________________________|____________________|___________________________|");
		printf("\n|  11  |      Mee Kungfu        |     Mee Kungfu     |      Mee Kungfu           |");
		printf("\n|      |         5.50           |        5.00        |        5.00               |");
		printf("\n|______|________________________|____________________|___________________________|");
		printf("\n");
		printf("\n\nEnter stall code  : ");
		scanf("%d",&num);
	
		if(num==1)
		{
			printf("Enter quantity of food : ");
			scanf("%d", &a);
          	quantity[30]+=a;
			totalprice[30]+= a*5.50;
			printf("Total price is %.2f", a*5.50);
   		}
		
		else if(num==2)
    	{
			printf("Enter quantity of food : ");
			scanf("%d", &a);
          	quantity[31]+=a;
			totalprice[31]+= a*5.00;
			printf("Total price is %.2f", a*5.00);
    	}
		
		else if(num==3)
		{
			printf("Enter quantity of food : ");
			scanf("%d", &a);
          	quantity[32]+=a;
			totalprice[32]+= a*5.00;
			printf("Total price is %.2f", a*5.00);
    	} 

		else
		printf("\n!!!NO STALL NO.%d IN ANJUNG DENGKIL!!!\n",num);
	}  
	
	else if(code==12)
  	{
		printf("\t\t\tMEE SUP\n");
		printf("\n");
   		printf("__________________________________________________________________________________");
		printf("\n|      |                              stall                                      |");
		printf("\n| code |_________________________________________________________________________|");
		printf("\n|      | Engineering's Cafe (1) |     Meletop (2)    |      Lengkuas (3)         |");
		printf("\n|______|________________________|____________________|___________________________|");
		printf("\n|  12  |        Mee Sup         |      Mee Sup       |       Mee Sup             |");
		printf("\n|      |         5.50           |       4.00         |        4.00               |");
		printf("\n|______|________________________|____________________|___________________________|");
		printf("\n");
		printf("\n\nEnter stall code  : ");
		scanf("%d",&num);

		if(num==1)
		{
			printf("Enter quantity of food : ");
			scanf("%d", &a);
          	quantity[33]+=a;
			totalprice[33]+= a*5.5;
			printf("Total price is %.2f", a*5.50);
    	}

		else if(num==2)
		{
			printf("Enter quantity of food : ");
			scanf("%d", &a);
          	quantity[34]+=a;
			totalprice[34]+= a*4.00;
			printf("Total price is %.2f", a*4.00);
    	}
	
		else if(num==3)
		{
			printf("Enter quantity of food : ");
			scanf("%d", &a);
          	quantity[35]+=a;
			totalprice[35]+= a*4.00;
			printf("Total price is %.2f", a*4.00);
   		} 
		else
		printf("\n!!!NO STALL NO.%d IN ANJUNG DENGKIL!!!\n",num);
    }
    
    else if(code==13)
   {
		printf("\t\t\tMEE GORENG\n");
		printf("\n");
		printf("__________________________________________________________________________________");
		printf("\n|      |                              stall                                      |");
		printf("\n| code |_________________________________________________________________________|");
		printf("\n|      | Engineering's Cafe (1) |     Meletop (2)    |    Lengkuas (3)           |");
		printf("\n|______|________________________|____________________|___________________________|");
		printf("\n|  13  |       Mee Goreng       |      Mee Goreng    |       Mee Goreng          |");
		printf("\n|      |        5.00            |       4.00         |        5.00               |");
		printf("\n|______|________________________|____________________|___________________________|");
		printf("\n");
		printf("\n\nEnter stall code  : ");
		scanf("%d",&num);

		if(num==1)
		{
			printf("Enter quantity of food : ");
			scanf("%d", &a);
          	quantity[36]+=a;
			totalprice[36]+= a*5.00;
			printf("Total price is %.2f", a*5.00);
    	}
		
		else if(num==2)
		{
			printf("Enter quantity of food : ");
			scanf("%d", &a);
          	quantity[37]+=a;
			totalprice[37]+= a*5.00;
			printf("Total price is %.2f", a*4.00);
    	} 
		
		else if(num==3)
		{
			printf("Enter quantity of food : ");
			scanf("%d", &a);
          	quantity[38]+=a;
			totalprice[38]+= a*5.00;
			printf("Total price is %.2f", a*5.00);
   		} 
	
		else
		printf("\n!!!NO STALL NO.%d IN ANJUNG DENGKIL!!!\n",num);
    }
    
    else if(code==14)
   {
		printf("\t\t\tMEEHUN TOMYAM\n");
		printf("\n");
   		printf("__________________________________________________________________________________");
		printf("\n|      |                              stall                                      |");
		printf("\n| code |_________________________________________________________________________|");
		printf("\n|      | Engineering's Cafe (1) |     Meletop (2)    |    Lengkuas (3)           |");
		printf("\n|______|________________________|____________________|___________________________|");
		printf("\n|  14  |      Meehun Tomyam     |    Meehun Tomyam   |     Meehun Tomyam         |");
		printf("\n|      |        5.50            |       4.00         |        5.00               |");
		printf("\n|______|________________________|____________________|___________________________|");
		printf("\n");
		printf("\n\nEnter stall code  : ");
		scanf("%d",&num);

		if(num==1)
		{
			printf("Enter quantity of food : ");
			scanf("%d", &a);
          	quantity[39]+=a;
			totalprice[39]+= a*5.50;
			printf("Total price is %.2f", a*5.50);
    	}

		else if(num==2)
		{
			printf("Enter quantity of food : ");
			scanf("%d", &a);
          	quantity[40]+=a;
			totalprice[40]+= a*4.00;
			printf("Total price is %.2f", a*4.00);
  		}
  		
		else if(num==3)
		{
			printf("Enter quantity of food : ");
			scanf("%d", &a);
          	quantity[41]+=a;
			totalprice[41]+= a*5.00;
			printf("Total price is %.2f", a*5.00);
  		}
	
		else
		printf("\n!!!NO STALL NO.%d IN ANJUNG DENGKIL!!!\n",num);
    }
	
	else if(code==15)
   {
		printf("\t\t\tNASI BUJANG\n");
		printf("\n");
		printf("__________________________________________________________________________________");
		printf("\n|      |                              stall                                      |");
		printf("\n| code |_________________________________________________________________________|");
		printf("\n|      | Engineering's Cafe (1) |     Meletop (2)    |    Lengkuas (3)           |");
		printf("\n|______|________________________|____________________|___________________________|");
		printf("\n|  15  |      Nasi Bujang       |    Nasi Bujang     |     Nasi Bujang           |");
		printf("\n|      |         3.50           |       3.00         |        3.00               |");
		printf("\n|______|________________________|____________________|___________________________|");
		printf("\n");
		printf("\n\nEnter stall code  : ");
		scanf("%d",&num);

		if(num==1)
		{
			printf("Enter quantity of food : ");
			scanf("%d", &a);
          	quantity[42]+=a;
			totalprice[42]+= a*3.50;
			printf("Total price is %.2f", a*3.50);
  		}
  		
		else if(num==2)
		{
			printf("Enter quantity of food : ");
			scanf("%d", &a);
          	quantity[24]+=a;
			totalprice[43]+= a*3.00;
			printf("Total price is %.2f", a*3.00);
   		}
	
		else if(num==3)
		{
			printf("Enter quantity of food : ");
			scanf("%d", &a);
          	quantity[24]+=a;
			totalprice[44]+= a*3.00;
			printf("Total price is %.2f", a*3.00);
   		}
   		
		else
		printf("\n!!!NO STALL NO.%d IN ANJUNG DENGKIL!!!\n",num);
   }
    
    else
    {
    printf("\n\n\t\t\t\t\tInvalid choice. Please re-enter.\n\n");
	Sleep(2000);
    }
	}
printf("\n\nEnter 1 to choose other food");
printf("\nEnter 0 to return to menu");
printf("\nChoice : ");
scanf("%d", &choice);
system("cls");

switch (choice)
{	
	case 1: food();
			break;
	case 0: menu10 ();
			break;
}

}

void malayfood (void)
{
	int code;
	while(code<1||code>6)
	{
	system("cls");
	printf("_________________________________\n");
	printf("| Code |       MALAY FOOD       |\n");
	printf("|______|________________________|\n");
	printf("|   1  |       Nasi Lemak       |\n");
	printf("|______|________________________|\n");
	printf("|   2  |       Nasi Ayam        |\n");
	printf("|______|________________________|\n");
	printf("|   3  |       Nasi Kukus       |\n");
	printf("|______|________________________|\n");
	printf("|   4  |       Roti Canai       |\n");
	printf("|______|________________________|\n");
	printf("|   5  |       Roti Telur       |\n");
	printf("|______|________________________|\n");
	printf("|   6  |        Roti Bom        |\n");
	printf("|______|________________________|\n");
	
	printf("\nEnter food code : ");
	scanf("%d", &code);
	system("cls");
	
	if(code==1)
	{
		
		printf("_________________________________\n");
		printf("| code |     Type of food       |\n");
		printf("|______|________________________|\n");
		printf("|   1  | Nasi Lemak Ayam        |\n");
		printf("|______|________________________|\n");
		printf("|   2  | Nasi Lemak Telur       |\n");
		printf("|______|________________________|\n");
	
		printf("\nEnter food code : ");
		scanf("%d", &code);
		system("cls");
	
		if(code==1)
		NasiLemakA(code);
		if(code==2)
		NasiLemakT(code);
	}

	else if(code==2)
	{
	NasiAyam(code);
	system("cls");
	}
	
	else if(code==3)
	{
		printf("_________________________________\n");
		printf("| code |     Type of food       |\n");
		printf("|______|________________________|\n");
		printf("|   1  | Nasi Kukus Ayam        |\n");
		printf("|______|________________________|\n");
		printf("|   2  | Nasi Kukus Ikan        |\n");
		printf("|______|________________________|\n");
	
		printf("\nEnter food code : ");
		scanf("%d", &code);
		system("cls");
	
		if(code==1)
		NasiKukusA(code);
		if(code==2)
		NasiKukusI(code);
	}
		
	else if(code==4)
	{
	RotiCanai(code);
	system("cls");
	}
	
	else if(code==5)
	{
	RotiTelur(code);
	system("cls");
	}
	
	else if(code==6)
	{
	RotiBom(code);
	system("cls");
	}
	
	else
	{
    printf("\n\n\t\t\t\t\tInvalid choice. Please re-enter.\n\n");
	Sleep(2000);
    }
	}
	
}

void NasiLemakA(int a)
{

	printf("Nasi Lemak Ayam\n\n");
	printf("______________________________________________________\n");
	printf("| code | Stall                  |   Price            |\n");
	printf("|______|________________________|____________________|\n");
	printf("|   1  |  Nasi Lemak Hijao      |   RM 4.00          |\n");
	printf("|______|________________________|____________________|\n");
	printf("|   2  |  Engineer's Cafe       |   RM 4.50          |\n");
	printf("|______|________________________|____________________|\n");
	printf("|   3  |  Ida Sizzling          |   RM 4.50          |\n");
	printf("|______|________________________|____________________|\n");

	printf("Enter code : ");
	scanf("%d", &code);
	
	if(code==1)
	{
		printf("Enter quantity : ");
		scanf("%d", &a);
        quantity[45]+=a;
		totalprice[45]+=4.00*a;
		printf("Total price is RM%.2f", 4.00*a);
	}
	
	if(code==2)
	{
		printf("Enter quantity : ");
		scanf("%d", &a);
        quantity[46]+=a;
		totalprice[46]+=4.5*a;
		printf("Total price is RM%.2f", 4.5*a);
	}
	if(code==3)
	{
		printf("Enter quantity : ");
		scanf("%d", &a);
        quantity[47]+=a;
		totalprice[47]+=(4.5)*a;
		printf("Total price is RM%.2f", (4.5)*a);
	}
printf("\n\nEnter 1 to choose other food");
printf("\nEnter 0 to return to menu");
printf("\nChoice : ");
scanf("%d", &choice);
system("cls");
switch (choice)
{	
	case 1: food();
			break;
	case 0: menu10 ();
			break;
}
}

void NasiLemakT(int a)
{
	
	printf("Nasi Lemak Telur\n\n");
	printf("______________________________________________________\n");
	printf("| code | Stall                  |   Price            |\n");
	printf("|______|________________________|____________________|\n");
	printf("|   1  |  Nasi Lemak Hijoo      |   RM 4.00          |\n");
	printf("|______|________________________|____________________|\n");
	printf("|   2  |  Engineer's Cafe       |   RM 4.50          |\n");
	printf("|______|________________________|____________________|\n");
	printf("|   3  |  Ida Sizzling          |   RM 4.50          |\n");
	printf("|______|________________________|____________________|\n");

	printf("Enter code : ");
	scanf("%d", &code);
	
	if(code==1)
	{
		printf("Enter quantity : ");
		scanf("%d", &a);
        quantity[48]+=a;
		totalprice[48]+=4.00*a;
		printf("Total price is RM%.2f", 4.00*a);
		
	}
	
	if(code==2)
	{
		printf("Enter quantity : ");
		scanf("%d", &a);
        quantity[49]+=a;
		totalprice[49]+=4.5*a;
		printf("Total price is RM%.2f", 4.5*a);
	}
	
	if(code==3)
	{
		printf("Enter quantity : ");
		scanf("%d", &a);
        quantity[50]+=a;
		totalprice[50]+=4.5*a;
		printf("Total price is RM%.2f", 4.5*a);
	}
printf("\n\nEnter 1 to choose other food");
printf("\nEnter 0 to return to menu");
printf("\nChoice : ");
scanf("%d", &choice);
system("cls");

switch (choice)
{	
	case 1: food();
			break;
	case 0: menu10 ();
			break;
}
}

void NasiAyam(int a)
{

	printf("Nasi Ayam\n\n");
	printf("______________________________________________________\n");
	printf("| code | Stall                  |   Price            |\n");
	printf("|______|________________________|____________________|\n");
	printf("|   1  |  Nasi Lemak Hijao      |   RM 4.00          |\n");
	printf("|______|________________________|____________________|\n");
	printf("|   2  |  Engineer's Cafe       |   RM 4.50          |\n");
	printf("|______|________________________|____________________|\n");
	printf("|   3  |  Ida Sizzling          |   RM 4.50          |\n");
	printf("|______|________________________|____________________|\n");

	printf("Enter code : ");
	scanf("%d", &code);
	
	if(code==1)
	{
		printf("Enter quantity : ");
		scanf("%d", &a);
        quantity[51]+=a;
		totalprice[51]+=4.00*a;
		printf("Total price is RM%.2f", 4.00*a);
	}
	
	if(code==2)
	{
		printf("Enter quantity : ");
		scanf("%d", &a);
        quantity[52]+=a;
		totalprice[52]+=4.5*a;
		printf("Total price is RM%.2f", 4.5*a);
	}
	if(code==3)
	{
		printf("Enter quantity : ");
		scanf("%d", &a);
        quantity[53]+=a;
		totalprice[53]+=4.5*a;
		printf("Total price is RM%.2f", 4.5*a);
	}
printf("\n\nEnter 1 to choose other food");
printf("\nEnter 0 to return to menu");
printf("\nChoice : ");
scanf("%d", &choice);
system("cls");

switch (choice)
{	
	case 1: food();
			break;
	case 0: menu10 ();
			break;
}
}

void NasiKukusA(int a)
{
	printf("Nasi Kukus Ayam\n\n");
	printf("______________________________________________________\n");
	printf("| code | Stall                  |   Price            |\n");
	printf("|______|________________________|____________________|\n");
	printf("|   1  | Nasi Kukus Ayam Penyet |   RM 5.00          |\n");
	printf("|______|________________________|____________________|\n");
	printf("|   2  | Lengkuas               |   RM 4.50          |\n");
	printf("|______|________________________|____________________|\n");

	printf("Enter code : ");
	scanf("%d", &code);
	
	if(code==1)
	{
		printf("Enter quantity : ");
		scanf("%d", &a);
        quantity[54]+=a;
		totalprice[54]+=5.00*a;
		printf("Total price is RM%.2f", 5.00*a);
	}
	
	if(code==2)
	{
		printf("Enter quantity : ");
		scanf("%d", &a);
        quantity[55]+=a;
		totalprice[55]+=4.50*a;
		printf("Total price is RM%.2f", 4.50*a);
	}
printf("\n\nEnter 1 to choose other food");
printf("\nEnter 0 to return to menu");
printf("\nChoice : ");
scanf("%d", &choice);
system("cls");

switch (choice)
{	
	case 1: food();
			break;
	case 0: menu10 ();
			break;
}
}

void NasiKukusI(int a)
{

	printf("Nasi Kukus Ikan\n\n");
	printf("______________________________________________________\n");
	printf("| code | Stall                  |   Price            |\n");
	printf("|______|________________________|____________________|\n");
	printf("|   1  | Nasi Kukus Ayam Penyet |   RM 4.00          |\n");
	printf("|______|________________________|____________________|\n");


	printf("Enter code : ");
	scanf("%d", &code);
	
	if(code==1)
	{
		printf("Enter quantity : ");
		scanf("%d", &a);
        quantity[56]+=a;
		totalprice[56]+=4.00*a;
		printf("Total price is RM%.2f", 4.00*a);
	}
printf("\n\nEnter 1 to choose other food");
printf("\nEnter 0 to return to menu");
printf("\nChoice : ");
scanf("%d", &choice);
system("cls");

switch (choice)
{	
	case 1: food();
			break;
	case 0: menu10 ();
			break;
}
}

void RotiCanai(int a)
{

	printf("Roti Canai\n\n");
	printf("______________________________________________________\n");
	printf("| code | Stall                  |   Price            |\n");
	printf("|______|________________________|____________________|\n");
	printf("|   1  | Engineer's Cafe        |   RM 1.00          |\n");
	printf("|______|________________________|____________________|\n");


	printf("Enter code : ");
	scanf("%d", &code);
	
	if(code==1)
	{
		printf("Enter quantity : ");
		scanf("%d", &a);
        quantity[57]+=a;
		totalprice[57]+=1.00*a;
		printf("Total price is RM%.2f", 1.00*a);
	}
printf("\n\nEnter 1 to choose other food");
printf("\nEnter 0 to return to menu");
printf("\nChoice : ");
scanf("%d", &choice);
system("cls");

switch (choice)
{	
	case 1: food();
			break;
	case 0: menu10 ();
			break;
}
}

void RotiTelur(int a)
{

	printf("Roti Telur\n\n");
	printf("______________________________________________________\n");
	printf("| code | Stall                  |   Price            |\n");
	printf("|______|________________________|____________________|\n");
	printf("|   1  | Engineer's Cafe        |   RM 1.50          |\n");
	printf("|______|________________________|____________________|\n");


	printf("Enter code : ");
	scanf("%d", &code);
	
	if(code==1)
	{
		printf("Enter quantity : ");
		scanf("%d", &a);
        quantity[58]+=a;
		totalprice[58]+=1.5*a;
		printf("Total price is RM%.2f", 1.5*a);
	}
printf("\n\nEnter 1 to choose other food");
printf("\nEnter 0 to return to menu");
printf("\nChoice : ");
scanf("%d", &choice);
system("cls");

switch (choice)
{	
	case 1: food();
			break;
	case 0: menu10 ();
			break;
}
}

void RotiBom(int a)
{

	printf("Roti Bom\n\n");
	printf("______________________________________________________\n");
	printf("| code | Stall                  |   Price            |\n");
	printf("|______|________________________|____________________|\n");
	printf("|   1  | Engineer's Cafe        |   RM 1.50          |\n");
	printf("|______|________________________|____________________|\n");


	printf("Enter code : ");
	scanf("%d", &code);
	
	if(code==1)
	{
		printf("Enter quantity : ");
		scanf("%d", &a);
        quantity[59]+=a;
		totalprice[59]+=1.5*a;
		printf("Total price is RM%.2f", 1.5*a);
	}
printf("\n\nEnter 1 to choose other food");
printf("\nEnter 0 to return to menu");
printf("\nChoice : ");
scanf("%d", &choice);
system("cls");

switch (choice)
{	
	case 1: food();
			break;
	case 0: menu10 ();
			break;
}
}

void westernfood (void)
{
	int code, stall,a;

	float price;
	while (code<1 || code>10)
	{
	system("cls");
	printf("WESTERN\n");
	printf("\n\t\t _______________________________ ________________________________ ");
	printf("\n\t\t| code |        Western         || code |       Western          |");
	printf("\n\t\t|______|________________________||______|________________________|");
	printf("\n\t\t|   1  |  Chicken Chop          ||   6  |    Spaghetti Cabonara  |");
	printf("\n\t\t|______|________________________||______|________________________|");
	printf("\n\t\t|   2  |  Roti John             ||   7  |    Spaghetti Bolognese |");
	printf("\n\t\t|______|________________________||______|________________________|"); 
	printf("\n\t\t|   3  | Beef Burger            ||   8  |    Ayam Bob            |");
	printf("\n\t\t|______|________________________||______|________________________|");
	printf("\n\t\t|   4  | Chicken Burger         ||   9  |    Sausage             |");
	printf("\n\t\t|______|________________________||______|________________________|");
    printf("\n\t\t|   5  | Benjo                  ||  10  |    Shawarma            |");
	printf("\n\t\t|______|________________________||______|________________________|");
	printf("\n\n\t\tEnter type of food using code given : ");
	scanf("%d",&code);
	system("cls");
	
	if (code == 1)
	{
  		printf("CHICKEN CHOP\n");
		printf("_______________________________________________________");
		printf("\n|      |                      STALL                  |");
		printf("\n| code |_____________________________________________|");
		printf("\n|      |  RamaiSuka Corner (1)  |     Meletop (2)    |");
		printf("\n|______|________________________|____________________|");
		printf("\n|  1   |      Chicken Chop      |    Chicken Chop    |");
		printf("\n|      |        6.50            |       6.00         |");
		printf("\n|______|________________________|____________________|");
    	printf("\n\n\n\t\tENTER STALL CODE : ");
    	scanf("%d", &stall);
    	if (stall==1)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[60]+=a;
          totalprice[60]+=(6.50 * a);
          printf("\n\n\t\tTotal price is %.2f", 6.50*a);	
		}
		
		if (stall==2)
    	{
    	  printf("\n\n\t\tEnter quantity : ");
          scanf("%d", &a);
          quantity[61]+=a;
          totalprice[61]+=(6.00 * a);
          printf("\n\n\t\tTotal price is %.2f", 6.00 * a);	
		}
	}
	else if(code==2)
	{
		printf("Roti John");
		printf("\n _______________________________");
		printf("\n|      |          STALL         |");
		printf("\n| code |________________________|");
		printf("\n|      |  RAMAISUKA CORNER (1)  |");
		printf("\n|______|________________________|");
		printf("\n|   2  |         RM 5.00        |");
		printf("\n|______|________________________|");
		printf("\n\nEnter stall code  : ");
		scanf("%d", &stall);
		
		if(stall==1)
		{
			printf("Enter quantity: ");
			scanf("%d", &a);
        	quantity[66]+=a;
			totalprice[66]+=5*a;
			printf("Total price is RM%.2f", 5.00*a);
		}
	}
	
	else if(code==3)
	{
		printf("Beef Burger");
		printf("\n ____________________________________________________________");
		printf("\n|      |                      STALL                          |");
		printf("\n| code |_____________________________________________________|");
		printf("\n|      |  RamaiSuka Corner (1)  |        Lengkuas (2)        |");
		printf("\n|______|________________________|____________________________|");
		printf("\n|   1  |          RM 3.00       |          RM 2.80           |");
		printf("\n|______|________________________|____________________________|");
		printf("\n\nEnter stall code  : ");
		scanf("%d", &stall);
		
		if(stall==1)
		{
			printf("Enter quantity: ");
			scanf("%d", &a);
        	quantity[67]+=a;
			totalprice[67]+=3*a;
			printf("Total price is RM%.2f", 3.00*a);
		}
		
		if(stall==2)
		{
			printf("Enter quantity: ");
			scanf("%d", &a);
        	quantity[68]+=a;
			totalprice[68]+=2.8*a;
			printf("Total price is RM%.2f", 2.80*a);
		}
	}

	else if(code==4)
	{
		printf("Chicken Burger");
		printf("\n ____________________________________________________________");
		printf("\n|      |                      STALL                          |");
		printf("\n| code |_____________________________________________________|");
		printf("\n|      |  RamaiSuka Corner (1)  |        Lengkuas (2)        |");
		printf("\n|______|________________________|____________________________|");
		printf("\n|   1  |          RM 3.00       |          RM 2.80           |");
		printf("\n|______|________________________|____________________________|");
		printf("\n\nEnter stall code  : ");
		scanf("%d", &stall);
		
		if(stall==1)
		{
			printf("Enter quantity: ");
			scanf("%d", &a);
        	quantity[69]+=a;
			totalprice[69]+=3*a;
			printf("Total price is RM%.2f", 3.00*a);
		}
		
		if(stall==2)
		{
			printf("Enter quantity: ");
			scanf("%d", &a);
        	quantity[70]+=a;
			totalprice[70]+=2.8*a;
			printf("Total price is RM%.2f", 2.80*a);
		}
	}
	
	
	else if(code==5)
	{
		printf("Benjo");
		printf("\n _______________________________");
		printf("\n|      |          STALL         |");
		printf("\n| code |________________________|");
		printf("\n|      |       Lengkuas (1)     |");
		printf("\n|______|________________________|");
		printf("\n|   1  |          RM 2.00       |");
		printf("\n|______|________________________|");
		printf("\n\nEnter stall code  : ");
		scanf("%d", &stall);
		
		if(stall==1)
		{
			printf("Enter quantity: ");
			scanf("%d", &a);
        	quantity[71]+=a;
			totalprice[71]+=2.0*a;
			printf("Total price is RM%.2f", 2.0*a);
		}
	}
	

	else if(code==6)
	{
		printf("Spaghetti Carbonara");
		printf("\n _______________________________");
		printf("\n|      |          STALL         |");
		printf("\n| code |________________________|");
		printf("\n|      |       Meletop (1)      |");
		printf("\n|______|________________________|");
		printf("\n|   1  |          RM 4.00       |");
		printf("\n|______|________________________|");
		printf("\n\nEnter stall code  : ");
		scanf("%d", &stall);
		
		if(stall==1)
		{
			printf("Enter quantity: ");
			scanf("%d", &a);
        	quantity[65]+=a;
			totalprice[65]+=4*a;
			printf("Total price is RM%.2f", 4.00*a);
		}
	}

	else if(code==7)
	{
		printf("Spaghetti Bolognese");
		printf("\n _______________________________");
		printf("\n|      |          STALL         |");
		printf("\n| code |________________________|");
		printf("\n|      |       Meletop (1)      |");
		printf("\n|______|________________________|");
		printf("\n|   1  |          RM 4.00       |");
		printf("\n|______|________________________|");
		printf("\n\nEnter stall code  : ");
		scanf("%d", &stall);
	
		if(stall==1)
		{
			printf("Enter quantity: ");
			scanf("%d", &a);
        	quantity[64]+=a;
			totalprice[64]+=4*a;
			printf("Total price is RM%.2f", 4.00*a);
		}
	}

	else if(code==8)
	{
		printf("Ayam Bob");
		printf("\n _______________________________");
		printf("\n|      |          STALL         |");
		printf("\n| code |________________________|");
		printf("\n|      |     Putra Putri (1)    |");
		printf("\n|______|________________________|");
		printf("\n|   1  |          RM 6.50       |");
		printf("\n|______|________________________|");
		printf("\n\nEnter stall code  : ");
		scanf("%d", &stall);
	
		if(stall==1)
		{
			printf("Enter quantity: ");
			scanf("%d", &a);
        	quantity[72]+=a;
			totalprice[72]+=6.5*a;
			printf("Total price is RM%.2f", 6.5*a);
		}
	}
	
	else if(code==9)
	{
		printf("Sausage");
		printf("\n _______________________________");
		printf("\n|      |          STALL         |");
		printf("\n| code |________________________|");
		printf("\n|      |     Putra Putri (1)    |");
		printf("\n|______|________________________|");
		printf("\n|   1  |          RM 3.00       |");
		printf("\n|______|________________________|");
		printf("\n\nEnter stall code  : ");
		scanf("%d", &stall);
		
		if(stall==1)
		{
			printf("Enter quantity: ");
			scanf("%d", &a);
        	quantity[73]+=a;
			totalprice[73]+=3.00*a;
			printf("Total price is RM%.2f", 3.00*a);
		}
	}

	else if(code==10)
	{
		printf("Chicken Shawarma");
		printf("\n _______________________________");
		printf("\n|      |          STALL         |");
		printf("\n| code |________________________|");
		printf("\n|      |     Putra Putri (1)    |");
		printf("\n|______|________________________|");
		printf("\n|   1  |          RM 5.00       |");
		printf("\n|______|________________________|");
		printf("\n\nEnter stall code  : ");
		scanf("%d", &stall);
		
		if(stall==1)
		{
			printf("Enter quantity: ");
			scanf("%d", &a);
        	quantity[74]+=a;
			totalprice[74]+=5.00*a;
			printf("Total price is RM%.2f", 5.00*a);
		}
	}
	
	else
	{
	printf("\n\n\t\t\t\t\tInvalid choice. Please re-enter.\n\n");
	Sleep(2000);
    }
}
printf("\n\nEnter 1 to choose other food");
printf("\nEnter 0 to return to menu");
printf("\nChoice : ");
scanf("%d", &choice);
system("cls");

switch (choice)
{	
	case 1: food();
			break;
	case 0: menu10 ();
			break;
}
}

void pickup (void)
{
	printf("\n\n\n\t\t\t\t\tEnter time to pickup your food \t\t: ");
	scanf("%f",&time1);
	printf("\n\t\t\t\t\tChoose desired time to pickup (a.m/p.m) :");
	printf("\n\n\n\t\t\t\t\t\t1. a.m\t\t2. p.m");
	printf("\n\n\n\t\t\t\t\tEnter your choice : ");
	scanf("%d",&y);
	system("cls");
	printf("\nDo you want to add container or bring your own?\n");
	printf(" \n  **************************************************************************************************************************");
	printf("\n  Reminder: If you want to add container, RM1.00 will be charged                                                          \n");
	printf("  Reminder: If you want to bring your own container, you must give your container atleast 1hour before the food is taken  \n");
	printf("  **************************************************************************************************************************");
	printf("\n\n");
	printf("1-Add Container\t\t2-Bring Your Own Container");
	printf("\n");
	printf("\nEnter your choice: ");
	scanf("%d",&container);
	
	if(container==1)
	{
		if(y==1)
		{
		printf("Time to pickup your food   : %2.2fam\n",time1);
		}
		else
		{
		printf("Time to pickup your food   : %2.2fpm\n",time1);
		}
    }
	else
	{
		if(y==1)
		{
		printf("Time to pickup your food   : %2.2fam\n",time1);
		before= time1-1.00;
		printf("Give your container before : %2.2fam",before);
		}
		else
		{
		printf("Time to pickup your food   : %2.2fpm\n",time1);
		
		if(time1>=1.00 && time1<=1.59)
		printf("Give your container before : %2.2fpm",(12.00+time1)-1.00);
		
		else
		{
		before= time1-1.00;
		printf("Give your container before : %2.2fpm",before);
		}
		}
    }
	
	printf("\n\nEnter 1 to return to main menu : ");
	scanf("%d", &choice);
	system("cls");
	
	if(choice==1)
	menu10();
	system("cls");
}

void receipt (void)
{
	int i;
	
	if(container==1)
	{
		for(i=0; i<75; i++)
		{
			total+=(1*quantity[i]);
		}
	}
	printf("\t\tRECEIPT\n");
	for(i=0; i<65; i++){printf("*");}
	printf("\nName : ");
	puts(name);
	printf("\nPhone number : ");
	puts(phone);
	 time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  printf ( "Current local time and date: %s", asctime (timeinfo) );
	for(i=0; i<65; i++){printf("*");}
	printf("\nTYPE OF FOOD\t\t\tQUANTITY\t\t  PRICE\n\n");
	
	if(quantity[0]>0)
	{
		for(i=0; i<31; i++){printf("%c", n0[i]);}
		printf("\t%8d\t%15.2f\n", quantity[0], totalprice[0]);
	}
	
	if(quantity[1]>0)
	{
		for(i=0; i<31; i++){printf("%c", n1[i]);}
		printf("\t%8d\t%15.2f\n", quantity[1], totalprice[1]);
	}
	
	if(quantity[2]>0)
	{
		for(i=0; i<31; i++){printf("%c", n2[i]);}
		printf("\t%8d\t%15.2f\n", quantity[2], totalprice[2]);
	}
	
	if(quantity[3]>0)
	{
		for(i=0; i<31; i++){printf("%c", n3[i]);}
		printf("\t%8d\t%15.2f\n", quantity[3], totalprice[3]);
	}
	
	if(quantity[4]>0)
	{
		for(i=0; i<31; i++){printf("%c", n4[i]);}
		printf("\t%8d\t%15.2f\n", quantity[4], totalprice[4]);
	}
	
	if(quantity[5]>0)
	{
		for(i=0; i<31; i++){printf("%c", n5[i]);}
		printf("\t%8d\t%15.2f\n", quantity[5], totalprice[5]);
	}
	
	if(quantity[6]>0)
	{
		for(i=0; i<31; i++){printf("%c", n6[i]);}
		printf("\t%8d\t%15.2f\n", quantity[6], totalprice[6]);
	}
	
	if(quantity[6]>0)
	{
		for(i=0; i<31; i++){printf("%c", n6[i]);}
		printf("\t%8d\t%15.2f\n", quantity[6], totalprice[6]);
	}
	
	if(quantity[7]>0)
	{
		for(i=0; i<31; i++){printf("%c", n7[i]);}
		printf("\t%8d\t%15.2f\n", quantity[7], totalprice[7]);
	}
	
	if(quantity[8]>0)
	{
		for(i=0; i<31; i++){printf("%c", n8[i]);}
		printf("\t%8d\t%15.2f\n", quantity[8], totalprice[8]);
	}
	
	if(quantity[9]>0)
	{
		for(i=0; i<31; i++){printf("%c", n9[i]);}
		printf("\t%8d\t%15.2f\n", quantity[9], totalprice[9]);
	}
	
	if(quantity[10]>0)
	{
		for(i=0; i<31; i++){printf("%c", n10[i]);}
		printf("\t%8d\t%15.2f\n", quantity[10], totalprice[10]);
	}
	
	if(quantity[11]>0)
	{
		for(i=0; i<31; i++){printf("%c", n11[i]);}
		printf("\t%8d\t%15.2f\n", quantity[11], totalprice[11]);
	}
	
	if(quantity[12]>0)
	{
		for(i=0; i<31; i++){printf("%c", n12[i]);}
		printf("\t%8d\t%15.2f\n", quantity[12], totalprice[12]);
	}
	
	if(quantity[13]>0)
	{
		for(i=0; i<31; i++){printf("%c", n13[i]);}
		printf("\t%8d\t%15.2f\n", quantity[13], totalprice[13]);
	}
	
	if(quantity[14]>0)
	{
		for(i=0; i<31; i++){printf("%c", n14[i]);}
		printf("\t%8d\t%15.2f\n", quantity[14], totalprice[14]);
	}
	
	if(quantity[15]>0)
	{
		for(i=0; i<31; i++){printf("%c", n15[i]);}
		printf("\t%8d\t%15.2f\n", quantity[15], totalprice[15]);
	}
	
	if(quantity[16]>0)
	{
		for(i=0; i<31; i++){printf("%c", n16[i]);}
		printf("\t%8d\t%15.2f\n", quantity[16], totalprice[16]);
	}
	
	if(quantity[17]>0)
	{
		for(i=0; i<31; i++){printf("%c", n17[i]);}
		printf("\t%8d\t%15.2f\n", quantity[17], totalprice[17]);
	}
	
		if(quantity[18]>0)
	{
		for(i=0; i<31; i++){printf("%c", n10[i]);}
		printf("\t%8d\t%15.2f\n", quantity[18], totalprice[18]);
	}
	
	if(quantity[19]>0)
	{
		for(i=0; i<31; i++){printf("%c", n19[i]);}
		printf("\t%8d\t%15.2f\n", quantity[19], totalprice[19]);
	}
	
	if(quantity[20]>0)
	{
		for(i=0; i<31; i++){printf("%c", n20[i]);}
		printf("\t%8d\t%15.2f\n", quantity[20], totalprice[20]);
	}
	
	if(quantity[21]>0)
	{
		for(i=0; i<31; i++){printf("%c", n21[i]);}
		printf("\t%8d\t%15.2f\n", quantity[21], totalprice[21]);
	}
	
	if(quantity[22]>0)
	{
		for(i=0; i<31; i++){printf("%c", n22[i]);}
		printf("\t%8d\t%15.2f\n", quantity[22], totalprice[22]);
	}
	
	if(quantity[23]>0)
	{
		for(i=0; i<31; i++){printf("%c", n23[i]);}
		printf("\t%8d\t%15.2f\n", quantity[23], totalprice[23]);
	}
	
	if(quantity[24]>0)
	{
		for(i=0; i<31; i++){printf("%c", n24[i]);}
		printf("\t%8d\t%15.2f\n", quantity[24], totalprice[24]);
	}
	
	if(quantity[25]>0)
	{
		for(i=0; i<31; i++){printf("%c", n25[i]);}
		printf("\t%8d\t%15.2f\n", quantity[25], totalprice[25]);
	}
	
	if(quantity[26]>0)
	{
		for(i=0; i<31; i++){printf("%c", n26[i]);}
		printf("\t%8d\t%15.2f\n", quantity[26], totalprice[26]);
	}
	
	if(quantity[27]>0)
	{
		for(i=0; i<31; i++){printf("%c", n27[i]);}
		printf("\t%8d\t%15.2f\n", quantity[27], totalprice[27]);
	}
	
	if(quantity[28]>0)
	{
		for(i=0; i<31; i++){printf("%c", n28[i]);}
		printf("\t%8d\t%15.2f\n", quantity[28], totalprice[28]);
	}
	
	if(quantity[29]>0)
	{
		for(i=0; i<31; i++){printf("%c", n29[i]);}
		printf("\t%8d\t%15.2f\n", quantity[29], totalprice[29]);
	}
	
	if(quantity[30]>0)
	{
		for(i=0; i<31; i++){printf("%c", n30[i]);}
		printf("\t%8d\t%15.2f\n", quantity[30], totalprice[30]);
	}
	
	if(quantity[31]>0)
	{
		for(i=0; i<31; i++){printf("%c", n31[i]);}
		printf("\t%8d\t%15.2f\n", quantity[31], totalprice[31]);
	}
	
	if(quantity[32]>0)
	{
		for(i=0; i<31; i++){printf("%c", n32[i]);}
		printf("\t%8d\t%15.2f\n", quantity[32], totalprice[32]);
	}
	
	if(quantity[33]>0)
	{
		for(i=0; i<31; i++){printf("%c", n33[i]);}
		printf("\t%8d\t%15.2f\n", quantity[33], totalprice[33]);
	}
	
	if(quantity[34]>0)
	{
		for(i=0; i<31; i++){printf("%c", n34[i]);}
		printf("\t%8d\t%15.2f\n", quantity[34], totalprice[34]);
	}
	
	if(quantity[35]>0)
	{
		for(i=0; i<31; i++){printf("%c", n35[i]);}
		printf("\t%8d\t%15.2f\n", quantity[35], totalprice[35]);
	}
	
	if(quantity[36]>0)
	{
		for(i=0; i<31; i++){printf("%c", n36[i]);}
		printf("\t%8d\t%15.2f\n", quantity[36], totalprice[36]);
	}
	
	if(quantity[37]>0)
	{
		for(i=0; i<31; i++){printf("%c", n37[i]);}
		printf("\t%8d\t%15.2f\n", quantity[37], totalprice[37]);
	}
	
	if(quantity[38]>0)
	{
		for(i=0; i<31; i++){printf("%c", n38[i]);}
		printf("\t%8d\t%15.2f\n", quantity[38], totalprice[38]);
	}
	
	if(quantity[39]>0)
	{
		for(i=0; i<31; i++){printf("%c", n39[i]);}
		printf("\t%8d\t%15.2f\n", quantity[39], totalprice[39]);
	}
	
	if(quantity[40]>0)
	{
		for(i=0; i<31; i++){printf("%c", n40[i]);}
		printf("\t%8d\t%15.2f\n", quantity[40], totalprice[40]);
	}
	
	if(quantity[41]>0)
	{
		for(i=0; i<31; i++){printf("%c", n41[i]);}
		printf("\t%8d\t%15.2f\n", quantity[41], totalprice[41]);
	}
	
	if(quantity[42]>0)
	{
		for(i=0; i<31; i++){printf("%c", n42[i]);}
		printf("\t%8d\t%15.2f\n", quantity[42], totalprice[42]);
	}
	
	if(quantity[43]>0)
	{
		for(i=0; i<31; i++){printf("%c", n43[i]);}
		printf("\t%8d\t%15.2f\n", quantity[43], totalprice[43]);
	}
	
	if(quantity[44]>0)
	{
		for(i=0; i<31; i++){printf("%c", n44[i]);}
		printf("\t%8d\t%15.2f\n", quantity[44], totalprice[44]);
	}
	
	if(quantity[45]>0)
	{
		for(i=0; i<31; i++){printf("%c", n45[i]);}
		printf("\t%8d\t%15.2f\n", quantity[45], totalprice[45]);
	}
	
	if(quantity[46]>0)
	{
		for(i=0; i<31; i++){printf("%c", n46[i]);}
		printf("\t%8d\t%15.2f\n", quantity[46], totalprice[46]);
	}
	
	if(quantity[47]>0)
	{
		for(i=0; i<31; i++){printf("%c", n47[i]);}
		printf("\t%8d\t%15.2f\n", quantity[47], totalprice[47]);
	}
	
	if(quantity[48]>0)
	{
		for(i=0; i<31; i++){printf("%c", n48[i]);}
		printf("\t%8d\t%15.2f\n", quantity[48], totalprice[48]);
	}
	
	if(quantity[49]>0)
	{
		for(i=0; i<31; i++){printf("%c", n49[i]);}
		printf("\t%8d\t%15.2f\n", quantity[49], totalprice[49]);
	}
	
	if(quantity[50]>0)
	{
		for(i=0; i<31; i++){printf("%c", n50[i]);}
		printf("\t%8d\t%15.2f\n", quantity[50], totalprice[50]);
	}
	
	if(quantity[51]>0)
	{
		for(i=0; i<31; i++){printf("%c", n51[i]);}
		printf("\t%8d\t%15.2f\n", quantity[51], totalprice[51]);
	}
	
	if(quantity[52]>0)
	{
		for(i=0; i<31; i++){printf("%c", n52[i]);}
		printf("\t%8d\t%15.2f\n", quantity[52], totalprice[52]);
	}
	
	if(quantity[53]>0)
	{
		for(i=0; i<31; i++){printf("%c", n53[i]);}
		printf("\t%8d\t%15.2f\n", quantity[53], totalprice[53]);
	}
	
	if(quantity[54]>0)
	{
		for(i=0; i<31; i++){printf("%c", n54[i]);}
		printf("\t%8d\t%15.2f\n", quantity[54], totalprice[54]);
	}
	
	if(quantity[55]>0)
	{
		for(i=0; i<31; i++){printf("%c", n55[i]);}
		printf("\t%8d\t%15.2f\n", quantity[55], totalprice[55]);
	}
	
	if(quantity[56]>0)
	{
		for(i=0; i<31; i++){printf("%c", n56[i]);}
		printf("\t%8d\t%15.2f\n", quantity[56], totalprice[56]);
	}
	
	if(quantity[57]>0)
	{
		for(i=0; i<31; i++){printf("%c", n57[i]);}
		printf("\t%8d\t%15.2f\n", quantity[57], totalprice[57]);
	}
	
	if(quantity[58]>0)
	{
		for(i=0; i<31; i++){printf("%c", n58[i]);}
		printf("\t%8d\t%15.2f\n", quantity[58], totalprice[58]);
	}
	
	if(quantity[59]>0)
	{
		for(i=0; i<31; i++){printf("%c", n59[i]);}
		printf("\t%8d\t%15.2f\n", quantity[59], totalprice[59]);
	}
	
	if(quantity[60]>0)
	{
		for(i=0; i<31; i++){printf("%c", n60[i]);}
		printf("\t%8d\t%15.2f\n", quantity[60], totalprice[60]);
	}
	
	if(quantity[61]>0)
	{
		for(i=0; i<31; i++){printf("%c", n61[i]);}
		printf("\t%8d\t%15.2f\n", quantity[61], totalprice[61]);
	}
	
	if(quantity[62]>0)
	{
		for(i=0; i<31; i++){printf("%c", n62[i]);}
		printf("\t%8d\t%15.2f\n", quantity[62], totalprice[62]);
	}
	
	if(quantity[63]>0)
	{
		for(i=0; i<31; i++){printf("%c", n63[i]);}
		printf("\t%8d\t%15.2f\n", quantity[63], totalprice[63]);
	}
	
	if(quantity[64]>0)
	{
		for(i=0; i<31; i++){printf("%c", n60[i]);}
		printf("\t%8d\t%15.2f\n", quantity[64], totalprice[64]);
	}
	
	if(quantity[65]>0)
	{
		for(i=0; i<31; i++){printf("%c", n60[i]);}
		printf("\t%8d\t%15.2f\n", quantity[65], totalprice[65]);
	}
	
	if(quantity[66]>0)
	{
		for(i=0; i<31; i++){printf("%c", n60[i]);}
		printf("\t%8d\t%15.2f\n", quantity[66], totalprice[66]);
	}
	
	if(quantity[67]>0)
	{
		for(i=0; i<31; i++){printf("%c", n67[i]);}
		printf("\t%8d\t%15.2f\n", quantity[67], totalprice[67]);
	}
	
	if(quantity[68]>0)
	{
		for(i=0; i<31; i++){printf("%c", n68[i]);}
		printf("\t%8d\t%15.2f\n", quantity[68], totalprice[68]);
	}
	
	if(quantity[69]>0)
	{
		for(i=0; i<31; i++){printf("%c", n69[i]);}
		printf("\t%8d\t%15.2f\n", quantity[69], totalprice[69]);
	}
	
	if(quantity[70]>0)
	{
		for(i=0; i<31; i++){printf("%c", n70[i]);}
		printf("\t%8d\t%15.2f\n", quantity[70], totalprice[70]);
	}
	
	if(quantity[71]>0)
	{
		for(i=0; i<31; i++){printf("%c", n71[i]);}
		printf("\t%8d\t%15.2f\n", quantity[71], totalprice[71]);
	}
	
	if(quantity[72]>0)
	{
		for(i=0; i<31; i++){printf("%c", n72[i]);}
		printf("\t%8d\t%15.2f\n", quantity[72], totalprice[72]);
	}
	
	if(quantity[73]>0)
	{
		for(i=0; i<31; i++){printf("%c", n73[i]);}
		printf("\t%8d\t%15.2f\n", quantity[73], totalprice[73]);
	}
	
	if(quantity[74]>0)
	{
		for(i=0; i<31; i++){printf("%c", n74[i]);}
		printf("\t%8d\t%15.2f\n", quantity[74], totalprice[74]);
	}
	
	printf("\n\nContainer charges is RM %.2f", total);
	
	for(i=0; i<100; i++)
	{
		total+=totalprice[i];
	}
	
	printf("\nTotal price is RM %.2f\n", total);
		
	if(container==1)
	{
		if(y==1)
		{
		printf("Time to pickup your food   : %2.2fam\n",time1);
		
		}
		else
		{
		printf("Time to pickup your food   : %2.2fpm\n",time1);
		}
    }
	else
	{
		if(y==1)
		{
		printf("Time to pickup your food   : %2.2fam\n",time1);
		before= time1-1.00;
		printf("Give your container before : %2.2fam",before);
		}
		else
		{
		printf("Time to pickup your food   : %2.2fpm\n",time1);
		
		if(time1>=1.00 && time1<=1.59)
		printf("Give your container before : %2.2fpm",(12.00+time1)-1.00);
		
		else
		{
		before= time1-1.00;
		printf("Give your container before : %2.2fpm",before);
		}
		}
    }
	printf("\n\nPLEASE SCREENSHOT THIS RECEIPT TO PROOF YOUR ORDER\n");
	
	for(i=0; i<65; i++){printf("*");}
	
	Sleep(3000);
	printf("\n\n\nWould you like to help us to rate stalls at anjung?");
	printf("\nEnter 1. Yes");
	printf("\nEnter 2. No");
	printf("\nChoice : ");
	scanf("%d", &choice);
	system("cls");
	
	if(choice==1)
	rate ();
	
	printf("\n\nEnter 1 to return to menu");
	printf("\nEnter 0 to exit");
	printf("\nChoice : ");
	scanf("%d", &choice);
	system("cls");

	switch (choice)
	{	
		case 1: menu10();
			break;
		case 0: exit(0);
			break;
	}
}

void rate (void)
{
	
	int code;
	char stall[100];
	
	printf("\n\n");
	printf("\t\t\t\t\t\t\t\tRATING");
	printf("\n\n");
	
	for (int count=0; count<150; count++){printf("#");}
	
	printf("\n\t\t\t\t\t\t ________________________________");
	printf("\n\t\t\t\t\t\t|      |                         |");
	printf("\n\t\t\t\t\t\t| CODE |          STALL          |");
	printf("\n\t\t\t\t\t\t|______|_________________________|");
	printf("\n\t\t\t\t\t\t|  A01 |         MELETOP         |");
	printf("\n\t\t\t\t\t\t|______|_________________________|");
	printf("\n\t\t\t\t\t\t|  A02 |        LENGKUAS         |");
	printf("\n\t\t\t\t\t\t|______|_________________________|");
	printf("\n\t\t\t\t\t\t|  A03 |     ENGINEER'S CAFE     |");
	printf("\n\t\t\t\t\t\t|______|_________________________|");
	printf("\n\t\t\t\t\t\t|  A04 |     NASI AYAM HIJOO     |");
	printf("\n\t\t\t\t\t\t|______|_________________________|");
	printf("\n\t\t\t\t\t\t|  A05 | NASI KUKUS AYAM PENYET  |");
	printf("\n\t\t\t\t\t\t|______|_________________________|");
	printf("\n\t\t\t\t\t\t|  A06 |        RAMAI SUKA       |");
	printf("\n\t\t\t\t\t\t|______|_________________________|");
	printf("\n\t\t\t\t\t\t|  A07 |      PUTERA PUTERI      |");
	printf("\n\t\t\t\t\t\t|______|_________________________|\n");	
	
	printf("\n\n\t\t\t\t--> Enter the code of the stall : A");
	scanf("%d", &code);
	
	{
		if(code==01)
		{
			strcpy(stall, "MELETOP");
			rating(stall);
		}
		
		else if(code==02)
		{
			strcpy(stall, "LENGKUAS");
			rating(stall);
		}	
		
		else if (code==03)
		{
			strcpy(stall, "ENGINEER'S CAFE");
			rating(stall);
		}	
		
		else if (code==04)
		{
			strcpy(stall, "NASI AYAM HIJOO");
			rating(stall);
		}
		
		else if(code==05)
		{
			strcpy(stall, "NASI KUKUS AYAM PENYET");
			rating(stall);
		}
		else if(code==06)
		{
			strcpy(stall, "RAMAI SUKA");
			rating(stall);
		}
		
		else if (code==07)
		{
			strcpy(stall, "PUTERA PUTERI");
			rating(stall);
		}
		
		else
		{
			printf("\n\n\t\t\t\t>>>>Enter the correct code to proceed....");
		}
	}
	
}

void rating (char x[20])
{
	int hygiene, service, price, time, enter;
	
	system("cls");
	
	printf("\n\n");
	printf("\n\t\t\t\t\t\t%7s", x);
	printf("\n\n");
	printf("\n\t\t _________________________________________________________________________");
	printf("\n\t\t|       |    Bad    |   Satisfactory   |   Okay   |   Good   |   Great    |");
	printf("\n\t\t|_______|___________|__________________|__________|__________|____________|");
	printf("\n\t\t| score |     1     |        2         |     3    |     4    |      5     |");
	printf("\n\t\t|_______|___________|__________________|__________|__________|____________|");
	
	printf("\n\n\n");
	printf("\t\tRate HYGIENE of the stall --> ");
	scanf("%d", &hygiene);
	
	printf("\n\t\tRate SERVICE of the stall --> ");
	scanf("%d", &service);	
	
	printf("\n\t\tRate the PRICE for the foods. Is it affordable? --> ");
	scanf("%d", &price);
	
	printf("\n\t\tDo you have to wait for too long? --> ");
	scanf("%d", &time);
	
	system("cls");
	printf("\n\n");
	
	for (int count=0; count<150; count++){printf("#");}	
	
	printf("\n\n\t\t\tUSER'S RATING ON %7s", x);
	
	printf("\n\t\t\t\t ______________________");
	printf("\n\t\t\t\t|         |   OVERALL  |");
	printf("\n\t\t\t\t|_________|____________|");
	printf("\n\t\t\t\t| HYGIENE |    %d/5     |",hygiene);
	printf("\n\t\t\t\t|_________|____________|");
	printf("\n\t\t\t\t| SERVICE |    %d/5     |", service);
	printf("\n\t\t\t\t|_________|____________|");
	printf("\n\t\t\t\t|  PRICE  |    %d/5     |",price);
	printf("\n\t\t\t\t|_________|____________|");
	printf("\n\t\t\t\t|   TIME  |    %d/5     |", time);
	printf("\n\t\t\t\t|_________|____________|");
	printf("\n\n");
	
	for (int count=0; count<150; count++){printf("#");}
	
	printf("\n\t\t\t\tTHANKS FOR RATING!");
	printf("\n\n\t\t\t\tEnter 1 to return to menu");
	printf("\n\t\t\t\tEnter 0 to exit");
	printf("\n\n\t\t\t\tChoice : ");
	scanf("%d", &choice);
	system("cls");
	
	if(choice==1)
	menu10();
	else
	exit(0);
}


void cancel (void)
{
while(choice!=0)
{
	system("cls");
	for(int count=0; count<160; count++){printf("-");}
	printf("\n\n\t\t\t\t\t\t\t\t\t\t CANCEL ORDER\n\n");
	for(int count=0; count<160; count++){printf("-");}
	printf("\n\n\nFOOD CODE\tTYPE OF FOOD\t\t\tQUANTITY\t\t  PRICE\n\n");
	
	if(quantity[0]>0)
	{
		printf("0\t\t");
		for(i=0; i<31; i++){printf("%c", n0[i]);}
		printf("\t%8d\t%15.2f\n", quantity[0], totalprice[0]);
	}
	
	if(quantity[1]>0)
	{
		printf("1\t\t");
		for(i=0; i<31; i++){printf("%c", n1[i]);}
		printf("\t%8d\t%15.2f\n", quantity[1], totalprice[1]);
	}
	
	if(quantity[2]>0)
	{
		printf("2\t\t");
		for(i=0; i<31; i++){printf("%c", n2[i]);}
		printf("\t%8d\t%15.2f\n", quantity[2], totalprice[2]);
	}
	
	if(quantity[3]>0)
	{
		printf("3\t\t");
		for(i=0; i<31; i++){printf("%c", n3[i]);}
		printf("\t%8d\t%15.2f\n", quantity[3], totalprice[3]);
	}
	
	if(quantity[4]>0)
	{
		printf("4\t\t");
		for(i=0; i<31; i++){printf("%c", n4[i]);}
		printf("\t%8d\t%15.2f\n", quantity[4], totalprice[4]);
	}
	
	if(quantity[5]>0)
	{
		printf("5\t\t");
		for(i=0; i<31; i++){printf("%c", n5[i]);}
		printf("\t%8d\t%15.2f\n", quantity[5], totalprice[5]);
	}
	
	if(quantity[6]>0)
	{
		printf("6\t\t");
		for(i=0; i<31; i++){printf("%c", n6[i]);}
		printf("\t%8d\t%15.2f\n", quantity[6], totalprice[6]);
	}
		
	if(quantity[7]>0)
	{
		printf("7\t\t");
		for(i=0; i<31; i++){printf("%c", n7[i]);}
		printf("\t%8d\t%15.2f\n", quantity[7], totalprice[7]);
	}
	
	if(quantity[8]>0)
	{
		printf("8\t\t");
		for(i=0; i<31; i++){printf("%c", n8[i]);}
		printf("\t%8d\t%15.2f\n", quantity[8], totalprice[8]);
	}
	
	if(quantity[9]>0)
	{
		printf("9\t\t");
		for(i=0; i<31; i++){printf("%c", n9[i]);}
		printf("\t%8d\t%15.2f\n", quantity[9], totalprice[9]);
	}
	
	if(quantity[10]>0)
	{
		printf("10\t\t");
		for(i=0; i<31; i++){printf("%c", n10[i]);}
		printf("\t%8d\t%15.2f\n", quantity[10], totalprice[10]);
	}
	
	if(quantity[11]>0)
	{
		printf("11\t\t");
		for(i=0; i<31; i++){printf("%c", n11[i]);}
		printf("\t%8d\t%15.2f\n", quantity[11], totalprice[11]);
	}
	
	if(quantity[12]>0)
	{
		printf("12\t\t");
		for(i=0; i<31; i++){printf("%c", n12[i]);}
		printf("\t%8d\t%15.2f\n", quantity[12], totalprice[12]);
	}
	
	if(quantity[13]>0)
	{
		printf("13\t\t");
		for(i=0; i<31; i++){printf("%c", n13[i]);}
		printf("\t%8d\t%15.2f\n", quantity[13], totalprice[13]);
	}
	
	if(quantity[14]>0)
	{
		printf("14\t\t");
		for(i=0; i<31; i++){printf("%c", n14[i]);}
		printf("\t%8d\t%15.2f\n", quantity[14], totalprice[14]);
	}
	
	if(quantity[15]>0)
	{
		printf("15\t\t");
		for(i=0; i<31; i++){printf("%c", n15[i]);}
		printf("\t%8d\t%15.2f\n", quantity[15], totalprice[15]);
	}
	
	if(quantity[16]>0)
	{
		printf("16\t\t");
		for(i=0; i<31; i++){printf("%c", n16[i]);}
		printf("\t%8d\t%15.2f\n", quantity[16], totalprice[16]);
	}
	
	if(quantity[17]>0)
	{
		printf("17\t\t");
		for(i=0; i<31; i++){printf("%c", n17[i]);}
		printf("\t%8d\t%15.2f\n", quantity[17], totalprice[17]);
	}
	
		if(quantity[18]>0)
	{
		printf("18\t\t");
		for(i=0; i<31; i++){printf("%c", n10[i]);}
		printf("\t%8d\t%15.2f\n", quantity[18], totalprice[18]);
	}
	
	if(quantity[19]>0)
	{
		printf("19\t\t");
		for(i=0; i<31; i++){printf("%c", n19[i]);}
		printf("\t%8d\t%15.2f\n", quantity[19], totalprice[19]);
	}
	
	if(quantity[20]>0)
	{
		printf("20\t\t");
		for(i=0; i<31; i++){printf("%c", n20[i]);}
		printf("\t%8d\t%15.2f\n", quantity[20], totalprice[20]);
	}
	
	if(quantity[21]>0)
	{
		printf("21\t\t");
		for(i=0; i<31; i++){printf("%c", n21[i]);}
		printf("\t%8d\t%15.2f\n", quantity[21], totalprice[21]);
	}
	
	if(quantity[22]>0)
	{
		printf("22\t\t");
		for(i=0; i<31; i++){printf("%c", n22[i]);}
		printf("\t%8d\t%15.2f\n", quantity[22], totalprice[22]);
	}
	
	if(quantity[23]>0)
	{
		printf("23\t\t");
		for(i=0; i<31; i++){printf("%c", n23[i]);}
		printf("\t%8d\t%15.2f\n", quantity[23], totalprice[23]);
	}
	
	if(quantity[24]>0)
	{
		printf("24\t\t");
		for(i=0; i<31; i++){printf("%c", n24[i]);}
		printf("\t%8d\t%15.2f\n", quantity[24], totalprice[24]);
	}
	
	if(quantity[25]>0)
	{
		printf("25\t\t");
		for(i=0; i<31; i++){printf("%c", n25[i]);}
		printf("\t%8d\t%15.2f\n", quantity[25], totalprice[25]);
	}
	
	if(quantity[26]>0)
	{
		printf("26\t\t");
		for(i=0; i<31; i++){printf("%c", n26[i]);}
		printf("\t%8d\t%15.2f\n", quantity[26], totalprice[26]);
	}
	
	if(quantity[27]>0)
	{
		printf("27\t\t");
		for(i=0; i<31; i++){printf("%c", n27[i]);}
		printf("\t%8d\t%15.2f\n", quantity[27], totalprice[27]);
	}
	
	if(quantity[28]>0)
	{
		printf("28\t\t");
		for(i=0; i<31; i++){printf("%c", n28[i]);}
		printf("\t%8d\t%15.2f\n", quantity[28], totalprice[28]);
	}
	
	if(quantity[29]>0)
	{
	
		printf("29\t\t");
		for(i=0; i<31; i++){printf("%c", n29[i]);}
		printf("\t%8d\t%15.2f\n", quantity[29], totalprice[29]);
	}
	
	if(quantity[30]>0)
	{
		printf("30\t\t");
		for(i=0; i<31; i++){printf("%c", n30[i]);}
		printf("\t%8d\t%15.2f\n", quantity[30], totalprice[30]);
	}
	
	if(quantity[31]>0)
	{
		printf("31\t\t");
		for(i=0; i<31; i++){printf("%c", n31[i]);}
		printf("\t%8d\t%15.2f\n", quantity[31], totalprice[31]);
	}
	
	if(quantity[32]>0)
	{
		printf("32\t\t");
		for(i=0; i<31; i++){printf("%c", n32[i]);}
		printf("\t%8d\t%15.2f\n", quantity[32], totalprice[32]);
	}
	
	if(quantity[33]>0)
	{
		printf("33\t\t");
		for(i=0; i<31; i++){printf("%c", n33[i]);}
		printf("\t%8d\t%15.2f\n", quantity[33], totalprice[33]);
	}
	
	if(quantity[34]>0)
	{
		printf("34\t\t");
		for(i=0; i<31; i++){printf("%c", n34[i]);}
		printf("\t%8d\t%15.2f\n", quantity[34], totalprice[34]);
	}
	
	if(quantity[35]>0)
	{
		printf("35\t\t");
		for(i=0; i<31; i++){printf("%c", n35[i]);}
		printf("\t%8d\t%15.2f\n", quantity[35], totalprice[35]);
	}
	
	if(quantity[36]>0)
	{
		printf("36\t\t");
		for(i=0; i<31; i++){printf("%c", n36[i]);}
		printf("\t%8d\t%15.2f\n", quantity[36], totalprice[36]);
	}
	
	if(quantity[37]>0)
	{
		printf("37\t");
		for(i=0; i<31; i++){printf("%c", n37[i]);}
		printf("\t%8d\t%15.2f\n", quantity[37], totalprice[37]);
	}
	
	if(quantity[38]>0)
	{
		printf("38\t\t");
		for(i=0; i<31; i++){printf("%c", n38[i]);}
		printf("\t%8d\t%15.2f\n", quantity[38], totalprice[38]);
	}
	
	if(quantity[39]>0)
	{
		printf("39\t\t");
		for(i=0; i<31; i++){printf("%c", n39[i]);}
		printf("\t%8d\t%15.2f\n", quantity[39], totalprice[39]);
	}
	
	if(quantity[40]>0)
	{
		printf("40\t\t");
		for(i=0; i<31; i++){printf("%c", n40[i]);}
		printf("\t%8d\t%15.2f\n", quantity[40], totalprice[40]);
	}
	
	if(quantity[41]>0)
	{
		printf("41\t\t");
		for(i=0; i<31; i++){printf("%c", n41[i]);}
		printf("\t%8d\t%15.2f\n", quantity[41], totalprice[41]);
	}
	
	if(quantity[42]>0)
	{
		printf("42\t\t");
		for(i=0; i<31; i++){printf("%c", n42[i]);}
		printf("\t%8d\t%15.2f\n", quantity[42], totalprice[42]);
	}
	
	if(quantity[43]>0)
	{
		printf("43\t\t");
		for(i=0; i<31; i++){printf("%c", n43[i]);}
		printf("\t%8d\t%15.2f\n", quantity[43], totalprice[43]);
	}
	
	if(quantity[44]>0)
	{
		printf("44\t\t");
		for(i=0; i<31; i++){printf("%c", n44[i]);}
		printf("\t%8d\t%15.2f\n", quantity[44], totalprice[44]);
	}
	
	if(quantity[45]>0)
	{
		printf("45\t\t");
		for(i=0; i<31; i++){printf("%c", n45[i]);}
		printf("\t%8d\t%15.2f\n", quantity[45], totalprice[45]);
	}
	
	if(quantity[46]>0)
	{
		printf("46\t\t");
		for(i=0; i<31; i++){printf("%c", n46[i]);}
		printf("\t%8d\t%15.2f\n", quantity[46], totalprice[46]);
	}
	
	if(quantity[47]>0)
	{
		printf("47\t\t");
		for(i=0; i<31; i++){printf("%c", n47[i]);}
		printf("\t%8d\t%15.2f\n", quantity[47], totalprice[47]);
	}
	
	if(quantity[48]>0)
	{
		printf("48\t\t");
		for(i=0; i<31; i++){printf("%c", n48[i]);}
		printf("\t%8d\t%15.2f\n", quantity[48], totalprice[48]);
	}
	
	if(quantity[49]>0)
	{
		printf("49\t\t");
		for(i=0; i<31; i++){printf("%c", n49[i]);}
		printf("\t%8d\t%15.2f\n", quantity[49], totalprice[49]);
	}
	
	if(quantity[50]>0)
	{
		printf("50\t\t");
		for(i=0; i<31; i++){printf("%c", n50[i]);}
		printf("\t%8d\t%15.2f\n", quantity[50], totalprice[50]);
	}
	
	if(quantity[51]>0)
	{
		printf("51\t\t");
		for(i=0; i<31; i++){printf("%c", n51[i]);}
		printf("\t%8d\t%15.2f\n", quantity[51], totalprice[51]);
	}
	
	if(quantity[52]>0)
	{
		printf("52\t\t");
		for(i=0; i<31; i++){printf("%c", n52[i]);}
		printf("\t%8d\t%15.2f\n", quantity[52], totalprice[52]);
	}
	
	if(quantity[53]>0)
	{
		printf("53\t\t");
		for(i=0; i<31; i++){printf("%c", n53[i]);}
		printf("\t%8d\t%15.2f\n", quantity[53], totalprice[53]);
	}
	
	if(quantity[54]>0)
	{
		printf("54\t\t");
		for(i=0; i<31; i++){printf("%c", n54[i]);}
		printf("\t%8d\t%15.2f\n", quantity[54], totalprice[54]);
	}
	
	if(quantity[55]>0)
	{
		printf("55\t\t");
		for(i=0; i<31; i++){printf("%c", n55[i]);}
		printf("\t%8d\t%15.2f\n", quantity[55], totalprice[55]);
	}
	
	if(quantity[56]>0)
	{
		printf("56\t\t");
		for(i=0; i<31; i++){printf("%c", n56[i]);}
		printf("\t%8d\t%15.2f\n", quantity[56], totalprice[56]);
	}
	
	if(quantity[57]>0)
	{
		printf("57\t\t");
		for(i=0; i<31; i++){printf("%c", n57[i]);}
		printf("\t%8d\t%15.2f\n", quantity[57], totalprice[57]);
	}
	
	if(quantity[58]>0)
	{
		printf("58\t\t");
		for(i=0; i<31; i++){printf("%c", n58[i]);}
		printf("\t%8d\t%15.2f\n", quantity[58], totalprice[58]);
	}
	
	if(quantity[59]>0)
	{
		printf("59\t\t");
		for(i=0; i<31; i++){printf("%c", n59[i]);}
		printf("\t%8d\t%15.2f\n", quantity[59], totalprice[59]);
	}
	
	if(quantity[60]>0)
	{
		printf("60\t\t");
		for(i=0; i<31; i++){printf("%c", n60[i]);}
		printf("\t%8d\t%15.2f\n", quantity[60], totalprice[60]);
	}
	
	if(quantity[61]>0)
	{
		printf("61\t\t");
		for(i=0; i<31; i++){printf("%c", n61[i]);}
		printf("\t%8d\t%15.2f\n", quantity[61], totalprice[61]);
	}
	
	if(quantity[62]>0)
	{
		printf("62\t\t");
		for(i=0; i<31; i++){printf("%c", n62[i]);}
		printf("\t%8d\t%15.2f\n", quantity[62], totalprice[62]);
	}
	
	if(quantity[63]>0)
	{
		printf("63\t\t");
		for(i=0; i<31; i++){printf("%c", n63[i]);}
		printf("\t%8d\t%15.2f\n", quantity[63], totalprice[63]);
	}
	
	if(quantity[64]>0)
	{
		printf("64\t\t");
		for(i=0; i<31; i++){printf("%c", n60[i]);}
		printf("\t%8d\t%15.2f\n", quantity[64], totalprice[64]);
	}
	
	if(quantity[65]>0)
	{
		printf("65\t\t");
		for(i=0; i<31; i++){printf("%c", n60[i]);}
		printf("\t%8d\t%15.2f\n", quantity[65], totalprice[65]);
	}
	
	if(quantity[66]>0)
	{
		printf("66\t\t");
		for(i=0; i<31; i++){printf("%c", n60[i]);}
		printf("\t%8d\t%15.2f\n", quantity[66], totalprice[66]);
	}
	
	if(quantity[67]>0)
	{
		printf("67\t\t");
		for(i=0; i<31; i++){printf("%c", n67[i]);}
		printf("\t%8d\t%15.2f\n", quantity[67], totalprice[67]);
	}
	
	if(quantity[68]>0)
	{
		printf("68\t\t");
		for(i=0; i<31; i++){printf("%c", n68[i]);}
		printf("\t%8d\t%15.2f\n", quantity[68], totalprice[68]);
	}
	
	if(quantity[69]>0)
	{
		printf("69\t\t");
		for(i=0; i<31; i++){printf("%c", n69[i]);}
		printf("\t%8d\t%15.2f\n", quantity[69], totalprice[69]);
	}
	
	if(quantity[70]>0)
	{
		printf("70\t\t");
		for(i=0; i<31; i++){printf("%c", n70[i]);}
		printf("\t%8d\t%15.2f\n", quantity[70], totalprice[70]);
	}
	
	if(quantity[71]>0)
	{
		printf("71\t\t");
		for(i=0; i<31; i++){printf("%c", n71[i]);}
		printf("\t%8d\t%15.2f\n", quantity[71], totalprice[71]);
	}
	
	if(quantity[72]>0)
	{
		printf("72\t\t");
		for(i=0; i<31; i++){printf("%c", n72[i]);}
		printf("\t%8d\t%15.2f\n", quantity[72], totalprice[72]);
	}
	
	if(quantity[73]>0)
	{
		printf("73\t\t");
		for(i=0; i<31; i++){printf("%c", n73[i]);}
		printf("\t%8d\t%15.2f\n", quantity[73], totalprice[73]);
	}
	
	if(quantity[74]>0)
	{
		printf("74\t\t");
		for(i=0; i<31; i++){printf("%c", n74[i]);}
		printf("\t%8d\t%15.2f\n", quantity[74], totalprice[74]);
	}
	
	printf("\n*IF YOU DO NOT WANT TO MAKE ANY CHANGES, ENTER ANY FOOD CODE FROM ABOVE AND ENTER THE SAME QUANTITY AS SHOWN*");
	printf("\n\nChoose food code : ");
	scanf("%d", &i);
	printf("\n\nPlease re-enter quantity of food.");
	printf("\nEnter 0 for quantity if you want to cancel your order for particular food.");
	printf("\n\nQuantity : ");
	scanf("%d", &quantity[i]);
	
totalprice[0]=5.0*quantity[0];
totalprice[1]=5.0*quantity[1];
totalprice[2]=4.5*quantity[2];
totalprice[3]=5.0*quantity[3];
totalprice[4]=5.0*quantity[4];
totalprice[5]=4.5*quantity[5];
totalprice[6]=5.0*quantity[6];
totalprice[7]=5.0*quantity[7];
totalprice[8]=4.5*quantity[8];
totalprice[9]=5.0*quantity[9];
totalprice[10]=5.0*quantity[10];
totalprice[11]=4.5*quantity[11];
totalprice[12]=5.0*quantity[12];
totalprice[13]=5.0*quantity[13];
totalprice[14]=4.5*quantity[14];
totalprice[15]=5.5*quantity[15];
totalprice[16]=3.5*quantity[16];
totalprice[17]=4.5*quantity[17];
totalprice[18]=4.5*quantity[18];
totalprice[19]=3.5*quantity[19];
totalprice[20]=6.0*quantity[20];
totalprice[21]=4.5*quantity[21];
totalprice[22]=3.5*quantity[22];
totalprice[23]=6.0*quantity[23];
totalprice[24]=5.5*quantity[24];
totalprice[25]=5.0*quantity[25];
totalprice[26]=5.5*quantity[26];
totalprice[27]=5.5*quantity[27];
totalprice[28]=3.4*quantity[28];
totalprice[29]=6.3*quantity[29];
totalprice[30]=5.0*quantity[30];
totalprice[31]=5.0*quantity[31];
totalprice[32]=4.5*quantity[32];
totalprice[33]=5.5*quantity[33];
totalprice[34]=4.0*quantity[34];
totalprice[35]=4.5*quantity[35];
totalprice[36]=5.0*quantity[36];
totalprice[37]=5.0*quantity[37];
totalprice[38]=5.0*quantity[38];
totalprice[39]=3.5*quantity[39];
totalprice[40]=3.7*quantity[40];
totalprice[41]=3.5*quantity[41];
totalprice[42]=2.7*quantity[42];
totalprice[43]=3.0*quantity[43];
totalprice[44]=3.0*quantity[44];
totalprice[45]=4.0*quantity[45];
totalprice[46]=4.5*quantity[46];
totalprice[47]=4.5*quantity[47];
totalprice[48]=4.0*quantity[48];
totalprice[49]=4.5*quantity[49];
totalprice[50]=4.5*quantity[50];
totalprice[51]=4.0*quantity[51];
totalprice[52]=4.5*quantity[52];
totalprice[53]=4.5*quantity[53];
totalprice[54]=5.0*quantity[54];
totalprice[55]=4.5*quantity[55];
totalprice[56]=4.0*quantity[56];
totalprice[57]=1.0*quantity[57];
totalprice[58]=1.5*quantity[58];
totalprice[59]=1.5*quantity[59];
totalprice[60]=6.5*quantity[60];
totalprice[61]=9.0*quantity[61];
totalprice[64]=5.0*quantity[64];
totalprice[65]=5.0*quantity[65];
totalprice[66]=6.0*quantity[66];
totalprice[67]=4.0*quantity[67];
totalprice[68]=5.0*quantity[68];
totalprice[69]=4.0*quantity[69];
totalprice[70]=5.0*quantity[70];
totalprice[71]=2.5*quantity[71];
totalprice[72]=6.5*quantity[72];
totalprice[73]=4.0*quantity[73];
totalprice[74]=5.0*quantity[74];

printf("\nEnter 1 to update list of food purchase.");
printf("\nEnter 0 to return to main menu.");
printf("\nChoice : ");
scanf("%d", &choice);
system("cls");
if(choice==0)
menu10();
}

}

void listofmenu (void)

{
	for(int count=0; count<160; count++){printf("-");}
	printf("\n\n\t\t\t\t\t\t MENU LIST\n\n");
	for(int count=0; count<160; count++){printf("-");}
	printf("\n\n\t\t\t\t\t\tALA CARTE\n");
	printf("\n\t\t _______________________________ ________________________________ ________________________________");
	printf("\n\t\t| code |      AlaCarte          || code |      AlaCarte          || code |      AlaCarte          |");
	printf("\n\t\t|______|________________________||______|________________________||______|________________________|");
	printf("\n\t\t|   1  |  Nasi Goreng Kampung   ||   6  |    Kuew Teow Kungfu    ||  11  |      Mee Kungfu        |");
	printf("\n\t\t|______|________________________||______|________________________||______|________________________|");
	printf("\n\t\t|   2  |  Nasi Goreng Cina      ||   7  |    Kuew Teow Sup       ||  12  |      Mee Sup           |");
	printf("\n\t\t|______|________________________||______|________________________||______|________________________|"); 
	printf("\n\t\t|   3  | Nasi Goreng Ikan Masin ||   8  |    Kuew Teow Goreng    ||  13  |      Mee Goreng        |");
	printf("\n\t\t|______|________________________||______|________________________||______|________________________|");
	printf("\n\t\t|   4  | Nasi Goreng Paprik     ||   9  |    Kuew Teow Tomyam    ||  14  |      Meehun Tomyam     |");
	printf("\n\t\t|______|________________________||______|________________________||______|________________________|");
    printf("\n\t\t|   5  | Nasi Goreng Ladna      ||  10  |   Nasi Goreng Pataya   ||  15  |      Nasi Bujang       |");
	printf("\n\t\t|______|________________________||______|________________________||______|________________________|\n\n");
	printf("\t\t\t\t\t\tMALAY FOOD");
	printf("\n\t\t _________________________________");
	printf("\n\t\t| Code |       MALAY FOOD       |");
	printf("\n\t\t|______|________________________|");
	printf("\n\t\t|   1  |       Nasi Lemak       |");
	printf("\n\t\t|______|________________________|");
	printf("\n\t\t|   2  |       Nasi Ayam        |");
	printf("\n\t\t|______|________________________|");
	printf("\n\t\t|   3  |       Nasi Kukus       |");
	printf("\n\t\t|______|________________________|");
	printf("\n\t\t|   4  |       Roti Canai       |");
	printf("\n\t\t|______|________________________|");
	printf("\n\t\t|   5  |       Roti Telur       |");
	printf("\n\t\t|______|________________________|");
	printf("\n\t\t|   6  |        Roti Bom        |");
	printf("\n\t\t|______|________________________|\n\n");
	
	printf("\t\t\t\t\t\tWESTERN\n");
	printf("\n\t\t _______________________________ ________________________________ ");
	printf("\n\t\t| code |        Western         || code |       Western          |");
	printf("\n\t\t|______|________________________||______|________________________|");
	printf("\n\t\t|   1  |  Chicken Chop          ||   6  |    Spaghetti Cabonara  |");
	printf("\n\t\t|______|________________________||______|________________________|");
	printf("\n\t\t|   2  |  Roti John             ||   7  |    Spaghetti Bolognese |");
	printf("\n\t\t|______|________________________||______|________________________|"); 
	printf("\n\t\t|   3  | Beef Burger            ||   8  |    Ayam Bob            |");
	printf("\n\t\t|______|________________________||______|________________________|");
	printf("\n\t\t|   4  | Chicken Burger         ||   9  |    Sausage             |");
	printf("\n\t\t|______|________________________||______|________________________|");
    printf("\n\t\t|   5  | Benjo                  ||  10  |    Shawarma            |");
	printf("\n\t\t|______|________________________||______|________________________|");
	
printf("\n\n\n\t\t\tEnter 0 to return to main menu.");
printf("\n\t\t\tChoice : ");
scanf("%d", &choice);
system("cls");
if(choice==0)
menu10();
}

void rating (void)
{
	int j=0, k=0, l=0, m=0, n=0, o=0, p=0;
	int user, count, code;
	int point1=0, point2=0, point3=0, point4=0, point5=0, point6=0, point7=0;
	int meletop[1]={0};
	int lengkuas[1]={0};
	int engineers [1]={0};
	int hijoo[1]={0};
	int penyet [1]={0};
	int ramaisuka[1]={0};
	int puterari[1]={0};

	
	printf("\n\t\t\t\t\t\t ________________________________");
	printf("\n\t\t\t\t\t\t|      |                         |");
	printf("\n\t\t\t\t\t\t| CODE |          STALL          |");
	printf("\n\t\t\t\t\t\t|______|_________________________|");
	printf("\n\t\t\t\t\t\t|  A01 |         MELETOP         |");
	printf("\n\t\t\t\t\t\t|______|_________________________|");
	printf("\n\t\t\t\t\t\t|  A02 |        LENGKUAS         |");
	printf("\n\t\t\t\t\t\t|______|_________________________|");
	printf("\n\t\t\t\t\t\t|  A03 |     ENGINEER'S CAFE     |");
	printf("\n\t\t\t\t\t\t|______|_________________________|");
	printf("\n\t\t\t\t\t\t|  A04 |     NASI AYAM HIJOO     |");
	printf("\n\t\t\t\t\t\t|______|_________________________|");
	printf("\n\t\t\t\t\t\t|  A05 | NASI KUKUS AYAM PENYET  |");
	printf("\n\t\t\t\t\t\t|______|_________________________|");
	printf("\n\t\t\t\t\t\t|  A06 |        RAMAI SUKA       |");
	printf("\n\t\t\t\t\t\t|______|_________________________|");
	printf("\n\t\t\t\t\t\t|  A07 |      PUTERA PUTERI      |");
	printf("\n\t\t\t\t\t\t|______|_________________________|\n");	
	
	
    printf("\n\tEnter number of user\t\t: ");
    scanf("%d", &user);
    printf("\n\n\tChoose your favourite stall\t\t");
    count=1;
    
	while (count<=user)
	{
		printf("\n\n\t--> Enter the code of the stall : A");
		scanf("%d", &code);
		count++;
		
		{	if (code==01)
			{
				meletop[1]=++point1;
				j=meletop[1];
			}
		
			else if (code==02)
			{
				lengkuas[1]=++point2;
				k=lengkuas[1];
			}	
			
			else if (code==03)
			{
				engineers[1]=++point3;
				l=engineers[1];
			}
			
			else if (code==04)
			{
				hijoo[1]=++point4;
				m=hijoo[1];
			}	
			
			else if (code==05)
			{
				penyet[1]=++point5;
				n=penyet[1];
			}
			else if (code==06)
			{
				ramaisuka[1]=++point6;
				o=ramaisuka[1];
			}
			else if (code==07)
			{
				puterari[1]=++point7;
				p=puterari[1];
			}
			else
			{
				printf("\n\n\n\tEnter correct code to proceed with rating...");
			}
		}	
	}
	
	table(j, k, l, m, n, o, p);

}

void table (int j, int k, int l, int m, int n, int o, int p)
{
	int enter;
	
	system("cls");
	
	printf("\n\t\t\t\t\t\t _____________________________________________");
	printf("\n\t\t\t\t\t\t|      |                         |   NUMBER   |");
	printf("\n\t\t\t\t\t\t| CODE |          STALL          |  OF VOTES  |");
	printf("\n\t\t\t\t\t\t|______|_________________________|____________|");
	printf("\n\t\t\t\t\t\t|  A01 |         MELETOP         |     %2d     |", j);
	printf("\n\t\t\t\t\t\t|______|_________________________|____________|");
	printf("\n\t\t\t\t\t\t|  A02 |        LENGKUAS         |     %2d     |", k);
	printf("\n\t\t\t\t\t\t|______|_________________________|____________|");
	printf("\n\t\t\t\t\t\t|  A03 |     ENGINEER'S CAFE     |     %2d     |", l);
	printf("\n\t\t\t\t\t\t|______|_________________________|____________|");
	printf("\n\t\t\t\t\t\t|  A04 |     NASI AYAM HIJOO     |     %2d     |", m);
	printf("\n\t\t\t\t\t\t|______|_________________________|____________|");
	printf("\n\t\t\t\t\t\t|  A05 | NASI KUKUS AYAM PENYET  |     %2d     |", n);
	printf("\n\t\t\t\t\t\t|______|_________________________|____________|");
	printf("\n\t\t\t\t\t\t|  A06 |        RAMAI SUKA       |     %2d     |", o);
	printf("\n\t\t\t\t\t\t|______|_________________________|____________|");
	printf("\n\t\t\t\t\t\t|  A07 |      PUTERA PUTERI      |     %2d     |", p);
	printf("\n\t\t\t\t\t\t|______|_________________________|____________|\n");
	
	printf("\n\n\n");
	printf("Enter 1 to main menu\nEnter 0 to exit\nChoice --> ");
	scanf("%d", &enter);
	if(enter==1)
	menu10;
	if(enter==0)
	exit(0);
	
}
