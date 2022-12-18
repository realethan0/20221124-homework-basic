#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	int X, Y, N, A, B, C, minA = 999999, minB = 999999, minC = 99999999999999999, count = 0;
	
	cin >> X >> Y;
	cin >> N;
	
	while(count < N) {
		
		cin >> A >> B;
		C = ((X-A) * (X-A)) + ((Y-B) * (Y-B));
		
		if (C < minC) {
			
			minC = C;
			minA = A;
			minB = B;
		}
		
		count++;
	}
	
	cout << minA << " " << minB << endl;
} 
