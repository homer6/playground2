#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;


int main( int, char** ){

	vector<string> commands = {
		"one"
	};


	for( auto& command : commands ){

		cout << command << endl;

	}

}