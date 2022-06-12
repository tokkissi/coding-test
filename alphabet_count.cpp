#include <bits/stdc++.h>
using namespace std;

string s;
int c_arr[26];

int main() {
	ios_base::sync_with_stdio(false);

// 문자열 s 입력받는다
cin >> s;

// 받은 문자열을 char타입으로 바꾼다

// 바꿀때는 s를 a 에 할당한다. 한 요소씩 할당되므로, 아스키코드로 숫자로 바꿔서 할당가능.
// 'a'를 그대로 전달하면 c_arr[i] 이므로 c_arr[97] 인데
// 배열의 크기가 너무 크고 a를 c_arr[0] 으로 만들기 위해서 i - 97을 빼준다
// 문자에 해당하는 인덱스를 찾았으면 ++을 통해서 하나 찾았다고 카운트를 해준다 
 for (char a : s) 
	c_arr[a-'a']++;

for(int i = 0; i<26; i++)
cout << c_arr[i] << " ";

return 0;
}
