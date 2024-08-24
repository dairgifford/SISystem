#include "User.h"
#include "Student.h"
#include "SISystem.h"
#include <iostream>

using namespace std;

int main() {
    cout << "hello 1";
	try {
	    cout << "hello 1";
		SISystem siSystem;
		cout << "hello 1";

		int authenticated = false;
		int tries = 0;
		while (true) {
			if (!authenticated)
			    cout << "hello 2";
				authenticated = siSystem.login();

			if (authenticated) {
				char o;
				cout << "Choose an option: ";
				cin >> o;
				if (o == 'q') break;

				siSystem.handleRequest(o);
			}
			else {
				if (++tries < 3) {
					cout << "Please check your email & password and try again!!!" << endl;
				} 
				else {
					cout << "You already tries 3 times. Bye ...";
					break;
				}
			}
		}
	}
	catch (int e) {
		if (e == 2000) {
			cout << "Error: Unable to open the exceptions file. Disk is probably not available. Exiting..." << endl;
			return 1;
		}
	}

	return 0;
}
