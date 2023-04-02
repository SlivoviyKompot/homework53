#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string name;
    string gender;
    int age;
    int id;
    double wage;

public:
    Employee(string Name, string Gender, int Age, int Id, double Wage)
    {
        name = Name;
        gender = Gender;
        age = Age;
        id = Id;
        wage = Wage;
        cout << "Constructor with data: " << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
        cout << "Wage: " << wage << endl << endl;
    }

    void setEmployee()
    {
        cout << "Input name: ";
        cin >> name;
        cout << "Input gender: ";
        cin >> gender;
        cout << "Input age: ";
        cin >> age;
        cout << "Input ID: ";
        cin >> id;
        cout << "Input wage: ";
        cin >> wage;
        cout << endl;
    }

    void getEmployee()
    {
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
        cout << "Wage: " << wage << endl << endl;
    }

    ~Employee()
    {
        name;
        gender;
        age;
        id;
        wage;
        cout << "Destructor" << endl;
    }
};

int main()
{
    Employee P1("Unknown", "Unknown", 0, 0, 0);
    P1.setEmployee();
    P1.getEmployee();

    Employee P2("Unknown", "Unknown", 0, 0, 0);
    P2.setEmployee();
    P2.getEmployee();

    Employee P3("Unknown", "Unknown", 0, 0, 0);
    P3.setEmployee();
    P3.getEmployee();
}