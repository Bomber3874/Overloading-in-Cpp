/*Sanidhya Singh
24070123140
ENTC B2
*/
#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int age;
    int id;
    
public:
    Student() {
        name = "Unknown";
        age = 0;
        id = 0;
        cout << "Default constructor called" << endl;
    }
    
    Student(string studentName) {
        name = studentName;
        age = 0;
        id = 0;
        cout << "Name-only constructor called" << endl;
    }
    
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
        id = 0;
        cout << "Name and age constructor called" << endl;
    }
    
    Student(string studentName, int studentAge, int studentId) {
        name = studentName;
        age = studentAge;
        id = studentId;
        cout << "Full parameter constructor called" << endl;
    }
    
    void displayInfo() {
        cout << "Student Info: Name = " << name 
             << ", Age = " << age 
             << ", ID = " << id << endl;
    }
};

int main() {

    Student student1;                    
    Student student2("Alice");           
    Student student3("Bob", 20);         
    Student student4("Charlie", 22, 1001);
    
    cout << "\nStudent Information:" << endl;
    student1.displayInfo();
    student2.displayInfo();
    student3.displayInfo();
    student4.displayInfo();
    
    return 0;
}

/*Output
Default constructor called
Name-only constructor called
Name and age constructor called
Full parameter constructor called

Student Information:
Student Info: Name = Unknown, Age = 0, ID = 0
Student Info: Name = Alice, Age = 0, ID = 0
Student Info: Name = Bob, Age = 20, ID = 0
Student Info: Name = Charlie, Age = 22, ID = 1001
*/
