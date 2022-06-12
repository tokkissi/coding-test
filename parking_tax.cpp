#include <bits/stdc++.h>
using namespace std;

int k=4;
int a, b, c;
int e, f;

int t[104];
int sum = 0;

int main() {
	ios_base::sync_with_stdio(false); 		// 입출력 속도 향상
	cin.tie(NULL);
	cout.tie(NULL); 
	1 <= c <= b <= a <= 100;
	cin >> a >> b >> c;
	
	for(int i=0; i<3; i++){
		1 <= e < f <= 100;
		cin >> e >> f;
		for(int j=e; j<f; j++)
			t[j]++;
	}

	
	for(int i =1; i<=99; i++){	
//		if(t[i]==1) sum+=a;			// if 나 스위치 모두 가능 
//		else if(t[i]==2) sum+=b;
//		else if(t[i]==3) sum+=c;
		switch(t[i]){
		case 1 : sum+=a; break;
		case 2 : sum+=b*2; break;
		case 3 : sum+=c*3; break;
		}
	}
		cout << sum <<"\n";
		return 0;
	}
	
