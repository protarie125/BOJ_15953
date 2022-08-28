#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	const auto f1 = vi{ 0, 1, 3, 6, 10, 15, 21 };
	const auto p1 = vi{ 500'0000, 300'0000, 200'0000, 50'0000, 30'0000, 10'0000 };
	const auto f2 = vi{ 0, 1, 3, 7, 15, 31 };
	const auto p2 = vi{ 512'0000, 256'0000, 128'0000, 64'0000, 32'0000 };

	auto t = int{};
	cin >> t;
	while (0 < (t--)) {
		auto a = int{};
		auto b = int{};
		cin >> a >> b;

		auto ans = int{ 0 };
		for (auto i = 1; i <= 6; ++i) {
			if (0 < a) {
				if (f1[i - 1] < a && a <= f1[i]) {
					ans += p1[i - 1];
					break;
				}
			}
		}

		for (auto i = 1; i <= 5; ++i) {
			if (0 < b) {
				if (f2[i - 1] < b && b <= f2[i]) {
					ans += p2[i - 1];
					break;
				}
			}
		}

		cout << ans << '\n';
	}

	return 0;
}