#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string>
#include<windows.h>
#include<fstream>
using namespace std;

       char l_destination[5][20]={"KHULNA","RAJSHAHI","CHITTAGONG","DHAKA","SHLYET"};
       char i_destination[10][20]={"LONDON","BERLIN","DUBAI","NEW YORK","BEIJING","PARIS","CAPE TOWN","TOKYO","LOS ANGELES","MUMBAI" };
       string user;
       string pass;


class passenger
{
public:
    virtual void getdata()
 {
 }
virtual void show()
 {
 }
};


class booking:public passenger
{
protected:
 int num;
 char ch;
 char firstname[60];
 char lastname[60];
 char address[60];
 char email[60];
 char number[60];
 char currentloc[30];
 char dest[30];
 char reservation_no[60];
 int option;
public:
 void getdata()
 {
  cout<<setw(40)<<"\n\n        ::Please enter the required information for passenger number::"<<endl;
  cout<<"\n\n\nEnter the firstname of passenger: ";
   cin.getline(firstname,60);
   cout<<endl;
   cout<<"Enter the lastname of passenger: ";
   cin.getline(lastname,60);
   cout<<endl<<endl;
   cout<<"Enter address of passenger:  ";
   cin.getline(address,60);
   cout<<"Enter email address of passenger:  ";
   cin.getline(email,60);
   cout<<"Enter mobile number of passenger:  ";
   cin.getline(number,60);

   cout<<endl<<endl;
   cout<<"Enter the Resevation No. of Ticket"<<endl;
   cin.getline(reservation_no,60);
   cout<<endl;
   cout<<"Enter the current location of passenger(IN CAPITAL LETTERS ONLY):  ";
   cin.getline(currentloc,60);
   cout<<endl<<endl;
   cout<<"Enter the destination of passenger(IN CAPITAL LETTERS ONLY):  ";
   cin.getline(dest,60);
   cout<<endl<<endl;
   system("CLS");
   system("color 5f");
 }
 void show()
 {
   cout<<setw(40)<<"Your E-Ticket is :"<<endl;
   int t=1;

  cout<<"                           AIRLINE TICKET OF YOUR FLIGHT                  "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|Ticket No."<<t<<"                                  15 DEC 2017           "<<endl;
  cout<<"|*************************************************************************"<<endl;
  cout<<"|Resevation No. :"<<reservation_no<<"                                     "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|Passenger Information :                                                  "<<endl;
  cout<<"|*************************************************************************"<<endl;
  cout<<"|Name :"<<firstname<<" "<<lastname<<"                                     "<<endl;
  cout<<"|                                                                         "<<endl;
  cout<<"|Address :"<<address<<"                                                   "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|EMAIL ADDRESS :"<<email<<"                                               "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|MOBILE NUMBER :"<<number<<"                                              "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|*************************************************************************"<<endl;
  cout<<"|flight Information :                                                     "<<endl;
  cout<<"|                                                                         "<<endl;
  cout<<"|BOING 747                                                                "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|Depart :"<<currentloc<<"                                                 "<<endl;
  cout<<"|Arrive :"<<dest<<"                                                       "<<endl;
  cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
  cout<<"|*contact Airline to Confirm baggage allowance                            "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;

  /*ofstream outfile("E:\\E_ticket.txt");
        outfile<<" AIRLINE TICKET OF BANGLADESH                                "<<endl<<
   "|Ticket No."<<t<<"                                9 DEC 2017  "<<endl<<
      "|_________________________________________________________________________"<<endl<<
   "|Resevation No. :"<<reservation_no<<"                                     "<<endl<<
   "|__________________________________________________________________________"<<endl<<
      "|Passenger Information :                                                  "<<endl<<
      "|Name :"<<firstname<<"/"<<lastname<<"                                     "<<endl<<
      "|                                                                         "<<endl<<
      "|Address :"<<address<<"                                                   "<<endl<<
      "|_________________________________________________________________________"<<endl<<
         "|flight Information :                                                     "<<endl<<
      "|                                                              "<<endl<<
      "|BOING 747                                                                "<<endl<<
      "|_________________________________________________________________________"<<endl<<
      "|Depart :"<<currentloc<<"                                                      "<<endl<<
      "|Arrive :"<<dest<<"                                                       "<<endl<<
      "|*BAGGAGE allowed 40 Kilos                                                "<<endl<<
      "|*contact Airline to Confirm baggage allowance                            "<<endl<<
      "|_________________________________________________________________________"<<endl;*/
      ofstream outfile("E:\\E_ticket.txt");
        outfile<<"                           AIRLINE TICKET OF YOUR FLIGHT   "<<endl<<
  "|_________________________________________________________________________"<<endl<<
  "|_________________________________________________________________________"<<endl<<
  "|Ticket No."<<t<<"                                  15 DEC 2017           "<<endl<<
  "|*************************************************************************"<<endl<<
  "|Resevation No. :"<<reservation_no<<"                                     "<<endl<<
  "|_________________________________________________________________________"<<endl<<
  "|Passenger Information :                                                  "<<endl<<
  "|*************************************************************************"<<endl<<
  "|Name :"<<firstname<<" "<<lastname<<"                                     "<<endl<<
  "|                                                                         "<<endl<<
  "|Address :"<<address<<"                                                   "<<endl<<
  "|_________________________________________________________________________"<<endl<<
  "|EMAIL ADDRESS :"<<email<<"                                               "<<endl<<
  "|_________________________________________________________________________"<<endl<<
  "|MOBILE NUMBER :"<<number<<"                                              "<<endl<<
  "|_________________________________________________________________________"<<endl<<
  "|*************************************************************************"<<endl<<
  "|flight Information :                                                     "<<endl<<
  "|                                                                         "<<endl<<
  "|BOING 747                                                                "<<endl<<
  "|_________________________________________________________________________"<<endl<<
  "|Depart :"<<currentloc<<"                                                 "<<endl<<
  "|Arrive :"<<dest<<"                                                       "<<endl<<
  "|*BAGGAGE allowed 40 Kilos                                                "<<endl<<
  "|*contact Airline to Confirm baggage allowance                            "<<endl<<
  "|_________________________________________________________________________"<<endl;




t=t+1;


 }
};


