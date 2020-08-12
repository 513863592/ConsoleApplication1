#include <iostream>
#include <map>
using namespace std;	
int main() {
	int t = 0;
	cin >> t;
	int n;
	int a = 0, b = 0, c = 0;
	int half = 0;
	int la = 0, sm = 0;
	int result = 0;
	int total = 0;
	int output = 1;
	map <int, int> ABC;
	while(t > 0){
		cin >> n;
		half = n / 2;
		while(n > 0){
			cin >> a;
			cin >> b;
			cin >> c;
			b = b * 10 + c;
			ABC.insert(pair<int, int>(a, b));
			n--;
		}
		map<int, int>::iterator iter;
		for (int j = 1; j <= half; j++) {
			for (iter = ABC.begin(); iter != ABC.end(); iter++) {
			if (((iter->second))/10 == j) {
				if (((iter->second ) % 10) == 0) {
					sm = iter->first;
				}
			}
			if (((iter->second) - 1) / 10 == j) {
				if (((iter->second-1) % 10) == 0){
				la = iter->first;
				}
			}
			result = la - sm;
			if (result > total) {
				total = result;
				if (result = total) {
					if (j < output) {
						output = j;
					}
				}
						}
			}
		}
			t--;
	}
	cout << output << endl;
	return 0;
}
