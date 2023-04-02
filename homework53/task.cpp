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
    Employee(string name, string gender, int age, int id, double wage)
    {
        name = "Unknown";
        gender = "Unknown";
        age = 0;
        id = 0;
        wage = 0.0;
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
        cout << "Тут сработал деструктор" << endl;
    }
};

int main()
{
    Employee P4("Ann", "Female", 18, 4, 27.50);
    P4.setEmployee();
    P4.getEmployee();

    Employee P5("John", "Male", 21, 5, 30.00);
    P5.setEmployee();
    P5.getEmployee();
}