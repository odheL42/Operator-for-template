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
/*У этого класса есть шаблон - аргументы Ch, Tr и какое-то количество аргументов аргс.
Мы не знаем, сколько из будет, и компилятор в моменте сам значения подставляет в моменте.
Берём свой кортеж, отщипываем от него "голову", он ее выводит в поток ос, и затем мы уменьшаем счётчик аргументов на 1*/
int main() {
	return 0;
}
