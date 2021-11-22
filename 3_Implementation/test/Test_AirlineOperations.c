(Header file )
#include "unity.h"
#include "AirlineOperations.h"

struct mufti_airline  (Structures are used to represent a record)

{
	char passport[6];  (Declaring)
	char name[15];
	int seat_num;
	char email[15];
	struct mufti_airline *following;
}
*begin, *stream;
struct mufti_airline *dummy;


void main()    (is the special function in C from where execution of a program starts and end).
{
	void reserve(int x), cancel(), display(), savefile();  //function prototypes
	int choice;
	begin = stream = NULL;  //initialize the struct pointers to NULL 
	int num = 1;
	do
	{
		                (Printing the menu )
		printf("\n\n\t\t ********************************************************************");
		printf("\n\t\t                   welcome to khalil's airline system                   ");
		printf("\n\t\t   *******************************************************************");
		printf("\n\n\n\t\t Please enter your choice from below (1-4):");
		printf("\n\n\t\t 1. Reservation");
		printf("\n\n\t\t 2. Cancel");
		printf("\n\n\t\t 3. DISPLAY RECORDS");
		printf("\n\n\t\t 4. EXIT");
		printf("\n\n\t\t feel free to ask us");
		printf("\n\n\t\t Enter your choose ");



		scanf("%d", &choice); fflush(stdin);
		system("cls");  (cls" is a command on some operating systems that clears the screen

		switch (choice)  (Each value is called a case, and the variable being switched on is checked for each switch case)
		{
		case 1:
			reserve(num); 
			num++;          (to increment the seats by 
                                    adding 1 every time)
			break;      (we find the answer do not need to
                                      test it anymore)
		case 2:
			cancel();
			break;
		case 3:
			display();
			break;
		case 4:
		{
				  savefile();
				  break;
		}
		Default:  (every switch case has to have default after 4 just stop it is invalid choice)
			printf("\n\n\t SORRY INVALID CHOICE!");
			printf("\n\n\t PLEASE CHOOSE FROM 1-4");
			printf("\n\n\t Do not forget to chose from 1-4");
		}
		getch();     (It forces to wait the output to stay on screen
                              until any key pressed from keyboard)

	} while (choice != 4);     (coz we have 4 cases so when if it more
                                          than 4 give default)
}
void details()
{                      (it is asking the user to input the details)
	printf("\n\t Enter your passport number:");
	gets(stream->passport); fflush(stdin);   //reads a line from stdin and stores it into the string pointed
	printf("\n\t Enter your  name:");
	gets(stream->name); fflush(stdin);
	printf("\n\t Enter your email address:");
	gets(stream->email); fflush(stdin);

}

void details();

void reserve(int x) (int x the reservation part is only for 15 seats so I use x instead of 15 because if I want to change the seat number I will change only x) 
{
	stream = begin; (this is for first user want to register)
	if (begin == NULL) 
	{
		// first user
		begin = stream = (struct mufti_airline*)malloc(sizeof(struct mufti_airline));     
 (memory allocation/ allocates the requested memory and returns a pointer to it)

		details();
		stream->following = NULL;  (checking if the next node is empty book it )
		printf("\n\t Seat booking successful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x; (same as I mentioned up  x for seats number up to 15 seats )
		return; (go back)
	}
	else if (x > 15) // FULL SEATS
	{
		printf("\n\t\t Seat Full.");
		return;
	}
	else
	{                                     ( it is registering the next users )
		// next user                   
		while (stream->following)
			stream = stream->following;
		stream->following = (struct mufti_airline *)malloc(sizeof(struct mufti_airline));
		stream = stream->following;
		details();
		stream->following = NULL;
		printf("\n\t Seat booking succesful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
	}
}


void savefile()                     
{
	FILE *fpointer = fopen("mufti records", "w"); 
                                                     (where I store the 
                       records in mufti record file)(opening the file)  
	if (!fpointer) 
	{
		printf("\n Error in opening file!");
		return;
		Sleep(800); (delays program execution for a given number of seconds)
	}
	stream = begin;
	while (stream)
	{
		fprintf(fpointer, "%-6s", stream->passport);
		fprintf(fpointer, "%-15s", stream->name);
		fprintf(fpointer, "%-15s", stream->email);
		stream = stream->following;
	}
	printf("\n\n\t Details have been saved to a file (mufti records)");
	fclose(fpointer);  (closing the file)
}

void display()      (it is displaying the all the records that I registered)
{
	stream = begin;
	while (stream)
	{
		printf("\n\n Passport Number : %-6s", stream->passport);
		printf("\n         name : %-15s", stream->name);
		printf("\n      email address: %-15s", stream->email);
		printf("\n      Seat number: A-%d", stream->seat_num);
		printf("\n\n++*=====================================================*++");
		stream = stream->following;     (it is displaying one by one up to 15 seats)
	}

    }
void cancel()
{
	stream = begin;     ( deleting the first user)
	system("cls");
	char passport[6];
	printf("\n\n Enter passort number to delete record?:"); (asking for the passport you want to delete) 
	gets(passport); fflush(stdin);
	if (strcmp(begin->passport, passport) == 0)
	{
		dummy = begin;
		begin = begin->following;
		free(dummy);    ( it is freeing the place)
		printf(" booking has been deleted");
		Sleep(800);
		return;

	}

	while (stream->following)           ( deleting the other records)
	{
		if (strcmp(stream->following->passport, passport) == 0)
		{
			dummy = stream->following;
			stream->following = stream->following->following;
			free(dummy);	
			printf("has been deleted ");
			getch();
			Sleep(800);
			return;
		}
		stream = stream->following;
	}
	printf("passport number is wrong please check your passport");
(if user enter wrong passport number)
}

