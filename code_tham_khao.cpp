#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>
using namespace std;
int main(){
mainmenu:
//clrscr();
int regn;
cout<<"\n\t\t\tWelcome to GYM Management System";
cout<<"\n\t\t************************************************";
cout<<"\n\n\n\n\n";
cout<<"\t\t\tPress 1 for Registration.";
 cout<<"\n\t\t\tPress 2 for Attendance Portal.";
cout<<"\n\t\t\tPress 3 for Fee Portal.";
cout<<"\n\t\t\tPress 4 for View Gym Data.";
cout<<"\n\t\t\tPress 5 for Exercise Schedule.";
cout<<"\n\t\t\tPress 6 for Exit.\n\n\n\t\t\t";
char input1;
char male[6],option[5],contact[15],month[10],amount[10],name[12],name3[12],name2[12];
char address[55];
cin>>input1;
switch(input1){
 case '1':
   //clrscr();
   cout<<"\n\n\t\t\t   Register New User:\n";
   cout<<"\t\t\t***********************\n";
   cout<<"\t\t\tEnter Name: ";
   fflush(stdin);
   gets(name);
   cout<<"\n\t\t\tMale (M or F): ";
   cin>>male;
   cout<<"\n\t\t\tConatct: ";
   cin>>contact;
   cout<<"\n\t\t\tAddress: ";
   fflush(stdin);
   gets(address);
   cout<<"\n\t\t\tPress any key to return main screen: ";
   getch();
   goto mainmenu;
 case '2':          //clrscr();
 cout<<"\n\n\t\t\t   Attendance for Today:\n";
   cout<<"\t\t\t****************************\n";
    cout<<"\n\n\n\t\t\tName of trainee: ";
    gets(name2);
    cout<<"\n\n\n\n\t\t\t"<<name2<<" has marked attendance sucessfully !\n\n";
   cout<<"\n\n\n\n\t\tPress any key to return main screen: ";
   goto mainmenu;
 case '3': //clrscr();
 cout<<"\n\n\t\t\t   Fee Portal:\n";
   cout<<"\t\t\t***********************\n";
   cout<<"\n\n\n\t\t\tPress 1 to Submit Fee.";
   cout<<"\n\t\t\tPress 2 to View Pending Fee.\n\t\t\t";
   cin>>option;
   if(*option=='1'){
   cout<<"\n\t\t\tName of the Trainee :";
   gets(name3);
   cout<<"\n\t\t\tFee of Month :";
   cin>>month;
  cout<<"\n\t\t\tAmount :";
   cin>>amount;
   cout<<"\n\n\n********************   Payment Successful!  *********************\n";
   }
   else{
   cout<<"\n\t\t\tAll trainees have done their payments!";
   }
   cout<<"\n\n\n\t\t\tPress any key to return main screen: ";
   getch();
   goto mainmenu;
 case '4':
 //clrscr();
 cout<<"\n\n\t\t\t   Gym Data:\n";
   cout<<"\t\t\t***********************\n";
   cout<<"\n\n\t\t\tName of trainee :";
   cout<<name;
   cout<<"\n\t\t\tMale (M or F): ";
   cout<<male;
   cout<<"\n\t\t\tConatct: ";
   cout<<contact;
   cout<<"\n\t\t\tAddress: ";cout<<address;
   cout<<"\n\n\n\t\t\tPress any key to return main screen: ";
   getch();
   goto mainmenu;
 case '5':           //clrscr();
 cout<<"\n\n\t\t\t   Exercise Schedule:\n";
   cout<<"\t\t\t***********************\n";
   cout<<"\n\n\t\t\tMonday: Chest";
   cout<<"\n\n\t\t\tTuesday: Biceps";
 cout<<"\n\n\t\t\tWednesday: Triceps";
  cout<<"\n\n\t\t\tThursday: Back";
   cout<<"\n\n\t\t\tFriday: Leg";
    cout<<"\n\n\t\t\tSaturday: Shoulder";
     cout<<"\n\n\n\t\t\tPress any key to return main screen: ";
   getch();
   goto mainmenu;
 case '6':
  exit(1);
 default :
  cout<<"\n\t\t\tPlease press key from 1 to 6.";
}
return 0;
}
