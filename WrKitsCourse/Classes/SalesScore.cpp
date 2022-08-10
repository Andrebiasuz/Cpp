#include <iostream>
#include <string>
using namespace std;
#include "SalesScore.hpp"

SalesScore::SalesScore(string title) // constructor
{
    setStoreTitle(title);
}

// properties
void SalesScore::setStoreTitle(string title)
{
    if (title.length()<= 20)
        storeTitle = title;
    else {
        cout << title << " has been shortened due to character constraints." << endl;
        cout << endl;
        storeTitle = title.substr(0,20); 
        
    }
}

string SalesScore::getStoreTitle() 
{
    return storeTitle;
}

// old boot system, without constructor
void SalesScore::bootSystem(string storeTitle)
{
    cout << "Sales Score !" << endl;
    cout << storeTitle << endl;
}

// store as private the variable took from the set property. 
string storeTitle;
	
