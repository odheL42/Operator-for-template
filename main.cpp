#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <tuple>
#include <sstream>

using namespace std;


template<typename Ch, typename Tr, typename... Args>
auto operator<<(std::basic_ostream<Ch, Tr>& os, tuple<Args...> const& t) {
	bool first = true;
	apply([&](auto&&... args) { ((os << (first ? "" : ", ") << args, first = false), ...); }, t);
	return os;
}


int main() {
	return 0;
}
