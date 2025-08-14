#include<iostream>
using namespace std;
void scalevalue(int&a, int&b, int&factor){
  a *= factor;
  b *= factor;
}
    int main(){
        int num1 = 2, num2 = 5;
        int factor = 3;
        cout <<"before scale :"<< num1 << ","<<num2 << endl;
        scalevalue(num1, num2, factor);
        cout <<"afte scale :"<< num1 << "," <<num2 << endl;

        
    }

