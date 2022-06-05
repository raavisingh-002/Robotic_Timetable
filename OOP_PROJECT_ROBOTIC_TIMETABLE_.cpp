#include <bits/stdc++.h>
#include <string.h>
#include <conio.h>
using namespace std;

class school
{
    string school_state;
    string school_address;
    int floors;
    string school_name;

protected:
    int numberofteachers;
    int number_of_students;
    char principal_name[20] = "Kusum";
    char medium[10] = "Hindi";
    const char *house[4] = {"yellow", "green", "blue", "red"};

public:
    school()
    {
    }
    school(int number_of_students, int numberofteachers)
    {
        this->number_of_students = number_of_students;
        this->numberofteachers = numberofteachers;
    }
    void display_schl()
    {
        school_name = "Delhi Public School";
        school_state = "Delhi";
        number_of_students = 4000;
        numberofteachers = 100;
        school_address = "West Punjabi Bagh near Mahanvir nursing home";
        floors = 5;

        system("cls");

        int a, s;
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |         Enter information of school               |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        for (a = 0; a <= 100000000; a++)
        {
        }

        cout << "\n\n";
        cout << "\t\t\t\t\t";
        cout << "School Name:   " << school_name << endl;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (a = 0; a <= 100000000; a++)
        {
        }
        for (a = 0; a <= 100000000; a++)
        {
        }

        cout << "State:         " << school_state << endl;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (a = 0; a <= 100000000; a++)
        {
        }
        for (a = 0; a <= 100000000; a++)
        {
        }

        cout << "Principal:    " << principal_name << endl;

        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (a = 0; a <= 100000000; a++)
        {
        }
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "Address:      " << school_address << endl;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (a = 0; a <= 100000000; a++)
        {
        }
        for (a = 0; a <= 100000000; a++)
        {
        }

        cout << "Floors:       " << floors << endl;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (a = 0; a <= 100000000; a++)
        {
        }
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "Number of teachers in school:       " << numberofteachers << endl;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (a = 0; a <= 100000000; a++)
        {
        }
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "Number of students in school:       " << number_of_students << endl;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (a = 0; a <= 100000000; a++)
        {
        }
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\n";
        cout << "\n";
        cout << "\n";
        system("pause");

        return;
    }
};

class branch : virtual public school
{
protected:
    string branch_name;

public:
    branch()
    {
    }
    branch(int x, int y) : school(x, y)
    {
    }
    void showbranchdistribution()
    {
        system("cls");
        int a, s;
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |         Information of branch                     |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        for (a = 0; a <= 100000000; a++)
        {
        }

        cout << "\n\n";
        cout << "\t\t\t\t\t";
        cout << "Number_of_students in the 3 branches     " << number_of_students << endl;

        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (a = 0; a <= 100000000; a++)
        {
        }
        for (a = 0; a <= 100000000; a++)
        {
        }

        cout << "Number of teachers in the 3 branches      " << numberofteachers << endl;
        cout << "\n";
        system("pause");
    }
};
class school_grade : virtual public branch
{
    int numberofsections;

protected:
    int grade;

public:
    void getdata()
    {

        cout << "Enter grade : ";
        cin >> grade;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        if (grade < 6 && grade >= 1)
        {
            numberofsections = 4;
            show_num_of_sections();
        }
        else if (grade <= 10 && grade >= 6)
        {
            numberofsections = 6;
            show_num_of_sections();
        }
        else if (grade >= 11 && grade <= 12)
        {
            cout << "Enter the branch name : ";
            cin >> branch_name;
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
        }
    }
    void show_num_of_sections()
    {
        cout << "Number of sections in your grade are " << numberofsections << endl;
    }
};

class timetable : virtual public branch
{
protected:
    int numberofworkingdays;
    int numberoflabdays;
    int numberofperiods;

public:
    timetable()
    {
    }
    timetable(int numberofworkingdays, int numberoflabdays, int numberofperiods)
    {

        this->numberofworkingdays = numberofworkingdays;
        this->numberoflabdays = numberoflabdays;
        this->numberofperiods = numberofperiods;
    }