class search
{
public:
void searching()
 {
  cout<<"FOLLOWING ARE THE INTERNATIONAL FLIGHTS AVAILABLE"<<endl;
  ifstream ing;
  ing.open("s.txt");
  string s;
  while(getline(ing,s))
  {
      cout<<s<<endl;
  }
  }
};
class local: public booking
{
protected:
    int b_seat;
 int e_seat;
 int ch;
 int k;
 int p;
 int option;
 //mytime t1;
public:
 void getdata()
 {
  k=0;
  p=0;
  cout<<"In which AIRLINE you want to travel"<<endl<<endl;
  cout<<"1)BIMAN BANGLADESH"<<endl;
  cout<<"2)US-BANGLA AIRLINES"<<endl;
  cout<<"3)UNITED AIRWAYS"<<endl;
  cout<<"4)NOVOAIR"<<endl;
  cout<<"enter your choice"<<endl;;
  cin>>option;
  system ("cls");
  switch(option)
  {
  case 1:
   if (option==1)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO BIMAN BANGLADESH"<<endl;
   break;
  case 2:
   if(option==2)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO US-BANGLA AIRLINES"<<endl;
   break;
  case 3:
   if(option==3)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO UNITED AIRWAYS"<<endl;
   break;
  case 4:
   if(option==4)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO NOVOAIR"<<endl;
   break;
  }
  cout<<setw(40)<<"\nTHESE ARE THE LOCAL PLACES AVAILABLE\n\n\n"<<endl;
  cin.ignore();
  for(int i=0;i<5;i++)
  {
   cout<<l_destination[i]<<endl;
  }
  booking::getdata();
  for(int j=0;j<5;j++)
  {
   if(strcmp(l_destination[j],currentloc)==0)
   {
    k++;
   }

  }
  for( int i=0;i<5;i++)
  {
   if(strcmp(l_destination[i],currentloc)==0)

   {

    p++;

   }

  }
  if(k==1&&p==1)

  {

   cout<<" FLIGHT AVAILABLE ON THIS ROUTE"<<endl;

   b_seat=70;

   e_seat=40;

   cout<<"In which class you want to travel?"<<endl;

   cout<<"Make your choice"<<endl<<endl;

   cout<<"\n\n\n\n\n\n";

  cout<<setw(60)<<"*************************************"<<endl;
        cout<<setw(60)<<"*     Press 1 for buisness class    *"<<endl;
  cout<<setw(60)<<"*     Press 2 for economy class     *"<<endl;
  cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;

   cout<<"Enter your choice"<<endl;

   cin>>ch;

   cout<<endl;
   switch(ch)

   {

   case 1:

    b_seat--;

    if(b_seat<=0)

     cout<<"SORRY NO SEAT AVAILABLE"<<endl;

    else

     cout<<"SEAT AVAILABLE"<<endl;

    break;

   case 2:

    e_seat--;

    if(e_seat<=0)

     cout<<"SORRY NO SEAT AVAILABLE"<<endl;

    else

     cout<<"SEAT AVAILABLE"<<endl;

    break;

   }

   system("CLS");
   booking::show();
   if(ch==1)

   {

    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|BUISNESS CLASS                                                           "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Ticket Information:                                                      "<<endl<<
             "|BUISNESS CLASS                                                           "<<endl;

   }

   if(ch==2)

   {

    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|ECONOMY CLASS                                                            "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Ticket Information:                                                      "<<endl<<
             "|ECONOMY CLASS                                                           "<<endl;
   }

       cout<<"|Status: confirmed                                                        "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|Status: confirmed                                                        "<<endl;
   // t1.show();
  }
  else

  {
     cout<<"__________________________________________________________________________"<<endl;
     cout<<"|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;
     cout<<"__________________________________________________________________________"<<endl;

  }
}
 };



