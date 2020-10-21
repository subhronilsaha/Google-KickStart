#include <bits/stdc++.h>
using namespace std;
  
int main() {
	int t;
	string s;

	cin >> t;
	
	for(int x = 1; x <= t; x++) {
		cin >> s;
		int k = 0, y = 0;
		
		for(int i=0; i<s.length(); i++) {
			if(s[i] == 'K' && s[i+1] == 'I' && s[i+2] == 'C' && s[i+3] == 'K') {
				k++;
			}
			else if(s[i] == 'S' && s[i+1] == 'T' && s[i+2] == 'A' && s[i+3] == 'R' && s[i+4] == 'T') {
				y += k;
			}
		}

		cout << "Case #" << x << ": " << y << endl;
  }

  return 0;
}