    virtual void showtimetable() = 0;
};
class student : virtual public school, public school_grade
{
protected:
    string First_Name;
    string Second_Name;
    string Gender;
    int Age;
    double Height;

public:
    student()
    {
    }
    int s = 0;
    void SetData()
    {

        system("cls");
        if (s > 3)
        {
            s = 0;
        }

        int a;
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |         Enter basic information of student        |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\n\n";
        cout << "\t\t\t\t\t";
        cout << "Enter first name : ";
        cin >> First_Name;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "Enter second name : ";
        cin >> Second_Name;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "Enter gender : ";
        cin >> Gender;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "Enter age : ";
        cin >> Age;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "Enter height : ";
        cin >> Height;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "House of the student is : " << house[s];
        s++;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";

        getdata();
        system("pause");
        return;
    }
};

class commerce : public timetable
{
public:
    commerce()
    {
    }
    commerce(int a, int b, int c) : timetable(a, b, c)
    {
        branch_name = "commerce";
    }
    void showtimetable()
    {
        system("cls");
        cout << "                   **************************************************" << branch_name << "TIMETABLE**************************************************" << endl;
        cout << "Number  of  working  days  are :  " << numberofworkingdays << endl;
        cout << "Number  of  lab  days  are     :  " << numberoflabdays << endl;
        cout << "Number  of  periods  are       :  " << numberofperiods << endl;

        cout << "    _____________________________________________________________________________________________________________________________________" << endl;
        cout << "    |                          MONDAY              TUESDAY              WEDNESDAY              THURSDAY              FRIDAY              |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    8:00-9:00            Accounts                BST                Maths                 English             Economics             |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    9:00-10:00        Money & Banking         Psychology           Accounts                Maths             Money & Banking        |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    10:00-11:00            BST              Money & Banking          BST                    BST               Psychology            |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    11:00-11:30                                                                                                                     |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    11:30-12:30          Economics              Maths               English                 BST                 Maths               |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    12:30-1:30            English              Accounts            Statistics             Economics            Accounts             |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    1:30-2:30             Sports              Statistics           Psychology             Economics           Statistics            |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    _____________________________________________________________________________________________________________________________________" << endl;
        cout << "\n\n";
        cout << "\n\n";

        system("pause");
    }
};
class science : public timetable
{
public:
    science()
    {
    }
    science(int a, int b, int c) : timetable(a, b, c)
    {
        branch_name = "science";
    }
    void showtimetable()
    {
        system("cls");
        cout << "                   ************************************************ " << branch_name << " TIMETABLE**************************************************" << endl;
        cout << "Number  of  working  days  are : " << numberofworkingdays << endl;
        cout << "Number  of  lab  days  are     : " << numberoflabdays << endl;
        cout << "Number  of  periods  are       : " << numberofperiods << endl;
        cout << "    _____________________________________________________________________________________________________________________________________" << endl;
        cout << "    |                          MONDAY              TUESDAY              WEDNESDAY              THURSDAY              FRIDAY              |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    8-9                  Physics             Chemistry             English                Physics              Chemistry            |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    9-10               Maths/Biology         Physics            Phy_edu/Home_sci          English              Physics              |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    10-11               Chemistry            Phy-Lab             Maths/Biology            Chemistry           Maths/Biology         |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    11-11:30             Lunch                Lunch                 Lunch                   Lunch               Lunch               |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    11:30-12:30         Chem-Lab           Maths/Biology           Chemistry            Phy_edu/Home_sci        English             |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    12:30-1:30           English            English                 Bio_Lab                Chem-Lab            Chem-Lab             |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    1:30-2:30                                                                                                                       |" << endl;
        cout << "    |                      Phy_edu/Home_sci    Phy_edu/Home_sci          Physics              Maths/Biology          English             |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    ______________________________________________________________________________________________________________________________________" << endl;
        system("pause");
    }
};
class arts : public timetable
{
public:
    arts()
    {
    }
    arts(int a, int b, int c) : timetable(a, b, c)
    {
        branch_name = "arts";
    }
    void showtimetable()
    {
        system("cls");
        cout << "                   ************************************************** " << branch_name << " TIMETABLE**************************************************" << endl;
        cout << "Number  of  working  days  are : " << numberofworkingdays << endl;
        cout << "Number  of  lab  days  are     : " << numberoflabdays << endl;
        cout << "Number  of  periods  are       : " << numberofperiods << endl;

        cout << "    _____________________________________________________________________________________________________________________________________" << endl;
        cout << "    |                          MONDAY              TUESDAY              WEDNESDAY              THURSDAY              FRIDAY              |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    8-9                  Pol_sci              Geography             English                History               English            |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    9-10                 Geography            English               Pol_sci                sociology             Music/Psychology   |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    10-11                History              Pol_sci               sociology              Music/Psychology      History            |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    11-11:30             Lunch                Lunch                 Lunch                  Lunch                 Lunch              |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    11:30-12:30          English              sociology             History                Geography             Pol_sci            |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    12:30-1:30           Music/psychology     History               Geography              Pol_sci               Geography          |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |    1:30-2:30            sociology            Music/psychology      Music/psychology       English               sociology          |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    |                                                                                                                                    |" << endl;
        cout << "    ______________________________________________________________________________________________________________________________________" << endl;
        system("pause");
    }
};
class self_made_TT
{
    float tv_phonehrs;
    float outdoors;
    float sleephrs;

public:
    float studyhrs;
    int count;

