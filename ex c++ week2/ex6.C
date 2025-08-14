#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;

public:
    Box() {
        length = width = height = 1;
    }

   
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

   
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

   
    int volume(int l, int w, int h) {
        return l * w * h;
    }

    
    double volume(double l, double w, double h) {
        return l * w * h;
    }

    
    int volume(int side) {
        return side * side * side;
    }
};

int main() {
   
    Box box1;                       
    Box box2(2, 3, 4);              
    Box box3(2.5, 3.5, 4.5);         

    // Print volumes using overloaded functions
    cout << "Box1 volume (default 1x1x1): " << box1.volume(1, 1, 1) << endl;
    cout << "Box2 volume (2x3x4): " << box2.volume(2, 3, 4) << endl;
    cout << "Box3 volume (2.5x3.5x4.5): " << box3.volume(2.5, 3.5, 4.5) << endl;
    cout << "Cube volume (side=5): " << box1.volume(5) << endl;

    return 0;
}
