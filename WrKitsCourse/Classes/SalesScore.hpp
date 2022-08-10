#include <iostream>
#include <string>
using namespace std;

class SalesScore
{

    public:

    	SalesScore(string title); // constructor
    	void setStoreTitle(string title);
    	string getStoreTitle();
    	void bootSystem(string storeTitle);

	private:
    	string storeTitle;
	
};

