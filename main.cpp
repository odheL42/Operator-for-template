#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <tuple>
#include <sstream>

using namespace std;
template <typename Ch, typename Tr, typename... Args>
auto operator<<(basic_ostream<Ch, Tr>& os, const tuple<Args...>& t)
{
	TuplePrinter<Ch, Tr, sizeof...(Args) - 1, Args...>::print(os, t);
}

int main() {
	return 0;
}
