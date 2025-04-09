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

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(101, "Alice");  // Parameterized constructor called
    s1.display();
    return 0;
}
