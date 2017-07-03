#include <iostream>
using namespace std;

int main()
{
    float grade;
    cout << "Enter your percentage:\n";
    cin >> grade;
    if (grade <= 100 && grade >= 90)
    {
        cout << "Letter grade: A\n";
    }
    else if (grade <90 && grade >=80)
    {
        cout << "Letter grade: B\n";
    }
    else if (grade <80 && grade >=70)
    {
        cout << "Letter grade: C\n";
    }
    else if (grade <70 && grade >=60)
    {
        cout << "Letter grade: D\n";
    }
    else if (grade <60 && grade >=0)
    {
        cout << "Letter grade: F\n";
    }
    else {cout << "Letter grade: Invalid percentage\n";}
    return 0;
}
