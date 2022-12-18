#include <iostream>
using namespace std;

int main() {
	int K, W, S, E, moneyK, moneyW, moneyS_E, total;
	cin >> K >> W >> S >> E;

	if (K < 2) {
		moneyK = 20;
	} else{
		moneyK = ((K - 2) * 5) + 20;
	}
	
	moneyW = (int(W / 2)) * 5;
	
	if (S <= 18) {
		if (E <= 18) {
			moneyS_E = 0;
		} else if (E == 19) {
			moneyS_E = 185;
		} else if (E == 20) {
			moneyS_E = 185 + 195;
		} else if (E == 21) {
			moneyS_E = 185 + 195 + 205;
		} else if (E == 22) {
			moneyS_E = 185 + 195 + 205 + 215;
		} else if (E == 23) {
			moneyS_E = 185 + 195 + 205 + 215 + 225;
		}
	}
	if (S == 19) {
		if (E == 20) {
			moneyS_E = 195;
		} else if (E == 21) {
			moneyS_E = 195 + 205;
		} else if (E == 22) {
			moneyS_E = 195 + 205 + 215;
		} else if (E == 23) {
			moneyS_E = 195 + 205 + 215 + 225;
		}
	}
	if (S == 20) {
		if (E == 21) {
			moneyS_E = 205;
		} else if (E == 22) {
			moneyS_E = 205 + 215;
		} else if (E == 23) {
			moneyS_E = 205 + 215 + 225;
		}
	}
	if (S == 21) {
		if (E == 22) {
			moneyS_E = 215;
		} else if (E == 23) {
			moneyS_E = 215 + 225;
		}
	}
	if (S == 22) {
		if (E == 23) {
			moneyS_E = 225;
		}
	}

	total = moneyK + moneyW + moneyS_E;
	cout << total << endl;
}
