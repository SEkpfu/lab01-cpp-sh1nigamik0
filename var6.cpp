// 1 задача

// #include <iostream>
// using namespace std;
// int main()
// {
//     setlocale(LC_ALL, "ru_RU.UTF-8");
//     double a;
//     cout << "Введите ребро:";
//     cin >> a;
//     double volume, sposh;
//     volume = a * a * a;
//     sposh = 6 * a * a;
//     cout << "Объем:" << volume << endl;
//     cout << "Площадь:" << sposh << endl;
//     return 0;
// }


// 2 задача

// #include <iostream>
// using namespace std;
// int main()
// {
//     setlocale(LC_ALL, "ru_RU.UTF-8");
//     int num;
//     cout << "Трех знач число:";
//     cin >> num;
//     int dg1 = num / 100;
//     int dg2 = (num / 10) % 10;
//     int dg3 = num % 10;
//     int sum = dg1 + dg2 + dg3;
//     int rv = dg3 * 100 + dg2 * 10 + dg1;
//     cout << "Сумма:" << sum << endl;
//     cout << "Число:" << rv << endl;
//     return 0;
// }


// 3 задача

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() 
// {
//     setlocale(LC_ALL, "ru_RU.UTF-8");
//     int a, b, c;
//     cout << "Введите 3 числа:";
//     cin >> a >> b >> c;
//     (a % 2 != 0)?(cout << b + c << " " << b * c):(cout << min(a, c));
//     return 0;
// }


// 4 задача

// #include <iostream>
// using namespace std;
// int main()
// {
//     setlocale(LC_ALL, "ru_RU.UTF-8");
//     double x;
//     cout << "Введите X:";
//     cin >> x;
//     double y = x * (2 * x + 4);
//     y = x * (y-8);
//     y += 3;
//     cout << "Результат: " << y << endl;
//     return 0;
// }


// 5 задача

// #include <iostream>
// #include <cmath>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     setlocale(LC_ALL, "ru_RU.UTF-8");
//     double x, y;
//     cout << "Введите X:";
//     cin >> x;
//     cout << "Введите Y:";
//     cin >> y;
//     double expr1 = log(y - sqrt(x / 4)) * (x - y / (x * x) + 1.0 / 4);
//     double expr2 = sin(x) + cos(y);
//     double expr3 = cos(x) - sin(y);
//     double expr4 = tan(x * y);
//     cout << showpos << fixed << setprecision(5) << expr1 << endl;
//     cout << scientific << expr2 << endl;
//     cout << expr3 << endl;
//     cout << expr4 << endl;
//     return 0;
// }