class international:public booking

 {

 protected:

  int b1_seat;

  int e1_seat;

  int choice;

  int c;

  int b;

  int v;

  char g;


 public:


  void getdata()

  {

   b=0;

   v=0;

        cout<<"In which AIRLINE you want to travel"<<endl<<endl;
  cout<<"1)REGENT AIRWAYS"<<endl;
  cout<<"2)HELLO AIR"<<endl;
  cout<<"3)SOUTH ASIAN AIRLINES"<<endl;
  cout<<"4)EASY FLY EXPRESS"<<endl;
  cout<<"enter your choice"<<endl;;
  cin>>option;

  system ("cls");

  switch(option)
  {
  case 1:
   if (option==1)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO REGENT AIRWAYS"<<endl;
   break;
  case 2:
   if(option==2)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO HELLO AIR"<<endl;
   break;
  case 3:
   if(option==3)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO SOUTH ASIAN AIRLINES"<<endl;
   break;
  case 4:
   if(option==4)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO EASY FLY EXPRESS"<<endl;
   break;
  }
   cout<<"\n\nTHESE ARE THE INTERNATIONAL PLACES AVAILABLE"<<endl<<endl;
   cin.ignore();

   for(int i=0;i<10;i++)

   {

    cout<<i_destination[i]<<endl;

   }


   booking::getdata();

   for(int j=0;j<10;j++)

   {


    if(strcmp(i_destination[j],dest)==0)

    {

     v++;

    }

   }
   for( int i=0;i<5;i++)

   {


    if(strcmp(l_destination[i],currentloc)==0)


    {

     b++;

    }


   }
   if(b==1&&v==1)

   {

    cout<<" FLIGHT AVAILABLE ON THIS ROUTE"<<endl;

    b1_seat=70;

    e1_seat=40;

    cout<<"In which class you want to travel?"<<endl;


    cout<<"Make your choice"<<endl<<endl;


    cout<<"\n\n\n\n\n\n";

  cout<<setw(60)<<"*************************************"<<endl;
  cout<<setw(60)<<"*     Press 1 for buisness class    *"<<endl;
  cout<<setw(60)<<"*     Press 2 for economy class     *"<<endl;
  cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;

  cout<<"Enter your choice"<<endl;

  cin>>choice;

  cout<<endl;

  switch(choice)

  {


  case 1:

   b1_seat--;

   if(b1_seat<=0)

    cout<<"SORRY NO SEAT AVAILABLE"<<endl;

   else

    cout<<"SEAT AVAILABLE"<<endl;

   break;

  case 2:

   e1_seat--;

   if(e1_seat<=0)

    cout<<"SORRY NO SEAT AVAILABLE"<<endl;

   else

    cout<<"SEAT AVAILABLE"<<endl;

   break;

  }

//  t1.getdata();



  system("CLS");


  booking::show();

  if(choice==1)

  {

    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|BUISNESS CLASS                                                           "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Ticket Information:                                                      "<<endl<<
             "|BUSINESS CLASS                                                           "<<endl;

  }

  if(choice==2)

  {

    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|ECONOMY CLASS                                                           "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Ticket Information:                                                      "<<endl<<
             "|ECONOMY CLASS                                                           "<<endl;

  }

  cout<<"|Status: confirmed                                                        "<<endl;

  ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|Status: confirmed                                                        "<<endl;

//  t1.show();
   }
   else

   {
    cout<<"__________________________________________________________________________"<<endl;
     cout<<"|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;
   cout<<"__________________________________________________________________________"<<endl;

   }
}
 };



