#include "src/piranha.hpp"

using namespace piranha;

int main()
{
	environment env;
	polynomial<double,int> p{"x"}, q{1}, mq{-1}, l{"y"};
	std::cout << p << '\n';
	std::cout << q << '\n';
	std::cout << mq << '\n';
	std::cout << (p + q) * (p + q) * (p + q) * (p + q) * (p + q) * (p + q) << '\n';
	polynomial<polynomial<integer,int>,int> pp{"y"};
	std::cout << (p + pp + 1) << '\n';
	std::cout << ((-p + 1) * pp - pp) << '\n';
	std::cout << (p * pp) << '\n';
	std::cout << (-polynomial<double,int>{"x"} + 1) << '\n';
}
