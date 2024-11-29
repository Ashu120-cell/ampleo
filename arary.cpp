#include<iostream>
using namespace std;

class Circle {
public:
    double radius; // Public access specifier

    double compute_area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle obj;
    obj.radius = 5.5; // Accessible because radius is public
    cout << "Radius is: " << obj.radius << endl; // Accessible
    cout << "Area is: " << obj.compute_area() << endl; // Accessible
    return 0;
}

contructior-> default
              paramaterized
              copy