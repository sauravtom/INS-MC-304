#include <iostream>
using namespace std;

string encrypt(string s){
	int k = 1;
	
	for(int i = 0; i < s.length(); i++){
		//s[i] = tolower(s[i]);
		if (isupper(s[i])){
			s[i] = (tolower(s[i])+ k) >= int('z') ? 'A' + (s[i]+k-int('z')-1)%26 : s[i]+k ;
		}
		else{
			s[i] = (s[i]+ k) > int('z') ? 'a' + (s[i]+k-int('z')-1)%26 : s[i]+k ;
		}
	}
	return s;
}

string decrypt(string s){
	for(int i = 0; i< s.length(); i++){
		s[i] = s[i]-1;
	}
	return s;
}


int main() {
	string str;
	cin >> str;
	//cout << int('z');
	cout << encrypt(str) << endl;
	//cout << decrypt(encrypt(str));
	return 0;
}
