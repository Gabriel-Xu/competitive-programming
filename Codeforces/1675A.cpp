#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, c, x, y;
		cin >> a >> b >> c >> x >> y;
		x-=a;
		y-=b;
		if (x<0) x=0;
		if (y<0) y=0;
		if (x+y<=c) cout << "YES\n";
		else cout << "NO\n";
	}
}