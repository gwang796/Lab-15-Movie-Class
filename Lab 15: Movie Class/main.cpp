//
//  main.cpp
//  COMSC-210 | Lab 14: Movie Class | Guo An Wang
//  IDE used: Xcode
//  Created by Guo An Wang on 9/27/25.
//

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int WIDTH = 10;

class Movie
{
private:
    string name;
    int year;
    string screenWriter;
public:
    //getter functions
    string getName() {return name;}
    int getYear() {return year;}
    string getScreenWriter() {return screenWriter;}
    //setter functions
    string setName(string n) {name = n; return n;}
    int setYear(int y) {year = y; return y;}
    string setScreenWriter(string s) {screenWriter = s; return s;}
    
    void print(){
        cout << "Movie: " << name << endl;
        cout << setw(WIDTH) << "Year: " << year << endl;
        cout << setw(WIDTH) << "Screen Writer: " << screenWriter << endl;
    }
    
};

int main(int argc, const char * argv[]) {
    vector <Movie> movie;
    ifstream fin("Movies.txt");
}
