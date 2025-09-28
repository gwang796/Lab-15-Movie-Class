//
//  main.cpp
//  COMSC-210 | Lab 14: Movie Class | Guo An Wang
//  IDE used: Xcode
//  Created by Guo An Wang on 9/27/25.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

int WIDTH = 10;
int WIDTH1 = 19;

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
    //function print displays data of Movie object
    //arguments: none
    //return: none
    void print(){
        cout << "Movie: " << name << endl;
        cout << setw(WIDTH) << "Year: " << year << endl;
        cout << setw(WIDTH) << "Screen Writer: " << screenWriter << endl;
    }
    
};

int main(int argc, const char * argv[]) {
    vector <Movie> movie; //declaring vector of Movie objects
    //accessing external input file
    ifstream inputFile("Movies.txt");
    string k; //holds temporary screen writer
    int x; // holds temporary year
    string j; //holds temporary name
    int i = 0; //index
    //check if input file is open and good to be used
    if (inputFile.good()) {
        //keep reading until end of file starting with temporary screen writer
        while (getline(inputFile,k)) {
            inputFile >> x; //reading year
            inputFile.ignore(); // skip new line after int
            getline(inputFile,j); //reading name
            //creating temporary Movie object
            Movie tmp;
            tmp.setScreenWriter(k);
            tmp.setYear(x);
            tmp.setName(j);
            //adding temporary Movie object to movie vector
            movie.push_back(tmp);
            i++;
        }
        inputFile.close(); //closing input file
    } else{ //if input file cannot be opened
        cout << "Input File could not be opened" << endl;
        return 1;
    }
    
    //output vector
    for (auto val : movie) {
        cout << "Movie: " << val.getName() << endl;
        cout << setw(WIDTH) << "Year: "<< val.getYear() << endl;
        cout << setw(WIDTH1) << "Screen Writer: "<< val.getScreenWriter() << endl;
        cout << endl;
    }
}
