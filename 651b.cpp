#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	vector<int> a(n);
	int i;
	for(i=0; i<n; scanf("%d", &a[i++]));
	sort(a.begin(), a.end());
	int ans = 0;
	for(i=1; i<a.size(); i++)
		if(a[i]>a[i-1]) ans++;
	unique(a.begin(), a.end());
	for(i=0; i<a.size(); i++)
		printf("%d ",a[i] );
	printf("\n");
//	printf("%d\n", ans);
	return 0;
}