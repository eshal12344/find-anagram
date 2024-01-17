#include<iostream>
#include<string>
using namespace std;
int main() {
	string h;
	string s;
	int n1 = 0;
	int n2 = 0;
	getline(cin, h);
	getline(cin, s);
	for (int i = 0;i < h.length();i++){
		n1 = n1 + int(h[i]);
	}
	for (int a = 0;a < s.length();a++) {
		n2 = n2 + int(s[a]);
	}
	if (n1 == n2) {
		cout << "this is an anagram" << endl;
	}
	else {
		cout << "this is not an anagram" << endl;
	}
	return 0;
}