    void setselftt()
    {
        system("cls");
        count = 0;

        for (int i = 1; i <= 5; i++)
        {
            int a;
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\n\n";
            cout << "\t\t\t\t\t";
            cout << "Enter the study hours for day " << i << ": ";
            cin >> studyhrs;
            count = count + studyhrs;

            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            if (studyhrs >= 10)
            {

                cout << "DAY " << i << ": You are doing good! for Day " << i << " keep it up!"
                     << ": ";
            }
            else
            {

                cout << "DAY " << i << ": Pal you need to work more to get a college"
                     << ": ";
            }
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";

            cout << "Enter the tv/phone hours for day " << i << ": ";

            cin >> tv_phonehrs;
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            if (tv_phonehrs <= 1)
            {
                cout << "DAY " << i << ": It's your day " << i << "! Nice to see you are using your phone less!"
                     << ": ";
            }

            else
            {
                cout << "DAY " << i << ": It's only day" << i << "!! have some dedication and work more"
                     << ": ";
            }
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            cout << "Enter the enter the hours you spend outdoors for day " << i << ": ";
            cin >> outdoors;
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            if (outdoors <= 1.5)
            {
                cout << "DAY " << i << ": Glad you are giving time to your physical health too!"
                     << ": ";
            }
            else
            {
                cout << "DAY " << i << ": Good to know you are playing outside but don't give this so much time"
                     << "! ";
            }
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            cout << "Enter your sleep hours for day " << i << ": ";
            cin >> sleephrs;
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            if (sleephrs >= 8)
            {
                cout << "DAY " << i << ": You are getting enough sleep dear!"
                     << ": ";
            }

            else
            {
                cout << "DAY " << i << ": get up and study!!"
                     << ": ";
            }
        }

        system("pause");
    }

    self_made_TT operator<=(self_made_TT j)
    {
        self_made_TT e;
        e.count = max(count, j.count);
        return e;
    }
};

class logininsystem : virtual private school
{
    char Username[20];
    char Password[15];

public:
    void Login()
    {

        char key;
        int true1 = 1;
        int try1 = 0;
        int i = 0;

        do
        {
            system("cls");
            // Time();
            cout << "\n\n\n\n\n\n";
            int a;
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    ----------------------------------------\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    |          ROBOTIC  TIMETABLE           |\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    ----------------------------------------\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\n\n";
            cout << "\t\t\t\t\t";
            cout << "Username : ";
            cin.getline(Username, 6);
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            cout << "Password : ";
            for (i = 0;;)
            {
                key = getch();
                if ((key >= 'a' && key <= 'z') || (key >= 'A' && key <= 'Z') || (key >= '0' && key <= '9'))
                {
                    Password[i] = key;
                    ++i;
                    cout << "*";
                }

                if (key == '\b' && i >= 1)

                {
                    cout << "\b \b";
                    --i;
                }

                if (key == '\r')
                {
                    Password[i] = '\0';

                    break;
                }
            }

            if (strcmp(Username, principal_name) == 0 && strcmp(Password, medium) == 0)
            {
                cout << "\n\n";
                cout << "\t\t\t\t";
                cout << "You are accessed to the system!\n\n";
                cout << "\t\t\t\t";
                system("pause");
                system("cls");
                true1 = 0;
                try1 = 4;
            }
            else
            {
                system("cls");
                try1 = try1 + 1;
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout << "\t\t\t\t\t";
                cout << "No. of attempts remain: " << 3 - try1;
                cout << "\n\n";
                cout << "\t\t\t\t";
                system("pause");

                if (try1 >= 3)
                {
                    cout << "\t\t\t\t\t\t";
                    cout << "\n";
                    cout << "\t\t\t\t";
                    cout << "No permission to enter the system!\n\n";
                    cout << "\t\t\t\t";
                    system("pause");
                    exit;
                }
            }
        } while (try1 < 3);
    }
};

