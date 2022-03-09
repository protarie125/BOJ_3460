#include <iostream>

using namespace std;

void solve(int n) {
	auto p = 0;
	while (0 < n) {
		if (1 == n % 2) {
			cout << p << ' ';
		}

		n /= 2;
		p += 1;
	}

	cout << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n;
		cin >> n;

		solve(n);
	}

	return 0;
}