//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, m;
//vector<bool> visit;
//vector<int> v;
//vector<int> num;
//void dfs() {
//	if (v.size() == m) {
//		for (int i = 0; i < m; i++)
//			printf("%d ", v[i]);
//		printf("\n");
//		return;
//	}
//
//	for (int i = 0; i < num.size() ; i++) {
//
//		if (!visit[i])
//		{
//			visit[i] = true;
//			v.push_back(num[i]);
//			dfs();
//			visit[i] = false;
//			v.pop_back();
//		}
//	}
//}
//
//int main(void) {
//	cin >> n >> m;
//	num = { 9,8,7 };
//	visit = vector<bool>(num.size()+1, false);
//
//	sort(num.begin(), num.end());
//	dfs();
//}
