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
}
