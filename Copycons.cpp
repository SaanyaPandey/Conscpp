#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    // Parameterized Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    // Copy Constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(102, "Bob");    // Parameterized constructor
    Student s2 = s1;           // Copy constructor

    s1.display();
    s2.display();
    return 0;
}
