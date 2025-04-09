#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    // Default Constructor
    Student() {
        roll = 0;
        name = "Unknown";
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;  // Default constructor called
    s1.display();
    return 0;
}
