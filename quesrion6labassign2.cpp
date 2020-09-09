#include <iostream>
using namespace std;

class Employee
{
    int id;
    int age;
    char name[20];
    float bs;
    float gross;

public:
    void getdata()
    {
        cout << "Enter Details:" << endl;
        cout << "Enter the id number:" << endl;
        cin >> id;
        cout << "Enter the name: " << endl;
        cin >> name;
        cout << "Enter the age: " << endl;
        cin >> age;
        cout << "Enter the base salary:" << endl;
        cin >> bs;
        gross = 1.9 * bs;
    }

    void display()
    {
        cout << "Enter the details of all employee" << endl;
        cout << "id no:" << id << endl;
        cout << "Name:" << name << endl;
        cout << "Age:" << age;
        cout << "Base salary:" << bs;
        cout << "Gross salary:" << gross;
    }
};

int main()
{
    int i, n;
    cout << "Enter the no. of employee:" << endl;
    cin >> n;
    Employee e[10];
    for (int i = 0; i < n; i++)
    {
        e[i].getdata();
    }
    for (int i = 0; i < n; i++)
    {
        e[i].display();
    }
}