
#include <vector>
#include <sstream>
#include <fstream>
#include <cmath>
#include <iostream>
#include <string>
#include "Airline.h"
#include "Route.h"
#include "Airport.h"
using namespace std;
class FindPath{
    string directory = "C:\\Users\\HP\\OneDrive\\Mr.avoks\\ICP_GroupProject_EuniceAndJoseph\\";

    string request()
    {
        string sourceCity, destinationCity;
        cout<<"Enter Source City"<<">>";
        cin>>sourceCity;
        cout<<"\nEnter Destination City"<<">>";
        cin>>destinationCity;
        return directory + "Accra_Winnipeg.txt";


    }

};