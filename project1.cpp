#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    //******Program to display year and month of user input******//
    int year, month;
    int Topday, day; // startday
    int NumofDays;   // numberofdays in month
    int weekcounter; // week counter

    cout << "Please enter a month between 1 and 12 inclusive " << endl;
    cin >> month; // user will enter month
    cout << endl;

    while (month > 12 || month < 1) // error validation for month
    {
        cout << "Error!" << endl;
        cout << "Please enter a month between 1 and 12 inclusive " << endl;
        cin >> month;
        cout << endl;
    }

    cout << "Please enter a year between 1971 or later " << endl;
    cin >> year; // user will enter year
    cout << endl;
    while (year < 1971 || year < 0) // error validation for year
    {
        cout << "Error!" << endl;
        cout << "Please enter a year between 1971 or later " << endl;
        cin >> year;
        cout << endl;
    }

    switch (month) // Determining month and days in the month
    {
    case 1:
        cout << " January ";
        NumofDays = 31;
        break;
    case 2:
        cout << " Febuary ";
        if (((!(year % 4) && (year % 100)) || !(year % 400))) // calculation of leap year
        {
            NumofDays = 29;
            break;
        }
        else
            NumofDays = 28;
        break;
    case 3:
        cout << " March ";
        NumofDays = 31;
        break;
    case 4:
        cout << "April ";
        NumofDays = 30;
        break;
    case 5:
        cout << "May";
        NumofDays = 31;
        break;
    case 6:
        cout << "June";
        NumofDays = 30;
        break;
    case 7:
        cout << "July";
        NumofDays = 31;
        break;
    case 8:
        cout << "August";
        NumofDays = 31;
        break;
    case 9:
        cout << "September";
        NumofDays = 30;
        break;
    case 10:
        cout << "October";
        NumofDays = 31;
        break;
    case 11:
        cout << "November";
        NumofDays = 30;
        break;
    case 12:
        cout << "December";
        NumofDays = 31;
    }

    //*****Formula for start of first day in month**********//
    Topday = ((int)(((year - 1) * 365) + floor((year - 1) / 4) - floor((year - 1) / 100) + floor((year - 1) / 400)) + 1) % 7;

    //****Display the of first day months occurence to formula*************//
    if (NumofDays == 30 || NumofDays == 29 || NumofDays == 28)
    {
        if (month == 2 || month == 11) // Feb or November
        {
            if (Topday == 0)
                day = 3; // Wed

            else if (Topday == 1)

                day = 4; // thursday

            else if (Topday == 2)

                day = 2; // monday

            else if (Topday == 3)

                day = 6; // saturday

            else if (Topday == 4)

                day = 0; // sunday

            else if (Topday == 5)

                day = 1; // Monday

            else if (Topday == 6)

                day = 2; // tuesday

            else if (Topday == 7)

                day = 1; // friday
        }

        else if (month == 4) // April

        {
            if (Topday == 0)
                day = 6; // Sat

            else if (Topday == 1)

                day = 1; // Monday

            else if (Topday == 2)

                day = 0; // sunday

            else if (Topday == 3)

                day = 2; // Tues

            else if (Topday == 4)

                day = 3; // Wed

            else if (Topday == 5)

                day = 4; // Thurs

            else if (Topday == 6)

                day = 5; // Friday
        }
        else if (month == 9) // September

        {
            if (Topday == 0)
                day = 5; // Fri

            else if (Topday == 1)

                day = 6; // Sat

            else if (Topday == 2)

                day = 0; // Sunday

            else if (Topday == 3)

                day = 1; // Mon

            else if (Topday == 4)

                day = 2; // Tues

            else if (Topday == 5)

                day = 3; // Wed

            else if (Topday == 6)

                day = 4; // Thurs
        }

        else if (month == 6) // June

        {
            if (Topday == 0)
                day = 4; // Thurs

            else if (Topday == 1)

                day = 5; // Fri

            else if (Topday == 2)

                day = 6; // Sat

            else if (Topday == 3)

                day = 1; // Mon

            else if (Topday == 4)

                day = 2; // Tues

            else if (Topday == 5)

                day = 0; // Sun

            else if (Topday == 6)

                day = 3; // Wed
        }
    } // end of Months that have 28-30 days
    //******Display of start first day for Months with 31 days*******//
    else if (NumofDays == 31)
    {
        if (month == 1) // Jan

        {
            if (Topday == 0)
                day = 0; // Sun

            else if (Topday == 1)

                day = 1; // Mon

            else if (Topday == 2)

                day = 2; // Tues

            else if (Topday == 3)

                day = 3; // Wed

            else if (Topday == 4)

                day = 4; // Thurs

            else if (Topday == 5)

                day = 5; // Fri

            else if (Topday == 6)

                day = 6; // Sat
        }

        else if (month == 3) // March

        {
            if (Topday == 0)
                day = 3; // Wed

            else if (Topday == 1)

                day = 4; // Thurs

            else if (Topday == 2)

                day = 5; // Fri

            else if (Topday == 3)

                day = 6; // Sat

            else if (Topday == 4)

                day = 0; // Sun

            else if (Topday == 5)

                day = 1; // Mon

            else if (Topday == 6)

                day = 2; // Tues
        }

        else if (month == 5) // May

        {
            if (Topday == 0)
                day = 1; // Mon

            else if (Topday == 1)

                day = 2; // Tues

            else if (Topday == 2)

                day = 3; // Wed

            else if (Topday == 3)

                day = 4; // Thurs

            else if (Topday == 4)

                day = 5; // Fri

            else if (Topday == 5)

                day = 6; // Sat

            else if (Topday == 6)

                day = 0; // Sun
        }

        else if (month == 7) // July

        {
            if (Topday == 0)
                day = 6; // Sat

            else if (Topday == 1)

                day = 0; // Sun

            else if (Topday == 2)

                day = 1; // Mon

            else if (Topday == 3)

                day = 2; // Tues

            else if (Topday == 4)

                day = 3; // Wed

            else if (Topday == 5)

                day = 4; // Thurs

            else if (Topday == 6)

                day = 5; // Fri
        }
        else if (month == 8) // August

        {
            if (Topday == 0)
                day = 2; // Tues

            else if (Topday == 1)

                day = 3; // Wed

            else if (Topday == 2)

                day = 4; // Thurs

            else if (Topday == 3)

                day = 6; // Sat

            else if (Topday == 4)

                day = 3; // Wed

            else if (Topday == 5)

                day = 0; // Sun

            else if (Topday == 6)

                day = 1; // Mon
        }
        else if (month == 10) // October

        {
            if (Topday == 0)
                day = 0; // Sun

            else if (Topday == 1)

                day = 1; // Mon

            else if (Topday == 2)

                day = 2; // Tues

            else if (Topday == 3)

                day = 3; // Wed

            else if (Topday == 4)

                day = 4; // Thurs

            else if (Topday == 5)

                day = 5; // Fri

            else if (Topday == 6)

                day = 6; // Sat
        }
        else if (month == 12) // December

        {
            if (Topday == 0)
                day = 5; // Fri

            else if (Topday == 1)

                day = 6; // Sat

            else if (Topday == 2)

                day = 0; // Sun

            else if (Topday == 3)

                day = 1; // Mon

            else if (Topday == 4)

                day = 2; // Tues

            else if (Topday == 5)

                day = 3; // Wed

            else if (Topday == 6)

                day = 4; // Thurs
        }
    } // end of Months with 31 days
    //*************Display of Calendar**************//
    cout << "                      " << year << endl; // space between month and year

    cout << "\nSun  Mon  Tues  Wed  Thurs  Fri   Sat"; // display of weekdays
    cout << "\n\n"
         << setw(2);
    //*****loop of alignment occurence to first start day********//
    for (int i = 0; i < day; ++i)
    {
        if (day == 0)
            cout << setw(20);
        else if (day == 4)
            cout << setw(26);
        else if (day == 3)
            cout << setw(20);
        else if (day == 5)
            cout << setw(32);
        else if (day == 6)
            cout << setw(38);
        else if (day == 2)
            cout << setw(14);
        else if (day == 1)
            cout << setw(8);
        else if (day == 7)
            cout << setw(2);
    }
    //**variable for update for weekcounter**//
    int tempfirstday = day;
    weekcounter = tempfirstday;
    //**loop to display the month with alignment**//
    for (int counter = 1; counter <= NumofDays; ++counter)
    {
        cout << counter << setw(6);
        ++weekcounter; // update of week
        if (weekcounter > 6)
        {
            cout << "\n\n"
                 << setw(2);
            weekcounter = 0;
        }
    }
    cout << endl;
    tempfirstday = weekcounter + 1; // update of week
}
