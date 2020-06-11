#include <bits/stdc++.h>

using namespace std;

void decode() {
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int tm = k * l;
	tm /= nl;
	int limes = c * d;
	p /= np;
	int n1 = min(tm, limes);
	cout << (min(n1, p)) / n << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
