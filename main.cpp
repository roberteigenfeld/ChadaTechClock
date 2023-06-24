/*Bobby Eigenfeld*/
/*May 21, 2023*/
/*CS-210*/
/*main.cpp*/
#include<iostream>
using namespace std;

class Time
{
public:
    int h1, h2, m1, m2, s1, s2;

    /*Formating for both 12-hour & 24-hour clocks.*/
    Time()
    {
        this->h1 = 12;
        this->h2 = 00;
        this->m1 = 00;
        this->m2 = 00;
        this->s1 = 00;
        this->s2 = 00;
    }

    /*Time function that checks that hours, minutes, and seconds should exceed it's limits.*/
       void managetime(int t = 1)
    {
        if (t == 1)
        {
            if (s1 / 60 > 0)
            {
                s1 %= 60;
                m1++;
            }
            if (m1 / 60 > 0)
            {
                m1 %= 60;
                h1++;
            }
            if (h1 / 12 > 0)
            {
                h1 %= 12;
                if (h1 == 0)
                    h1 = 12;
            }
        }
        if (t == 2)
        {
            if (s2 / 60 > 0)
            {
                s2 %= 60;
                m2++;
            }
            if (m2 / 60 > 0)
            {
                m2 %= 60;
                h2++;
            }
            if (h2 / 24 > 0)
            {
                h1 %= 24;
            }
        }

    }
    void managetime(int t = 1)
    {
        if (t == 1)
        {
            if (s1 / 60 > 0)
            {
                s1 %= 60;
                m1++;
            }
            if (m1 / 60 > 0)
            {
                m1 %= 60;
                h1++;
            }
            if (h1 / 12 > 0)
            {
                h1 %= 12;
                if (h1 == 0)
                    h1 = 12;
            }
        }
        if (t == 2)
        {
            if (s2 / 60 > 0)
            {
                s2 %= 60;
                m2++;
            }
            if (m2 / 60 > 0)
            {
                m2 %= 60;
                h2++;
            }
            if (h2 / 24 > 0)
            {
                h1 %= 24;
            }
        }

    }
    /*Simple function that waits for 1 second*/
    void waitSecond()
    {
        s1++;
        s2++;
        managetime(1);
        managetime(2);
    }

    /*Simple function that add 1 second*/
    void addSecond()
    {
        s1++;
        s2++;
        managetime(1);
        managetime(2);
    }

    /*Simple function that add 1 minute*/
    void addMinute()
    {
        m1++;
        m2++;
        managetime(1);
        managetime(2);
    }

    /*Simple function that add 1 hour*/
    void addHour()
    {
        h1++;
        h2++;
        managetime(1);
        managetime(2);
    }
    /*Clock output for both 12-hour & 24-hour*/
    void display()
    {
        cout << "****************************************" << endl;
        cout << "*            12-Hour Clock             *" << endl;
        printf("*            %02d:%02d:%02d PM               *\n", h1, m1, s1);
        cout << "****************************************" << endl;
        cout << endl;
        cout << "****************************************" << endl;
        cout << "*            24-Hour Clock             *" << endl;
        printf("*            %02d:%02d:%02d                  *\n", h2, m2, s2);
        cout << "****************************************" << endl;
    }
};

int main()
{
    Time t;
    int p, n, m, f = 1;


    /*Menu Selection & Prompt*/
    while (f > 0)
    {
        t.display();
        cout << "Would you like to edit the time? (1:yes, 2:no): " << endl;
        cin >> p;
        if (p == 1)
        {
            cout << "Make selection\n1. Edit Time\n2. EXIT\nEnter 1 or 2: ";
            cin >> n;

            if (n == 1)
            {
                cout << "\nMake selection\n1. Add 1 hour\n2. Add 1 minute\n3. Add 1 second\nEnter 1 or 2 or 3: ";
                cin >> m;

                switch (m)
                {
                case 1: t.addHour(); break;
                case 2: t.addMinute(); break;
                case 3: t.addSecond();
                }
            }
            if (n == 2)
            {
                f = -1;
            }
        }
        else if (p == 2)
        {
            t.addSecond();
            t.waitSecond();
        }
    }
}
