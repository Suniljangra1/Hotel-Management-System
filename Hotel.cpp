// Hotel Managment System Project 
#include<bits/stdc++.h>
using namespace std;
string name[100],Phone_number[100],Aadhar_card[100],price[100];
int rooms_id[100];
int total=0;
int randome(int r)
{
	 int N = 100;
	 srand(time(NULL));
     for (int i = 1; i <=r; i++)
       return rand() % N ;
}
void Luxury_rooms()
{
	cout<<endl;
	cout<<endl;
	cout<<endl;
	int r;
	cout<<"How Many Rooms You wants to Books "<<endl;
	cin>> r; 
	for(int i=0; i<r; i++)
	{

		cout<<"Enter Detail For Person "<<i+1<<" "<<endl;
		cout<<"\nEnter your Name "<<endl;
		cin>>name[total];
		cout<<"Enter your Phone_Number "<<endl;
		cin>>Phone_number[total];
		cout<<"Enter your Aadhar_Card_Number "<<endl;
		cin>>Aadhar_card[total];

		
		rooms_id[total]=randome(1);
		cout<<"\t\t\t\tRoom No  "<<i+1 <<" and Id is "<<rooms_id[total]<<endl;
		total++;
	}
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t_______________________________________________________\n";
	cout<<"\t\t\t|\t"<<r<<"  Luxury Rooms are booked \t\t\t|"<<endl;
	cout<<"\t\t\t|\tPrice of "<<r<<" Rooms is "<<r*10000<<"\t\t\t|"<<endl;
	cout<<"\t\t\t|\tthanku for Show your interest \t\t\t|";
	cout<<"\n\t\t\t_______________________________________________________\n";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
}
void Ac_Rooms()
{
	cout<<endl;
	cout<<endl;
	cout<<endl;
	int r;
	cout<<"How Many Rooms You wants to Books "<<endl;
	cin>> r; 
	for(int i=0; i<r; i++)
	{
		cout<<"Enter Detail For Person "<<i+1<<" "<<endl;
		cout<<"\nEnter your Name "<<endl;
		cin>>name[total];
		cout<<"Enter your Phone_Number "<<endl;
		cin>>Phone_number[total];
		cout<<"Enter your Aadhar_Card_Number "<<endl;
		cin>>Aadhar_card[total];

		
		rooms_id[total]=randome(1);
		cout<<"\t\t\t\tRoom No  "<<i+1 <<" and Id is "<<rooms_id[total]<<endl;
		total++;
	}
	cout<<endl;
	cout<<endl;
	
	cout<<"\t\t\t_______________________________________________________\n";
	cout<<"\t\t\t|\t"<<r<<"  Ac Rooms are booked \t\t\t\t|"<<endl;
	cout<<"\t\t\t|\tPrice of "<<r<<" Rooms is "<<r*5000<<"\t\t\t|"<<endl;
	cout<<"\t\t\t|\tthanku for Show your interest \t\t\t|";
	cout<<"\n\t\t\t_______________________________________________________\n";
	cout<<endl;
	cout<<endl;
	cout<<endl;

}
void Non_Ac_Rooms()
{
	cout<<endl;
	cout<<endl;
	cout<<endl;
	int r;
	cout<<"How Many Rooms You wants to Books "<<endl;
	cin>> r; 
	for(int i=0; i<r; i++)
	{
		cout<<"Enter Detail For Person "<<i+1<<" "<<endl;
		cout<<"\nEnter your Name "<<endl;
		cin>>name[total];
		cout<<"Enter your Phone_Number "<<endl;
		cin>>Phone_number[total];
		cout<<"Enter your Aadhar_Card_Number "<<endl;
		cin>>Aadhar_card[total];

		rooms_id[total]=randome(1);
		cout<<"\t\t\t\tRoom No  "<<i+1 <<" and Id is "<<rooms_id[total]<<endl;
		total++;
	}
	// total = total+r;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t_______________________________________________________\n";
	cout<<"\t\t\t|\t"<<r<<"  Non Ac Rooms are booked \t\t\t|"<<endl;
	cout<<"\t\t\t|\tPrice of "<<r<<" Rooms is "<<r*2000<<"\t\t\t|"<<endl;
	cout<<"\t\t\t|\tthanku for Show your interest \t\t\t|";
	cout<<"\n\t\t\t_______________________________________________________\n";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;

}
void Regular_Rooms()
{
	cout<<endl;
	cout<<endl;
	cout<<endl;
	int r;
	cout<<"How Many Rooms You wants to Books "<<endl;
	cin>> r; 
	for(int i=0; i<r; i++)
	{
		cout<<"Enter Detail For Person "<<i+1<<" "<<endl;
		cout<<"\nEnter your Name "<<endl;
		cin>>name[total];
		cout<<"Enter your Phone_Number "<<endl;
		cin>>Phone_number[total];
		cout<<"Enter your Aadhar_Card_Number "<<endl;
		cin>>Aadhar_card[total];

		rooms_id[total]=randome(1);
		cout<<"\t\t\t\tRoom No  "<<i+1 <<" and Id is "<<rooms_id[total]<<endl;
		total++;
	}
	cout<<"\t\t\t_______________________________________________________\n";
	cout<<"\t\t\t|\t"<<r<<"  Regular Rooms are booked \t\t\t|"<<endl;
	cout<<"\t\t\t|\tPrice of "<<r<<" Rooms is "<<r*1000<<"\t\t\t|"<<endl;
	cout<<"\t\t\t|\tthanku for Show your interest \t\t\t|";
	cout<<"\n\t\t\t_______________________________________________________\n";

	cout<<endl;
	cout<<endl;
	cout<<endl;

}
void Book_Room()
{
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\n\t________________________________________________________________\n";
	cout<<"\t|\t\tPress 1 for Luxury Rooms   \t\t\t|"<<endl;
	cout<<"\t|\t\tPress 2 for Ac Rooms \t\t\t\t|"<<endl;
	cout<<"\t|\t\tPress 3 for Non Ac Rooms \t\t\t|"<<endl;
	cout<<"\t|\t\tPress 4 for Regular Rooms \t\t\t|"<<endl;
	cout<<"\t________________________________________________________________\n\n";

	int r;
	cout<<"\t\t\tEnter your choice "<<"\t";

	cin>>r;
	switch(r)
	{
		case 1:
				Luxury_rooms();
				break;
		case 2:
				Ac_Rooms();
				break;
		case 3:
				Non_Ac_Rooms();
				break;
		case 4:
				Regular_Rooms();
				break;
		default:
		{
			cout<<"\t\t\t\t !	!	!	Enter  a valid Choice 	 !	!	!";
			return ;
		}
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
}
void Room_Available()
{
	cout<<endl;
	cout<<endl;
	cout<<endl;
	if(total == 99)
	{
		cout<<"\n\t\t\t\t________________________________________\n";
		cout<<"\t\t\t\t\tRoom are Not Available \n";
		cout<<"\t\t\t\t________________________________________\n";

	}
	else 
	{
		cout<<"\n\t\t\t\t________________________________________\n";
		cout<<"\t\t\t\t\tRoom are  Available \n";
		cout<<"\t\t\t\t________________________________________\n";

	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
}
void show_Detail()
{
	if(total ==0 )
	{ cout<<"\n\t\t\t______________________________________________________________________________\n";
		cout<<"\t\t\t\t\t!!!!!!   No Record Are Available at this time !!!!!\n";
		cout<<"\t\t\t______________________________________________________________________________\n";
	}
	for(int i=0; i<total; i++)
	{
		cout<<"\t\t--------------------------------------------------\n";
		cout<<"\t\t|\t\tName : \t"<<name[i]<<" \t\t\t|"<<endl;
		cout<<"\t\t|\t\tPhone Number : \t"<<Phone_number[i]<<" \t\t|"<<endl;
		cout<<"\t\t|\t\tAadhar Card Number : \t"<<Aadhar_card[i]<<" \t|"<<endl;
		cout<<"\t\t--------------------------------------------------\n";
		cout<<endl;
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
}
void delele(int n)
{
	for(int i=n; i<100; i++)
	{
		rooms_id[i] =rooms_id[i+1];
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\n\t\t________________________________________________________________________\n\n";
	cout<<"\t\t|\tYour Room id is Deleted \t\t\t\t\t|\n";
	cout<<"\t\t|\tSorry For Some Behind Reason We Cannot Celete Your Detail \t|\n";
	cout<<"\t\t|\tBut Don't Worry Your Deatail is Safe\t\t\t\t|\n";
	cout<<"\t\t_________________________________________________________________________\n";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;

}
void Delete_Room_Record()
{
	int del;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\tEnter Your Room id Number \t\t";
	cin>>del;
	if(del >100)
	{cout<<endl;
	cout<<endl;
	cout<<"\t\t\t!	!	!	!	Not Match Please try Again   !	!	!	!\t\t\t";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	return ;}
	
	int r=0;
	for(int i=0; i<100; i++)
	{
		if(rooms_id[i] == del)
		{
			r=1;
			delele(i);
			return ;
		}
	}
	if(r==0)
	{cout<<endl;
	cout<<endl;
	cout<<"\t\t\t!	!	!	!	Not Match Please try Again   !	!	!	!\t\t\t";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	return ;}

}

void Room_Detail()
{
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\n\t\t--------------------------------------------------------\n";
	cout<<"  \t\t|\tFor Luxary Room Price 10000 \t\t\t|\n";
	cout<<"  \t\t|\tFor Ac Room Price 5000 \t\t\t\t|\n";
	cout<<"  \t\t|\tFor Non Ac Room Price 2000 \t\t\t|\n";
	cout<<"  \t\t|\tFor Regular Room Price 1000 \t\t\t|\n";
	cout<<"\t\t---------------------------------------------------------\n";
	cout<<endl;
	cout<<endl;
	cout<<endl;
}
int main()
{
	system("cls");
	int s;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	string sn="\t\t\t\t:::::::::::::::\t This Project Created By Sunil Jangra \t:::::::::::::::";
	for(int i=0; i<sn.size(); i++)
	{
		cout<<sn[i];
		_sleep(100);
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\n\t\t\t\t\t!!!!!!!!!!!! Please Press Any Key !!!!!!!!!! \n";
	getchar();
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	system("cls");
	cout<<endl;
	cout<<endl;
	cout<<endl;    // 
	cout<<endl;
	string st="\t\t\t\t:::::::::::::::\t Welcome to Hotel Management System \t:::::::::::::::";
	for(int i=0; i<st.size(); i++)
	{
		cout<<st[i];
		_sleep(100);
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	while(true)
	{
		cout<<"\t\t\t\t\t\t\n\t\t\t---------------------------------------------------------\n";
		cout<<"\t\t\t|\tPress 1 For Book a Room \t\t\t|"<<endl;
		cout<<"\t\t\t|\tPress 2 For Show All Record \t\t\t|"<<endl;
		cout<<"\t\t\t|\tPress 3 For Delete Record \t\t\t|"<<endl;
		cout<<"\t\t\t|\tPress 4 For Find Room Are Available Or Not \t|"<<endl;
		cout<<"\t\t\t|\tPress 5 For Rooms Detail \t\t\t|"<<endl;
		cout<<"\t\t\t|\tPress 6 For Exit \t\t\t\t|";
		cout<<"\t\t\t\t\t\t\n\t\t\t---------------------------------------------------------\n";

		cout<<endl;
		cout<<endl;
		cout<<endl;
	
		cin>>s;
		system("cls");
		switch(s)
		{
			case 1:{
					Book_Room();
					break;}
			case 2:{
					show_Detail();
					break;}
			case 3:{
					Delete_Room_Record(); 
					break;}
			case 4:{ 
					Room_Available();
					break;}
			case 5: {
					Room_Detail();
					break;}
			case 6:
					{exit(0);
					break;}
			default: 
				{
					cout<<"\n\t\t\t_____________________________________________\n";
					cout<<"\n\t\t\t\tPlease Enter a valid Number   ";
					cout<<"\n\t\t\t_____________________________________________\n";

					break;
				}
		}
	}
}