class ADMIN

 {
 private:

  char f;

  int choice;

  char a;

 public:


void getdata()
{
m:
    cout<<"\n\n\n\n\n\n";
   cout<<setw(99)<<"###################################################################################################################"<<endl;
   cout<<setw(60)<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
   cout<<setw(60)<<"*                                  AIRWAYS RESERVATION SYSTEM OF BANGLADESH                                       *"<<endl;
   cout<<setw(60)<<"*                                                                                                                 *"<<endl;
   cout<<setw(60)<<"*                                                main menu                                                        *"<<endl;
   cout<<setw(60)<<"*                                                                                                                 *"<<endl;
   cout<<setw(60)<<"*                                  PLEASE FOLLOW THE INSTRUCTIONS CAREFULLY                                       *"<<endl;
   cout<<setw(60)<<"*                                                                                                                 *"<<endl;
   cout<<setw(60)<<"*                                                                                                                 *"<<endl;
   cout<<setw(60)<<"*                               Give your choice according to your destination                                    *"<<endl;
   cout<<setw(60)<<"*                                                                                                                 *"<<endl;
   cout<<setw(60)<<"*                                                                                                                 *"<<endl;
   cout<<setw(60)<<"*                                            ENTER YOUR CHOICE :                                                  *"<<endl;
   cout<<setw(60)<<"*                                                                                                                 *"<<endl;
   cout<<setw(60)<<"*                                                                                                                 *"<<endl;
   cout<<setw(60)<<"*                                                                                                                 *"<<endl;
   cout<<setw(60)<<"*                        PRESS 1 FOR LOCAL BOOKING         PRESS 2 FOR INTERNATIONAL BOOKING             1        *"<<endl;
   cout<<setw(60)<<"*                                                                                                                 *"<<endl;
   cout<<setw(60)<<"*                                     PRESS 3 FOR SEARCH OF FLIGHTS                                               *"<<endl;
   cout<<setw(60)<<"*                                                                                                                 *"<<endl;
   cout<<setw(60)<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
   cout<<setw(60)<<"###################################################################################################################"<<endl;
   cout<<endl<<endl<<setw(80)<<"Enter your choice please :";


   cin>>choice;

  system("cls");
  system("color 8f");

   passenger* p1;

   booking b1;

   international i1;

   local l1;

   char back;


   switch(choice)

   {

   case 1:


    p1=&l1;

    p1->getdata();

    cout<<"To Go To Main Menu Press b"<<endl;

    cin>>back;



    system("CLS");

    if (back=='b')

    {

     goto m;

    }

    else

    {

     cout<<"\n\n\n\n\n\n";

     cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";

    }


    break;

   case 2:


    p1=&i1;

    p1->getdata();

    cout<<"To Go To Main Menu Press b"<<endl;

    cin>>back;


    system("CLS");

    if (back=='b')

    {

     goto m;

    }

    else

    {

     cout<<"\n\n\n\n\n\n";

     cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";

    }

    break;

   case 3:

    search s1;

    s1.searching();

    cout<<"To Go To Main Menu Press b"<<endl;

    cin>>back;



    system("CLS");

    if (back=='b')

    {

     goto m;

    }

    else

    {

     cout<<"\n\n\n\n\n\n";

     cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";

    }

    break;

}
}
};


int LoginCheck (string user, string pass)
{
    ifstream file;
    string username, password;
    int n=0;
    file.open("users.txt");
    if (file.is_open())
    {
        while (!file.eof())
        {
            file >> username >> password;
            n++;
            if (user==username && pass==password)
                return n;
        }
    }
    else
    {
        cout << "!!! SORRY SYSTEM IS NOT WORKING !!!" << endl;
    }
    return 0;
}

void Register()
{
    ifstream file;
    ofstream newuser;
    string username, password, passwordconfirm;
    file.open("users.txt", ios::app);
    newuser.open("users.txt", ios::app);
    bool uservalid=false;
    while (!uservalid)
    {
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;
        cout << "Confirm password: ";
        cin >> passwordconfirm;
        int m=0;
        int k=0;
        while (file >> user >> pass)
        {
            m++;
            if (username!=user)
                k++;
        }
        if (m==k && password==passwordconfirm)
            uservalid=true;
        else if (m!=k)
            cout << "There is already a user with this username." << endl;
        else
            cout << "The passwords given do not match." << endl;
    }
    newuser << username << " " << password << endl;;
    file.close();
    newuser.close();
}

