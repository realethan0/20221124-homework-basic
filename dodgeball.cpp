#include <iostream>
using namespace std;
int main() {
	int X, R, V, P, S, N, count = 0;
	cin >> X >> R >> V >> N;
	
	while (N > count) {
		cin >> P >> S;
		if (P == X) {
			X = X - 15;
		} else {
			if (((X-R) <= P) && ((X+R) >= P)) {
				if (S <= V) {
					X = P;
				} else {
					if (P > X) {
						X = X - 15;
					} else if (P < X) {
						X = X + 15;
					}
				}
			}
		}
		count++;
	}
	
	cout << X <<endl;
}
