#include <iostream>
#include <vector>
#include <tuple>

using namespace std;
template <typename Ch, typename Tr, typename... Args>
auto operator<<(basic_ostream<Ch, Tr>& os, const tuple<Args...>& t)
{
	TuplePrinter<Ch, Tr, sizeof...(Args) - 1, Args...>::print(os, t);
}
/*� ����� ������ ���� ������ - ��������� Ch, Tr � �����-�� ���������� ���������� ����.
�� �� �����, ������� �� �����, � ���������� � ������� ��� �������� ����������� � �������.
���� ���� ������, ���������� �� ���� "������", �� �� ������� � ����� ��, � ����� �� ��������� ������� ���������� �� 1*/
int main() {
	return 0;
}