void loginto()
{
    int loginattempts=0;
    ifstream userfile;
    userfile.open("users.txt");
    string userset, passset;
    if (!userfile.is_open())
    {
        cout << "file not found" << endl;
    }
    else
    {
        cout << setw(60)<<"1.Login\n\n" << endl;
        cout << setw(60)<<"2.Register\n\n" << endl;
        int option;
        cout<<setw(60)<<"Please Enter your choice:";
        cin >> option;
        if (option==1)
        {
            while (LoginCheck(user, pass)==0)
            {
                loginattempts++;
                cout << "Username: ";
                cin >> user;
                cout << "Password: ";
                cin >> pass;
                if (LoginCheck(user, pass)!=0)
                    cout << "Welcome " << user << "." << endl;
                else if (loginattempts==3)
                {
                    cout << "Maximum login attempts exceeded." << endl;
                    break;
                }
                else
                {
                    cout << "Invalid username/password combination" << endl;
                }

            }
            userfile.close();
            ADMIN m2;
          m2.getdata();

        }
        else if (option==2)
        {
            Register();
            ADMIN m2;
          m2.getdata();

        }
    }
}


class login
{
 public:

    void getdata(){
        cout<<setw(110)<<"****************************************************************************"<<endl;
        cout<<setw(110)<<"****************************************************************************"<<endl;
        cout<<setw(110)<<"*                   WELCOME TO BANGLADESH AIRLINES                         *"<<endl;
        cout<<setw(110)<<"*                                                                          *"<<endl;
        cout<<setw(110)<<"*                                                                          *"<<endl;
        cout<<setw(110)<<"*                                                                          *"<<endl;
        cout<<setw(110)<<"*                                                            *             *"<<endl;
        cout<<setw(110)<<"*                                                          ***             *"<<endl;
        cout<<setw(110)<<"*                                     **                  ****             *"<<endl;
        cout<<setw(110)<<"*                                   ****                 ****              *"<<endl;
        cout<<setw(110)<<"*                                 ******               ******              *"<<endl;
        cout<<setw(110)<<"*                               *********             ******               *"<<endl;
        cout<<setw(110)<<"*                 *******************************************              *"<<endl;
        cout<<setw(110)<<"*             ***********************************************              *"<<endl;
        cout<<setw(110)<<"*            |***********************************************              *"<<endl;
        cout<<setw(110)<<"*             ***********************************************              *"<<endl;
        cout<<setw(110)<<"*              **********************************************              *"<<endl;
        cout<<setw(110)<<"*                           *******               *******                  *" <<endl;
        cout<<setw(110)<<"*                           *******                ****                    *"<<endl;
        cout<<setw(110)<<"*                              ****                 ***                    *"<<endl;
        cout<<setw(110)<<"*                                **                   *                    *"<<endl;
        cout<<setw(110)<<"*                 IF YOU NEW TO OUR SITE ,PLEASE SIGN-UP                   *"<<endl;
        cout<<setw(110)<<"*                 IF YOU ARE ALREADY SIGN-UP,PLEASE LOG IN                 *"<<endl;
        cout<<setw(110)<<"*                                                                          *"<<endl;
        cout<<setw(110)<<"*                                                                          *"<<endl;
        cout<<setw(110)<<"****************************************************************************"<<endl;
        cout<<setw(110)<<"****************************************************************************"<<endl;
        Sleep(3000);
        system("CLS");
        system("color 6f");

        loginto();

    }


 };



int main()
{
 SetConsoleTitle("AIRWAYS RESERVATION OF BANGLADESH");
 system("color 9f");
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\tWELCOME TO AIRWAYS RESERVATION SYSTEM";
 Sleep(2500);
 system ("cls");
 cout<<"\n\n\n\n\n\n\n\t\t          Developed by :";
 Sleep(500);
  cout<<"\n\t\t\t\t\t ANUPAM DAS ... ID NO. :1604054"<<endl<<"\n\t\t\t\t\tA.R.SANAULLAH ... ID NO.:1604050"<<endl<<"\n\t\t\t\t\tAKRAM HOSSAIN NAKIB ... ID NO.:1604057\n\n\n\n"<<endl;
  cout<<"\n\t\t\t\t\t SPECIAL THANKS TO MD. SABIR HOSSAIN"<<endl<<"\n\t\t\t\t\t LECTURER,DEPT. OF CSE,CUET"<<endl;
  Sleep(5000);
 Sleep(3000);
 system("cls");
 login m1;
 m1.getdata();
 return 0;
}