class afterlogininsystem : public student, protected commerce, protected arts, protected science, public self_made_TT
{
public:
    int q = 0;
    afterlogininsystem()
    {
    }
    void Exit()
    {
        system("cls");
        cout << "\n\n\n\n\n\n\t\t\t\t\t\t";
        cout << "Thank you!!";
        cout << "\n\n\n\n\n\n\t\t\t\t\t\t";
    }
    void Afterlogin(commerce &com, science &sci, arts &ar, branch &b)
    {
    beginning:

        int a, c;

        int v;
        do
        {
            v = 0;
            system("cls");
            cout << "\n\n\n";
            cout << "\t\t\t\t---------------------------------------------------------------------------\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t|                                                                         |\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t|                     1)  School Details of student                       |\n";
            cout << "\t\t\t\t|                                                                         |\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t|                     2)  Student Details                                 |\n";
            cout << "\t\t\t\t|                                                                         |\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t|                     3)  Student's school Timetable                      |\n";
            cout << "\t\t\t\t|                                                                         |\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t|                     4)  Student's self made Timetable                   |\n";
            cout << "\t\t\t\t|                                                                         |\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t|                     5)  Branch Details of senior high school            |\n";
            cout << "\t\t\t\t|                                                                         |\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t|                     6)  Logout                                          |\n";
            cout << "\t\t\t\t|                                                                         |\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t|                     7)  Exit                                            |\n";
            cout << "\t\t\t\t|                                                                         |\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t|                                                                         |\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t---------------------------------------------------------------------------\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\n";
            cout << "\t\t\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t\t\t";
            cout << "Enter your choice : ";
            cin >> c;
            switch (c)
            {
            case 1:
            {
                school ::display_schl();
                goto beginning;
                break;
            }

            case 2:
            {
                student::SetData();
                goto beginning;
                break;
            }
            case 3:
            {
                if (branch_name == "commerce")

                {
                    com.showtimetable();
                    goto beginning;
                    break;
                }
                else if (branch_name == "arts")

                {
                    ar.showtimetable();
                    goto beginning;
                    break;
                }
                else if (branch_name == "science")

                {
                    sci.showtimetable();
                    goto beginning;
                    break;
                }
            }
            case 4:
            {
                self_made_TT g[3];

                for (int i = 0; i < 3; i++)
                {
                    g[i].setselftt();
                }
                self_made_TT h;
                h = g[0] <= g[1] <= g[2];
                {
                    cout << "\n=====================================================================================================================\n";

                    cout << "             MAX HOURS OF STUDY FOR A STUDENT OF THIS SCHOOL ARE " << h.count << endl;
                }
                system("pause");
                goto beginning;
                break;
            }
            case 5:
            {
                b.showbranchdistribution();
                goto beginning;
                break;
            }
            case 6:
            {
                afterlogininsystem::Logout();
                break;
            }
            case 7:
            {
                Exit();
                break;
            }
            default:
                cout << "\n\t\t\t\tInvalid choice\n";
                cout << "\t\t\t\tPress 1 to return : ";
                cin >> v;
            }
        } while (v == 1);
    }
    void Logout()
    {
        system("cls");
        cout << "\n\n\n\n\n\n\t\t\t\t\t";
        cout << "logging out ";

        for (int x = 0; x < 15; x++)
        {
            for (int a = 0; a <= 100000000; a++)
            {
            }
            cout << ".";
        }
    }
};

void FrontPage()
{
    int process = 0;
    system("cls");
    cout << "\n";
    int a;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    ----------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    |             ROBOTIC TIMETABLE         |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    ----------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\n\n";
    cout << "\t\t\t\t";
    for (a = 0; a <= 100000000; a++)
    {
    }

    cout << "Mini Project   ";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << ":";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "   Robotic Timetable  ";
    cout << "\n\n";
    cout << "\t\t\t\t";
    cout << "\n\n";
    cout << "\n\n";
    cout << "\t\t\t\t";
    system("pause");
    cout << "\n\t\t\t\tLoading";

    for (process = 0; process < 15; process++)
    {
        for (int a = 0; a <= 100000000; a++)
        {
        }
        cout << ".";
    }
}

int main()
{
    branch b(500, 20);
    commerce com(5, 2, 8);
    arts ar(5, 1, 8);
    science sci(5, 3, 8);

    FrontPage();
    logininsystem m;
    m.Login();
    afterlogininsystem s;

    s.Afterlogin(com, sci, ar, b);

    return 0;
}