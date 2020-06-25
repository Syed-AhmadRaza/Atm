
//**********************************************************************
				// Project to handle ATM system
//**********************************************************************
				//Header Files

#include<iostream>
#include<math.h>
#include<fstream>
#include<conio.h>
using namespace std;

//     STRUCTURES
struct atm
{ int desire;
  int passcode;
  int rs;
  int amount;
};

//             FUNCTIONS

	  // RECIPT FUNCTION

int chit(int a)
{int recipt;                              //diclaration of the recipt variable//

ofstream out;
cout<<endl<<"Press 1 for recipt"<<endl;
cout<<"press 2 for termination"<<endl;
cout<<"Enter the action = "<<endl;
cin>>recipt;
	switch (recipt)                      //use of switch statement to attain the desired option//
	{
		case 1:                         //case1 for the execution of the remaing amount statement with in recipt//

			out.open("myfile.txt",ios::app);
			out<<"CHIT:"<<endl;
			out<<"The remaining amount was "<<a<<endl;
			cout<<"The remaining amount is "<<a<<endl;
			out.close();
			break;
		case 2:                         //case2 for the termination of the program//
		      out.open("myfile.txt",ios::app);
			out<<"CHIT TREMINATION:"<<endl;
			out<<"The remaining amount was "<<a<<endl;
			out.close();
		break;
	}
}

//   cash transfer protocol function
ofstream out;
int submit(int a, int b )
{
	int c;
if (a<b)                     //  a value defines value of current balance(num)
                            //b value defines the value of user defined ammount
                           // if statement verify that if the user defined value is > than current balance amount

		{
		out.open("myfile.txt",ios::app);
			out<<"Record:"<<endl;
			out<<"The transaction was performed by bank user."<<endl;
				out<<"THE user account amount was PKR ="<<a<<" RS"<<endl;
			out<<"The user demand was PKR ="<<b<<" RS"<<endl;
			out<<"The user got insufficint balance to perform desired action."<<endl;
			cout<<"You dont have enough money to perform that action."<<endl;

				out.close();
		return a;              // the delaration of c varaible to maintain the value of balance account (num)

		}
		else
		{
		out.open("myfile.txt",ios::app);
	      out<<"Record:"<<endl;
			out<<"The transfer was performed by bank user."<<endl;
			out<<"The user transfer cash PKR ="<<b<<" RS"<<endl;
			out<<"The cash transfer was succesfully performed."<<endl;
		 cout<<"Amount transaction PKR "<<b<<"Rs"<<endl;
		 cout<<"Fund is sucessfully transfer...."<<endl;
		 return a-b;           // for the reduction of user defined amount from the current amount
		            //to maintain the new current amount figure

	      }
	}

	//  FAST CASH PROTOCOL FUNCTION
int fastcash(int a,int b)
{
	int c;
		if (a<b)          //  a value defines value of current balance(num)
		                 //b value defines the value of user defined ammount
                        // if statement is checking that if the user defined value is > than current balance amount

		{
		out.open("myfile.txt",ios::app);
			out<<"Record:"<<endl;
			out<<"The transaction was performed by bank user."<<endl;
			out<<"THE user account amount was PKR ="<<a<<" RS"<<endl;
			out<<"The user demand was PKR ="<<b<<" RS"<<endl;
			out<<"The user got insufficint balance to perform desired action."<<endl;
			cout<<"You dont have enough money to perform that action."<<endl;

				out.close();
		return a;          // the delaration of c varaible to maintain the value of balance account (num)

		}
		else
		{

	out.open("myfile.txt",ios::app);
			out<<"Record:"<<endl;
			out<<"The transaction was performed by bank user."<<endl;
			out<<"The user demand was PKR ="<<b<<" RS"<<endl;
			out<<"The transaction was sucessfully performed ."<<endl;
	    	cout<<"Amount transaction PKR "<<b<<"Rs"<<endl;
	    	out.close();

		return a-b;           // for the reduction of user defined amount from the current amount

		           //to maintain the new current amount figure
		}
		}

	//   DESIRED CASH WITHDRAW FUNCTION
