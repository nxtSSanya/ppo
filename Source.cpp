//#pragma GCC optimize("O3")
#pragma comment(linker, "/STACK:36777216")
#define _CRT_SECURE_NO_WARNINGS
#define all(x) begin(x), end(x)
#include <iostream>
#include <functional>
#include <cstdio>
#include <climits>
#include <cmath>
#include <map>
#include <set>
#include <thread>
#include <chrono>
#include <algorithm>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
#include <vector>
//#include <bitset>
#define ll long long
#define ull unsigned long long
#define endl "\n"
#define rt(x) return(x)
using namespace std;
map <int, long long> inversions;
vector<int> Si;
const int INF = 1 << 30;
const ll LINF = 1ll << 62;
const int MAXN = 1050;
const double p1 = -10, p2 = 2, p3 = 6, p4 = 12, p5 = 3, p6 = 8, p7 = 15;

long double GetStats(int time, long double sumX) {
	long double res = 0;
	if (time > 0 && time <= 30) {
		if (sumX <= 100000 && sumX > 10000) {
			for (int i = 0; i < time; ++i) {
				res += sumX * ((p1 / 365) / 100);
			}
		}
		else {
			for (int i = 0; i < time; ++i) {
				res += sumX * ((p1 / 365) / 100);
			}
		}
	}
	if (time >= 31 && time <= 120) {
		if (sumX <= 100000 && sumX > 10000) {
			for (int i = 0; i < time; ++i) {
				res += sumX * ((p2 / 365) / 100);
			}
		}
		else {
			for (int i = 0; i < time; ++i) {
				res += sumX * ((p5 / 365) / 100);
			}
		}
	}
	if (time >= 121 && time <= 240) {
		if (sumX <= 100000 && sumX > 10000) {
			for (int i = 0; i < time; ++i) {
				res += sumX * ((p3 / 365) / 100);
			}
		}
		else {
			for (int i = 0; i < time; ++i) {
				res += sumX * ((p3 / 365) / 100);
			}
		}
	}
	if (time >= 241 && time <= 365) {
		if (sumX <= 100000 && sumX > 10000) {
			for (int i = 0; i < time; ++i) {
				res += sumX * ((p4 / 365) / 100);
			}
		}
		else {
			for (int i = 0; i < time; ++i) {
				res += sumX * ((p7 / 365) / 100);
			}
		}
	}
	//cout << "End sum is: " << sumX + res << endl;
	cout << this_thread::get_id << "\tFoo" << endl;
	rt(sumX + res);
}
int main()
{
	//#ifndef ONLINE_JUDGE  
	//  freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	//#endif



	vector<ll> st(57);
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int time = 0;
	long double sumX = 0;
	long double res = 0;
	cin >> time >> sumX;
	thread th(GetStats, time, sumX);
	cout << this_thread::get_id() << "\tMain" << endl;
	cout << "End sum is: " << GetStats(time, sumX) << endl;
	th.join();
	return 0;
}