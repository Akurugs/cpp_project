#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

using namespace std;

int main(){
    fstream airport;
    string line;
    airport.open("airports.csv");
    while (airport.is_open() != EOF){
        getline(airport, line);
        cout << line << endl;
    }
    return 0;
}