int wish(int a, int b )
{
	int c;
	if (a<b)                  //  a value defines value of current balance(num)
	                        //b value defines the value of user defined ammount
                           // if statement is checking that if the user defined value is > than current balance amount

		{out.open("myfile.txt",ios::app);
			out<<"Record:"<<endl;
			out<<"The transaction was performed by bank user."<<endl;
				out<<"THE user account amount was PKR ="<<a<<" RS"<<endl;
			out<<"The user demand was PKR ="<<b<<" RS"<<endl;
			out<<"The user got insufficint balance to perform desired action."<<endl;
			cout<<"You dont have enough money to perform that action."<<endl;
			out<<"The remaining amount was "<<a<<endl;
				out.close();

	return a;                   // the delaration of c varaible to maintain the value of balance account (num)


		}
		else{
			out.open("myfile.txt",ios::app);
			out<<"Record:"<<endl;
			out<<"The transaction was performed by bank user."<<endl;
			out<<"The user demand was PKR ="<<b<<" RS"<<endl;
			out<<"The transaction was sucessfully performed ."<<endl;
	    	cout<<"Amount transaction PKR "<<b<<"Rs"<<endl;
	    	out.close();
		return a-b;              // for the reduction of user defined amount from the current amount

		}               //to maintain the new current amount figure
	}
	filea()
		{int a;
	ifstream nu;
		nu.open("a.txt");
		nu>>a;
		nu.close();
		return a;

		}
  fileb()
		{int b;
	ifstream fu;
		fu.open("b.txt");
		fu>>b;
		fu.close();
		return b;

		}
 outa(int a)
 {
 ofstream no;
 no.open("a.txt");
 no<<a;
 no.close();
		 }
 outb(int a)
 {
 ofstream fo;
 fo.open("b.txt");
 fo<<a;
 fo.close();
		 }
	//        MAIN

	int main()
{
	atm in;                         //declaration of the following atm structures varables
   system("color 0a");
	int num,n,f;
	char b,r;
	int fum;
	cout<<"\t \t \t \t \t Welcome to BANK ATM"<<endl;

	while (b==r)                    // while loop for the execution of atm program again and again
	{
	cout<<endl<<"Enter your password =";
	cin>>in.passcode;

	system("cls");
	if(in.passcode==1550)            // the whole program is in that if statement that verify account password

{
num=filea();
		out.open("myfile.txt",ios::app);
		out<<endl<<"From the account user named Ahmad"<<endl;
		out.close();
	loop:
	cout<<"Wlcome to your account"<<endl;
	cout<<"Press 1 for Fast cash::"<<endl;
	cout<<"Press 2 for Balance inquiry::"<<endl;
	cout<<"Press 3 for fund tranfer::"<<endl;
	cout<<"Press 4 for utility bills tranfer protocol::"<<endl;
	cout<<"Press 5 for desired amount withdraw facility::"<<endl;
	cout<<"Press 6 for exit and to again enter the password::"<<endl;
	cout<<endl<<"ENTER THE ACTION YOU WANT TO PERFORM = ";
	cin>>in.desire;
	system("cls");
	switch(in.desire)               // switch statement for the execution of desired defined actions
{

	case (1):
	cout<<"Press 1 for 500  Rs::"<<endl;
	cout<<"Press 2 for 1000 Rs::"<<endl;
	cout<<"Press 3 for 1500 Rs::"<<endl;
	cout<<"Press 4 for 2000 Rs::"<<endl;
	cout<<"Press 5 for 2500 Rs::"<<endl;
	cout<<"Press 6 for 3000 Rs::"<<endl;
	cout<<"Press 7 for 3500 Rs::"<<endl;
	cout<<"Press 8 for 4000 Rs::"<<endl;
	cout<<"Press 9 for 4500 Rs::"<<endl;
	cout<<"Press 10 for 5000 Rs::"<<endl;
	cout<<"Press 11 to enter desire amount::"<<endl;
	cout<<"press 12 to go to main manue ::"<<endl;
	cout<<endl<<"ENTER THE DESIRED ACTION = ";
	cin>>in.amount;
	system("cls");
	if(in.amount==1)
	{
	n=500;                                   //The declaration of n to pass the value in the function
num=fastcash(num,n);                         //fast cash function

}
	else if(in.amount==2)
	{
		n=1000;                              //The declaration of n to pass the value in the function
       num=fastcash(num,n);                  //fast cash function
}
		else if(in.amount==3)
	{
		n=1500;                              //The declaration of n to pass the value in the function
num=fastcash(num,n);                         //fast cash function
	}
		else if(in.amount==4)
	{
			n=2000;                          //The declaration of n to pass the value in the function
num=fastcash(num,n);                         //fast cash function
	}
		else if(in.amount==5)
	{
		n=2500;                              //The declaration of n to pass the value in the function
num=fastcash(num,n);                         //fast cash function
	}
		else if(in.amount==6)
	{
		n=3000;                              //The declaration of n to pass the value in the function
num=fastcash(num,n);                         //fast cash function
	}
		else if(in.amount==7)
	{
		n=3500;                              //The declaration of n to pass the value in the function
num=fastcash(num,n);                         //fast cash function
	}
		else if(in.amount==8)
	{
			n=4000;                          //The declaration of n to pass the value in the function
num=fastcash(num,n);                         //fast cash function
	}
		else if(in.amount==9)
	{
			n=4500;                         //The declaration of n to pass the value in the function
num=fastcash(num,n);                       //fast cash function
	}
		else if(in.amount==10)
	{
		n=5000;                             //The declaration of n to pass the value in the function
num=fastcash(num,n);                       //fast cash function
	}
	else if(in.amount==11)
	{
cout<<"Enter the desire amount = "<<endl;  //The desired withdraw amount protocol
cin>>in.rs;
num=wish(num,in.rs);                       //fuction that execute desired withdraw function

}
 else if (in.amount==12)
{
goto loop;
}

outa(num);
chit(num);                                //At the end of case 1 the recipt function defination
break;
case (2):                                //case 2 defines the current balance of account
	cout<<"Your current balance is ="<<num<<endl;
	int y;
	cout<<"press 1  to go back to main manue"<<endl;
	cin>>y;
	if(y==1)
	{goto loop;
	}
	else
	{break;
	}
case (3):                                //case 3 defines the cash transfer protocol
	cout<<"press 1 to acquire cash tranfer facility "<<endl;
	cout<<"press 2 to go to main manue";
	cin>>y;
	system("cls");
	if(y==1)
	{
	cout<<"Enter the account number in which you want to transfer fund="<<endl;
    cin>>in.passcode;
	if(in.passcode==78910)
	{
		out.open("myfile.txt",ios::app);
		out<<"The user want to transfer cash in account ="<<in.passcode<<endl;
		out.close();
		cout<<endl<<"Enter the fund you want to transfer = "<<endl;
		cin>>in.rs;
        num=submit(num,in.rs);                    //USE OF rs structure  and submit function for the execution of bill tranfer protocol
	  outa(num);
		chit(num);                            // use of ecipt functoion for the execution of the respective bill function
	break;
	}
	else
	{

	cout<<endl<<"INCORRECT LOGIN"<<endl;}
	break;}
	if (y==2)
	{
	goto loop;

	}
	case 4:                                            //case 4 for the execution of the bill tranfer protocl
		cout<<"Welcome to utility bills tranfer protocol...."<<endl;
	    cout<<"Press 1 for School bills:: "<<endl;
	    cout<<"Press 2 for store bills:: "<<endl;
	    cout<<"Press 3 for electricity  bills:: "<<endl;
	    cout<<"Press 4 for cable bills:: "<<endl;
	    cout<<"Press 5 for gas bills::"<<endl;
	    cout<<"Press 6 for other bills::"<<endl;
	    cout<<"press 7 to go back to main amue::"<<endl;
	    cout<<endl<<"ENTER THE DESIRED ACTION =";
	    cin>>in.desire;
	    system("cls");
	    switch(in.desire)
	    {
	    	case 1:
	    		cout<<"Welcome to school bill tranfer protocol..."<<endl;
	    		cout<<"Enter the account number =";
	    		cin>>in.passcode;
				if(in.passcode==56471)
				{    out.open("myfile.txt",ios::app);
		out<<"The user want to transfer cash in account ="<<in.passcode<<endl;
		out.close();
					cout<<endl<<"Enter the fund you want to transfer = "<<endl;
		cin>>in.rs;
		 num=submit(num,in.rs);                  //USE OF rs structure  and submit function for the execution of bill tranfer protocol
	outa(num);
	chit(num);                                     // use of recipt functoion for the execution of the respective bill function
	break;


	}
	else
	{cout<<endl<<"INCORRECT LOGIN"<<endl;
	}
	break;
	case 2:
	    		cout<<"Welcome to utility store bill tranfer protocol..."<<endl;
	    		cout<<"Enter the account number =";
	    		cin>>in.passcode;
				if(in.passcode==52362)
				{
out.open("myfile.txt",ios::app);
		out<<"The user want to transfer cash in account ="<<in.passcode<<endl;
		out.close();
					cout<<endl<<"Enter the fund you want to transfer = "<<endl;
		cin>>in.rs;
		 num=submit(num,in.rs);                       //USE OF rs structure  and submit function for the execution of bill tranfer protocol
	outa(num);
		chit(num);                                  // use of recipt functoion for the execution of the respective bill function
	}
	else
	{cout<<endl<<"INCORRECT LOGIN."<<endl;
	}
	break;
	case 3:
	    		cout<<"Welcome to electricity bill tranfer protocol..."<<endl;
	    		cout<<"Enter the account number =";
	    		cin>>in.passcode;
				if(in.passcode==83723)
				{
				out.open("myfile.txt",ios::app);
		out<<"The user want to transfer cash in account ="<<in.passcode<<endl;
		out.close();
				cout<<endl<<"Enter the fund you want to transfer = "<<endl;
		cin>>in.rs;
		 num=submit(num,in.rs);                          //USE OF rs structure  and submit function for the execution of bill tranfer protocol
		chit(num);	                                    // use of recipt functoion for the execution of the respective bill function
	}
	else
	{cout<<endl<<"INCORRECT LOGIN"<<endl;
	}
	break;
	case 4:
	    		cout<<"Welcome to Pakistan cable bill tranfer protocol..."<<endl;
	    		cout<<"Enter the account number =";
	    		cin>>in.passcode;
				if(in.passcode==12712)
				{
				out.open("myfile.txt",ios::app);
		out<<"The user want to transfer cash in account ="<<in.passcode<<endl;
		out.close();
				cout<<endl<<"Enter the fund you want to transfer = "<<endl;
		cin>>in.rs;
		 num=submit(num,in.rs);                           //USE OF rs structure  and submit function for the execution of bill tranfer protocol
	outa(num);
	chit(num);                                            // use of recipt functoion for the execution of the respective bill function
		}
	else
	{cout<<endl<<"INCORRECT LOGIN"<<endl;
	}
	break;
	case 5:
	    		cout<<"Welcome to Pakistan gas bill tranfer protocol"<<endl;
	    		cout<<"Enter the account number =";
	    		cin>>in.passcode;
				if(in.passcode==16745)
				{
				out.open("myfile.txt",ios::app);
		out<<"The user want to transfer cash in account ="<<in.passcode<<endl;
		out.close();
					cout<<endl<<"Enter the fund you want to transfer = "<<endl;
		cin>>in.rs;
		 num=submit(num,in.rs);                     //USE OF rs structure  and submit function for the execution of bill tranfer protocol
	outa(num);
		chit(num);                                 // use of recipt functoion for the execution of the respective bill function
		}
	else
	{cout<<endl<<"INCORRECT LOGIN"<<endl;
	}
	break;
	case 6:
	    		cout<<"Welcome to other bill tranfer protocol..."<<endl;
	    		cout<<"Enter the account number =";
	    		cin>>in.passcode;
				if(in.passcode==23453)
				{ out.open("myfile.txt",ios::app);
		out<<"The user want to transfer cash in account ="<<in.passcode<<endl;
		out.close();
					cout<<endl<<"Enter the fund you want to transfer = "<<endl;
		cin>>in.rs;
		 num=submit(num,in.rs);                           //USE OF rs structure  and submit function for the execution of bill tranfer protocol
	outa(num);
		chit(num);                                      // use of recipt functoion for the execution of the respective bill function
		}
	else
	{cout<<endl<<"INCORRECT LOGIN"<<endl;
	}
 break;
       case 7:
	goto loop;

}
break;
case 5:
	cout<<"press 1 to acquire cash with draw facility "<<endl;
	cout<<"press 2 to go to main manue";
	cin>>y;
	system("cls");
	if(y==1)
	{

cout<<"Welcome to desired withdraw facility..."<<endl;
	cout<<"Enter the desire amount = "<<endl;
		cin>>in.rs;
	 num=wish(num,in.rs);                                   //USE OF rs structure  and wish function for the execution of cash withdraw tranfer protocol
	outa(num);
	chit(num);                                              // use of recipt functoion for the execution of the respective bill function
	  break;}
	  else if(y==2)
	  {
	  	goto loop;
	  }
case 6:
outa(num);
	chit(num);                                             // use of recipt functoion for the execution of the respective bill function
	break;
}
}


else if(in.passcode==2550)            // the whole program is in that if statement that verify account password

{
	fum=fileb();
	out.open("myfile.txt",ios::app);
		out<<endl<<"From the account user named RAZA"<<endl;
		out.close();
	lock:
	cout<<"Wlcome to your account"<<endl;
	cout<<"Press 1 for Fast cash::"<<endl;
	cout<<"Press 2 for Balance inquiry::"<<endl;
	cout<<"Press 3 for fund tranfer::"<<endl;
	cout<<"Press 4 for utility bills tranfer protocol::"<<endl;
	cout<<"Press 5 for desired amount withdraw facility::"<<endl;
	cout<<"Press 6 for exit and to again enter the password::"<<endl;
	cout<<endl<<"ENTER THE ACTION YOU WANT TO PERFORM = ";
	cin>>in.desire;
	system("cls");
	switch(in.desire)               // switch statement for the execution of desired defined actions
{

	case (1):
	cout<<"Press 1 for 500  Rs::"<<endl;
	cout<<"Press 2 for 1000 Rs::"<<endl;
	cout<<"Press 3 for 1500 Rs::"<<endl;
	cout<<"Press 4 for 2000 Rs::"<<endl;
	cout<<"Press 5 for 2500 Rs::"<<endl;
	cout<<"Press 6 for 3000 Rs::"<<endl;
	cout<<"Press 7 for 3500 Rs::"<<endl;
	cout<<"Press 8 for 4000 Rs::"<<endl;
	cout<<"Press 9 for 4500 Rs::"<<endl;
	cout<<"Press 10 for 5000 Rs::"<<endl;
	cout<<"Press 11 to enter desire amount::"<<endl;
	cout<<"press 12 to go to main manue ::"<<endl;
	cout<<endl<<"ENTER THE DESIRED ACTION = ";
	cin>>in.amount;
	system("cls");
	if(in.amount==1)
	{
	n=500;                                   //The declaration of n to pass the value in the function
fum=fastcash(fum,n);                         //fast cash function

}
	else if(in.amount==2)
	{
		n=1000;                              //The declaration of n to pass the value in the function
       fum=fastcash(fum,n);                  //fast cash function
}
		else if(in.amount==3)
	{
		n=1500;                              //The declaration of n to pass the value in the function
fum=fastcash(fum,n);                         //fast cash function
	}
		else if(in.amount==4)
	{
			n=2000;                          //The declaration of n to pass the value in the function
fum=fastcash(fum,n);                         //fast cash function
	}
		else if(in.amount==5)
	{
		n=2500;                              //The declaration of n to pass the value in the function
fum=fastcash(fum,n);                         //fast cash function
	}
		else if(in.amount==6)
	{
		n=3000;                              //The declaration of n to pass the value in the function
fum=fastcash(fum,n);                         //fast cash function
	}
		else if(in.amount==7)
	{
		n=3500;                              //The declaration of n to pass the value in the function
fum=fastcash(fum,n);                         //fast cash function
	}
		else if(in.amount==8)
	{
			n=4000;                          //The declaration of n to pass the value in the function
fum=fastcash(fum,n);                         //fast cash function
	}
		else if(in.amount==9)
	{
			n=4500;                         //The declaration of n to pass the value in the function
fum=fastcash(fum,n);                       //fast cash function
	}
		else if(in.amount==10)
	{
		n=5000;                             //The declaration of n to pass the value in the function
fum=fastcash(fum,n);                       //fast cash function
	}
	else if(in.amount==11)
	{
cout<<"Enter the desire amount = "<<endl;  //The desired withdraw amount protocol
cin>>in.rs;
fum=wish(fum,in.rs);                       //fuction that execute desired withdraw function

}
 else if (in.amount==12)
{
goto lock;
}

outb(fum);
chit(fum);                                //At the end of case 1 the recipt function defination
break;

case (2):                                //case 2 defines the current balance of account
	cout<<"Your current balance is ="<<fum<<endl;
	int y;
	cout<<"press 1  to go back to main manue"<<endl;
	cin>>y;
	system("cls");
	if(y==1)
	{goto lock;
	}
	else
	{break;
	}
case (3):                                //case 3 defines the cash transfer protocol
	cout<<"press 1 to acquire cash tranfer facility "<<endl;
	cout<<"press 2 to go to main manue";
	cin>>y;
	system("cls");
	if(y==1)
	{
	cout<<"Enter the account number in which you want to transfer fund="<<endl;
    cin>>in.passcode;
    system("cls");
	if(in.passcode==78910)
	{
		out.open("myfile.txt",ios::app);
		out<<"The user want to transfer cash in account ="<<in.passcode<<endl;
		out.close();
		cout<<endl<<"Enter the fund you want to transfer = "<<endl;
		cin>>in.rs;
        fum=submit(fum,in.rs);                    //USE OF rs structure  and submit function for the execution of bill tranfer protocol
		outb(fum);
		chit(fum);                            // use of ecipt functoion for the execution of the respective bill function
	break;
	}
	else
	{

	cout<<endl<<"INCORRECT LOGIN"<<endl;}
	break;}
	if (y==2)
	{
	goto lock;

	}

	case 4:                                            //case 4 for the execution of the bill tranfer protocl
		cout<<"Welcome to utility bills tranfer protocol...."<<endl;
	    cout<<"Press 1 for School bills:: "<<endl;
	    cout<<"Press 2 for store bills:: "<<endl;
	    cout<<"Press 3 for electricity  bills:: "<<endl;
	    cout<<"Press 4 for cable bills:: "<<endl;
	    cout<<"Press 5 for gas bills::"<<endl;
	    cout<<"Press 6 for other bills::"<<endl;
	    cout<<"press 7 to go back to main amue::"<<endl;
	    cout<<endl<<"ENTER THE DESIRED ACTION =";
	    cin>>in.desire;
	    system("cls");
	    switch(in.desire)
	    {
	    	case 1:
	    		cout<<"Welcome to school bill tranfer protocol..."<<endl;
	    		cout<<"Enter the account number =";
	    		cin>>in.passcode;
				if(in.passcode==56471)
				{  out.open("myfile.txt",ios::app);
		out<<"The user want to transfer cash in account ="<<in.passcode<<endl;
		out.close();
				cout<<endl<<"Enter the fund you want to transfer = "<<endl;
		cin>>in.rs;
		 fum=submit(fum,in.rs);                  //USE OF rs structure  and submit function for the execution of bill tranfer protocol
	outb(fum);
	chit(fum);                                     // use of recipt functoion for the execution of the respective bill function
	break;


	}
	else
	{cout<<endl<<"INCORRECT LOGIN"<<endl;
	}
	break;
	case 2:
	    		cout<<"Welcome to utility store bill tranfer protocol..."<<endl;
	    		cout<<"Enter the account number =";
	    		cin>>in.passcode;
				if(in.passcode==52362)
				{
				out.open("myfile.txt",ios::app);
		out<<"The user want to transfer cash in account ="<<in.passcode<<endl;
		out.close();
				cout<<endl<<"Enter the fund you want to transfer = "<<endl;
		cin>>in.rs;
		 fum=submit(fum,in.rs);                       //USE OF rs structure  and submit function for the execution of bill tranfer protocol
		outb(fum);
		chit(fum);                                  // use of recipt functoion for the execution of the respective bill function
	}
	else
	{cout<<endl<<"INCORRECT LOGIN."<<endl;
	}
	break;
	case 3:
	    		cout<<"Welcome to electricity bill tranfer protocol..."<<endl;
	    		cout<<"Enter the account number =";
	    		cin>>in.passcode;
				if(in.passcode==83723)
				{
				out.open("myfile.txt",ios::app);
		out<<"The user want to transfer cash in account ="<<in.passcode<<endl;
		out.close();
			cout<<endl<<"Enter the fund you want to transfer = "<<endl;
		cin>>in.rs;
		 fum=submit(fum,in.rs);                          //USE OF rs structure  and submit function for the execution of bill tranfer protocol
		chit(fum);	                                    // use of recipt functoion for the execution of the respective bill function
	}
	else
	{cout<<endl<<"INCORRECT LOGIN"<<endl;
	}
	break;
	case 4:
	    		cout<<"Welcome to Pakistan cable bill tranfer protocol..."<<endl;
	    		cout<<"Enter the account number =";
	    		cin>>in.passcode;
				if(in.passcode==12712)
				{
				out.open("myfile.txt",ios::app);
		out<<"The user want to transfer cash in account ="<<in.passcode<<endl;
		out.close();
				cout<<endl<<"Enter the fund you want to transfer = "<<endl;
		cin>>in.rs;
		 fum=submit(fum,in.rs);                           //USE OF rs structure  and submit function for the execution of bill tranfer protocol
outb(fum);
	chit(fum);                                            // use of recipt functoion for the execution of the respective bill function
		}
	else
	{cout<<endl<<"INCORRECT LOGIN"<<endl;
	}
	break;
	case 5:
	    		cout<<"Welcome to Pakistan gas bill tranfer protocol"<<endl;
	    		cout<<"Enter the account number =";
	    		cin>>in.passcode;
				if(in.passcode==16745)
			{	out.open("myfile.txt",ios::app);
		out<<"The user want to transfer cash in account ="<<in.passcode<<endl;
		out.close();
				cout<<endl<<"Enter the fund you want to transfer = "<<endl;
		cin>>in.rs;
		 fum=submit(fum,in.rs);                     //USE OF rs structure  and submit function for the execution of bill tranfer protocol
	outb(fum);
		chit(fum);                                 // use of recipt functoion for the execution of the respective bill function
		}
	else
	{cout<<endl<<"INCORRECT LOGIN"<<endl;
	}
	break;
	case 6:
	    		cout<<"Welcome to other bill tranfer protocol..."<<endl;
	    		cout<<"Enter the account number =";
	    		cin>>in.passcode;
				if(in.passcode==23453)
				{
			out.open("myfile.txt",ios::app);
		out<<"The user want to transfer cash in account ="<<in.passcode<<endl;
		out.close();
				cout<<endl<<"Enter the fund you want to transfer = "<<endl;
		cin>>in.rs;
		 fum=submit(fum,in.rs);                           //USE OF rs structure  and submit function for the execution of bill tranfer protocol
	outb(fum);
		chit(fum);                                      // use of recipt functoion for the execution of the respective bill function
		}
	else
	{cout<<endl<<"INCORRECT LOGIN"<<endl;
	}
 break;
       case 7:
	goto lock;

}
break;
case 5:
	cout<<"press 1 to acquire cash with draw facility "<<endl;
	cout<<"press 2 to go to main manue";
	cin>>y;
	system("cls");
	if(y==1)
	{

cout<<"Welcome to desired withdraw facility..."<<endl;
	cout<<"Enter the desire amount = "<<endl;
		cin>>in.rs;
	 fum=wish(fum,in.rs);                                   //USE OF rs structure  and wish function for the execution of cash withdraw tranfer protocol
outb(fum);
	chit(fum);                                              // use of recipt functoion for the execution of the respective bill function
	  break;}
	  else if(y==2)
	  {
	  	goto lock;
	  }
case 6:
outb(fum);
	chit(fum);                                             // use of recipt functoion for the execution of the respective bill function
	break;
default :
cout<<"please try again";
cout<<"The entered option is incorrect " ;


}
}
else
{
	cout<<endl<<"INCORRECT LOGIN"<<endl;                      // main if else lock if the password is wrong else statement executes
}
cout<<endl<<"THANK YOU FOR USING ATM...."<<endl;               // Final good bye message
}                                                               // the end of while lock
cout<<"Press r to repeat";
cin>>r;
} //end of main loop
