#include <iostream>
//#include <stdio.h>
//#include <string>

using namespace std;

string Months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};

int main(void)
{
    int date,m,d;
    //printf ("\t \t \t \t ****The day finder***\n  ");

   cout<< "\t \t \t \t ****The day finder***\n  "<<endl;
    cout << " \n\n\t\t date should be (1-31)"<<endl<< "\n\t\t month should be(1-12)\n\n"<<endl ;

    cout << "Enter the date : ";

    cin >> date;

    if (date >=32)
   {

   //date=d;
        cout << " ERROR "<<date<<" is invalid date" << endl<< "please enter a valid date (1-31):";
     cin >> date;
   }
    cout << "Enter the number of month: ";
   cin >> m;

   {

           if(m>=13)

           {

    cout << " ERROR "<<m<<" is invalid month" << endl<< "please enter a valid month (1-12):";
    cin >> m;

           }
   cout << "So, your choosen  month is: " << Months[m-1]<< "\n\n";
   }

        if (m== 2&&date ==14)

       cout << date<<" "<<Months[m-1]<< " is Valentine's Day " << endl;




    else if (m== 4&&date ==14)

        cout << date<<" "<<Months[m-1]<< " is  1'st  BOISHAKH " << endl;

    else if (m== 1&&date ==9)

        cout << date<<" "<<Months[m-1]<< " is  NRI Day " << endl;


    else if (m== 1&& date ==10)

        cout << date<<" "<<Months[m-1]<< " is  World Laughter Day " << endl;


    else if (m==1 && date ==12)

        cout << date<<" "<<Months[m-1]<< " is  National Youth Day " << endl;

    else if (m== 1&& date ==15)

        cout << date<<" "<<Months[m-1]<< " is  Army day " << endl;

    else if (m== 1&&date ==25)

        cout << date<<" "<<Months[m-1]<< " is  National Voters day" << endl;

    else if (m== 1&&date ==26)

        cout << date<<" "<<Months[m-1]<< " is  India’s Republic Day, International Customs Day" << endl;

    else if (m== 1&&date ==30)

        cout << date<<" "<<Months[m-1]<< " is  Martyrs’ Day; World Leprosy Eradication Day" << endl;

    else if (m== 2&&date ==4)

        cout << date<<" "<<Months[m-1]<< " is   World Cancer Day" << endl;

    else if (m== 2&&date ==24)

        cout << date<<" "<<Months[m-1]<< " is   Central Excise Day" << endl;

    else if (m== 2&&date ==28)

        cout << date<<" "<<Months[m-1]<< " is   National Science Day" << endl;

    else  if (m== 3&&date ==8)

        cout << date<<" "<<Months[m-1]<< " is   international Women’s Day; Intl. literacy Day" << endl;

    else if (m== 3&&date ==15)

        cout << date<<" "<<Months[m-1]<< " is   World Disabled Day; World Consumer Rights Day" << endl;

    else if (m>=13,date >=32)

        cout << " ERROR "<<date<<" is invalid date" << endl;


   else

       cout <<" \t \t" << date<<" "<<Months[m-1]<< endl<< "Sorry in this date there is no day announced yet \n\n" << endl ;




        cout << endl<< " \t \t \t \t Thanks for using this softwere"<< endl ;
        cout << endl<< " \t \t \t \t   This softwere is created by"<< endl ;
        cout << endl<< " \t \t \t \t        Md:Firoz Mahamud"<< endl ;
        cout << endl<< " \t \t \t \t \t   BSC in CSE"<< endl ;
        cout << endl<< " \t \t \t  American International University-Bangladesh (AIUB)\n\n\n\n\n\n"<< endl ;

    return 0;

}
