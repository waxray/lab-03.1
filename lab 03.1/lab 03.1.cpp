		// 2 спосіб

#include <iostream>
#include <cmath>

		int main()
	{
		double x, y;
		std::cin >> x;
		y = (x*x*x)+2;
		if (x < 4)
			y += 5*pow(x, 8) + pow(x,6)-(x*x)+3;
		else if (4 <= x && x < 7)
			y += atan((fabs((x+3)/2)+7*x));
		else if (x >= 7)
			y += log10(2*x + exp(5 * x + 5));
		std::cout << y;
		return 0;
	}
