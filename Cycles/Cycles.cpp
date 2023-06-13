//#include <iostream>
//using namespace std;
//int main()
//{	
//	int a, sum;
//	sum = 0;
//	cout << "Enter the number:\n";			
//		cin >> a;
//	while (a <= 500)
//	{
//		sum = sum + a;
//		a = a + 1;
//	}
//	cout << "Sum = " << sum;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{	
//	int x, y, i;
//	float power;
//	power = 1;
//	cout << "Enter the number X:\n";
//	cin >> x;
//	cout << "Enter the number Y:\n";
//	cin >> y;
//	if (y == 0)
//	{
//		power = 1;
//	}
//	else
//	{
//		i = 1;		
//			while (i <= abs(y))
//			{
//				power = power * x;
//				i = i + 1;
//			}
//		if (y < 0)
//		{
//			power = 1 / power;
//		}
//	}
//	cout << "Result = " << power;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	float result;
//	result = 0;
//	for (int i = 1; i <= 1000; i++)
//	{
//		result = result + i;
//	}
//	result = result / 1000;
//	cout << "Result = " << result;
//	return 0;
//}


//#include <iostream>
//
//int main() {
//    int a;
//    std::cout << "Enter the value of a (1 <= a <= 20): ";
//    std::cin >> a;
//
//    if (a < 1 || a > 20) {
//        std::cout << "Invalid value of a!";
//        return 0;
//    }
//
//    long long product = 1;
//
//    for (int i = a; i <= 20; ++i) {
//        product *= i;
//    }
//
//    std::cout << "Product of numbers from " << a << " to 20: " << product << std::endl;
//
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    int k;
//    std::cout << "Enter the variant number: ";
//    std::cin >> k;
//
//    std::cout << "Multiplication table for variant " << k << ":\n";
//    for (int i = 2; i <= 10; ++i) {
//        int result = k * i;
//        std::cout << k << " x " << i << " = " << result << std::endl;
//    }
//
//    return 0;
//}