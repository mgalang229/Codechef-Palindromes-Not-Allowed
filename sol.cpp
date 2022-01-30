#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// just print the alphabet (may repeat if necessary)
		for (int i = 0; i < n; i++) {
			cout << (char) ('a' + i % 26);
		}
		cout << '\n';
	}
	return 0;
}
