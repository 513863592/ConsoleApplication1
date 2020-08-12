#include <iostream>
#include <map>
#include <unordered_set>
#include <stack>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;

bool Check(vector<string>& combi) {
	set<int> alaph;
	unordered_map<char, int> all;
	for (int i = 0; i < 7; i++) {
		alaph.insert(combi[i].at(0));
		char ch = combi[i].at(1);
		if ((all.find(ch)) != all.end()) {
			all.find(ch)->second++;
		}
		else all.insert({ ch,0 });

	}
	if (alaph.size() != combi.size()) {
		return false;
	}
	else if(all.count('T')==0||all.count('W'==0)
		||all.count('B'==0))
	{		return false;	}	else {		return true;	}
}
int main() {
	string A = "YES";	string B = "NO";vector<string> out;
	int Sam; cin >> Sam; int allsam = Sam * 7;
	vector<string> Exam; while (allsam > 0) {
		string te;
		cin >> te; Exam.push_back(te); te.clear(); allsam--;
	}
	for (int i = 0; i < Sam; i++) {
		vector<string> tt;
		for (int j = 0; j < 7; j++) {
			tt.push_back(Exam[i * 7 + j]);
		}out.push_back(Check(tt) ? A : B);    tt.clear();

	}
	for (auto& item : out) {
		cout << item << endl;
	}
}
