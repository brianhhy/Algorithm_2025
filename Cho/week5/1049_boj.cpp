// 그리디 알고리즘 기타줄
// 6줄 패키지, 낱개 줄 가격이 각각 주어질 때 
// 끊어진 기타줄을 고치기 위해 필요한 돈의 최소

#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	int smin = 1000;
	int omin = 1000;
	for (int i = 0; i < M; i++) 
    {
		int s, o;
		cin >> s >> o;

		smin = min(smin, s);
		omin = min(omin, o);
	}

    int base, temp;
	base = smin * (N / 6);
	temp = min((N%6==0) ? base : base + smin, base + (N % 6)*omin);
    
	cout << min(omin * N, temp);

	return 0;
}