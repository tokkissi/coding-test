#include <bits/stdc++.h>
using namespace std;

string s;
int c_arr[26];

int main() {
	ios_base::sync_with_stdio(false);

// ���ڿ� s �Է¹޴´�
cin >> s;

// ���� ���ڿ��� charŸ������ �ٲ۴�

// �ٲܶ��� s�� a �� �Ҵ��Ѵ�. �� ��Ҿ� �Ҵ�ǹǷ�, �ƽ�Ű�ڵ�� ���ڷ� �ٲ㼭 �Ҵ簡��.
// 'a'�� �״�� �����ϸ� c_arr[i] �̹Ƿ� c_arr[97] �ε�
// �迭�� ũ�Ⱑ �ʹ� ũ�� a�� c_arr[0] ���� ����� ���ؼ� i - 97�� ���ش�
// ���ڿ� �ش��ϴ� �ε����� ã������ ++�� ���ؼ� �ϳ� ã�Ҵٰ� ī��Ʈ�� ���ش� 
 for (char a : s) 
	c_arr[a-'a']++;

for(int i = 0; i<26; i++)
cout << c_arr[i] << " ";

return 0;
}
