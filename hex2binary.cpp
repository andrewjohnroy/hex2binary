#include <iostream>
#include <string>

std::string toBinary(unsigned char num) {
	std::string str;
	while (num > 0) {
		str.insert(0, std::to_string(num % 2));
		num = num / 2;
	}
	return str;
}
int main()
{
    std::cout << toBinary(0xAA);
}
