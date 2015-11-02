/*
program to determine the Nth number of the fibonacci sequence
author: markus
  date: 2015-11-02
*/

#include <iostream>

using namespace std;

int main(){

	int N;							// declares integer N
	int f0=0;						// declares integer f0, sets value 0
	int f1=1;						// declares integer f1, sets value 1
	int f=1;						// declares integer f, sets value 1

	cout << "Please enter an integer value for N" << endl;	// prints text to console
	cout << "N = ";
	cin >> N;						// value for N is read from console

	if (cin.fail())						// checks if input to N is declared type
		cout << "N must be an integer value" << endl;	// prints error

	else{
	if (N<0 || N>46)					// checks if N<0 or N>46
		cout << "N must be positive and N<46" << endl;	// prints error

	else{
	if (N==0)						// checks if N=0
		cout << "f(" << N << ") = 0" << endl;		// prints f(N)=0


	else{							// if N not 0, executes for-loop

		for(int i=1; i<N; i++){				// declares i, creates for-loop from i to N-1
			f+=f0;					// increases f by f0
			f0=f1;					// saves f1 in f0
			f1=f;					// saves f in f1
	//cout << "f(" << i+1 <<") = " << f << endl;		// prints every step (just to check what program is doing)
		}

	cout << "f(" << N << ") = " << f << endl;		// prints result to console
	}
	}
	}
	return 0;
}
