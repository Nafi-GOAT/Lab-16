//
//  main.cpp
//  Lab 16
//
//  COMSC - 210 | Lab 16 | Mehraj Hasan Nafi
//IDE Used: Xcode
//
//
#include <iostream>
#include <iomanip>
using namespace std;

class color{
private:
    int red;
    int green;
    int blue;
    
public:
    color (){
        red = 0;
        green = 0;
        blue = 0;
    }
    color(int r, int g, int b){
        red = r;
        green = g;
        blue = b;
    }
    
    color(int shade){
        red = shade;
        green = shade;
        blue = shade;
    }
    
    void setRed(int r) { red =r;}
    int getRed() { return red;}
    
    void setBlue(int b) {blue =b;}
    int getBlue () {return blue;}
    
    void setGreen (int g) { green =  g; }
    int getGreen() { return  green; }
    
    void print () {
        cout << setw(15) << "Red: " << red << endl;
        cout << setw(15) << "Blue: " << blue << endl;
        cout << setw(15) << "Green: " << green << endl;
        cout << endl;
    }
};

int main(){
    cout << fixed << setprecision(2);
    
    color c1;
    cout << "Default constructor (Black):\n";
    c1.print();
    
    color  c2 (255,0,0);
    cout << "Full constructor (Red):\n";
    c2.print();
    
    color c3(0,255,0);
    cout << "Full constructor (Green):\n";
    c3.print();
    
    color c4 (0,0,255);
    cout<< "Full constructor (Blue): \n";
    c4.print();
    
}
