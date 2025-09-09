// 2я задача

/*#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double a, b;
    cout << "Введите А:";
    cin >> a;
    cout << "Введите B:";
    cin >> b;
    cout << "Сумма:" << a + b << endl;
    cout << "Разность:" << a - b << endl;
    cout << "Произведение:" << a * b << endl;
    return 0;
}
*/

// 3я задача

/*#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double tC, tF, tK;
    cout << "Введите температуру в градусах Цельсия: ";
    cin >> tC;
    tF = (9.0 / 5.0) * tC + 32;
    tK = tC + 273;
    cout << "Температура в градусах Цельсия: " << tC << "C" << endl;
    cout << "Температура в градусах Фаренгейта: " << tF << "F" << endl;
    cout << "Температура в Кельвинах: " << tK << "K" << endl;
    return 0;
}
*/

// 4я задача

/*#include <iostream>
#include <cmath>
using namespace std; 
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    const double PI = 3.141592653589793238463; 
    double radius;
    double volume;   
    cout << "Введите радиус шара: ";
    cin >> radius;  
    volume = (4.0 / 3.0) * PI * pow(radius, 3);  
    cout << "Объем шара с радиусом " << radius << " равен: " << volume << endl;
    return 0;
}
*/

// 6я задача

/*#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double radius, height;
    cout << "Введите радиус цилиндра: ";
    cin >> radius;
    cout << "Введите высоту цилиндра: ";
    cin >> height;
    double volume = M_PI * radius * radius * height;
    double total = 2 * M_PI * radius * height + 2 * M_PI * radius * radius;
    cout << "Объем цилиндра: " << volume << endl;
    cout << "Полная площадь поверхности: " << total << endl;
    return 0;
}
*/

// 7я задача

/*#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int num1, num2;
    cout << "Введите первое целое число: ";
    cin >> num1;
    cout << "Введите второе целое число: ";
    cin >> num2;
    int ld1 = num1 % 10;
    int ld2 = num2 % 10;
    int sum = ld1 + ld2;
    cout << "Сумма последних цифр: " << sum << endl;
    return 0;
}
*/

// 8 задача

/*#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int number;
    cout << "Введите четырехзначное число: ";
    cin >> number;
    if (number < 1000 || number > 9999) 
    {
        cout << "Ошибка: число должно быть четырехзначным!" << endl;
        return 1;
    }
    int ld = number % 10;
    int fd = number / 1000;
    cout << "Первая цифра: " << fd << endl;
    cout << "Последняя цифра: " << ld << endl;
    return 0;
}
*/

// 9 задача

/*#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int N;
    cout << "Введите количество секунд, прошедших с начала суток: ";
    cin >> N;
    if (N < 0) 
    {
        cout << "Ошибка: количество секунд не может быть отрицательным!" << endl;
        return 1;
    }
    int hours = N / 3600;
    int rs = N % 3600;
    int minutes = rs / 60;
    int seconds = rs % 60;
    cout << "С начала суток прошло: " << N << " секунд" << endl;
    cout << "Часов: " << hours << endl;
    cout << "Минут: " << minutes << endl;
    cout << "Секунд: " << seconds << endl;
    return 0;
}
*/

// 10 задача

/*#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double a, b, c;
    cout << "Введите длину ребра a: ";
    cin >> a;
    cout << "Введите длину ребра b: ";
    cin >> b;
    cout << "Введите длину ребра c: ";
    cin >> c;
    if (a <= 0 || b <= 0 || c <= 0) 
    {
        cout << "Ошибка: все ребра должны быть положительными числами!" << endl;
        return 1;
    }
    double V = a * b * c;
    double S = 2 * (a * b + b * c + a * c);
    cout << "Объем параллелепипеда (V = a·b·c): " << V << endl;
    cout << "Площадь поверхности (S = 2·(a·b + b·c + a·c)): " << S << endl;
    return 0;
}
*/
