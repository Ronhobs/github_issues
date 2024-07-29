/*Goal: Practice C++ using a Class*/
#include <iostream>
using namespace std;
class Student
{
    string name;
    int id;
    int gradDate;

public:
    void setName(string nameIn);
    void setid(int idIn);
    void setgradDate(int gradDateIn);
    string getName();
    int getid();
    int getgradDate();
    void print();
};
void Student::setName(string nameIn)
{
    name = nameIn;
}
void Student::setid(int idIn)
{
    id = idIn;
}
void Student::setgradDate(int gradDatein)
{
    gradDate = gradDatein;
}
void Student::print()
{
    cout << name << "" << id << "" << gradDate;
}
string Student::getName()
{
    return name;
}
int Student::getid()
{
    return id;
}
int Student::getgradDate()
{
    return gradDate;
}

int main()
{
    int integer1;
    float float1;
    Student student1;
    integer1 = 4;
    float1 = 4.333;
    student1.setName("Jamaica Ford"); // Assign value to student name
    student1.setid(54345);            // Assign a value to student id
    student1.setgradDate(2025);       // Assign value to grad Date

    // Print the value of our variables
    cout << "integer1=" << integer1 << "\n";
    cout << "float1=" << float1 << "\n\n";

    // There are two ways we can print our class:
    // The first is to call the print function we created.
    cout << "Using the Student::print function\n";
    cout << "Student1=";
    student1.print();
    cout << "\n";
    // The second is to access each member of the class using the get functions
    cout << "Using the student access functions\n";
    cout << "Student1 name=" << student1.getName() << "\n";
    cout << "Student 1 id=" << student1.getid() << "\n";
    cout << "Student1 grad Date" << student1.getgradDate() << "\n";

    return 0;
}
