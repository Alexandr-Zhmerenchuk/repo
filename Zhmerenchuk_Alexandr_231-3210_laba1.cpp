#include <iostream>
#include <bitset>
#include <limits>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "1.\n";
    cout << "Жмеренчук Александр Анатольевич 231-3210\n";

    cout << "2.\n";
    cout << "int type:" << "\n";
    cout << "from " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << "\n";
    cout << "size " << sizeof(int) << "\n\n";
    cout << "unsigned int type:" << "\n";
    cout << "from " << numeric_limits<unsigned int>::min() << " to " << numeric_limits<unsigned int>::max() << "\n";
    cout << "size " << sizeof(unsigned int) << "\n\n";
    cout << "char type:" << "\n";
    cout << "from " << (int) numeric_limits<char>::min() << " to " <<(int) numeric_limits<char>::max() << "\n";
    cout << "size " << sizeof(char) << "\n\n";
    cout << "unsigned char type:" << "\n";
    cout << "from " <<(int) numeric_limits<unsigned char>::min() << " to " <<(int) numeric_limits<unsigned char>::max() << "\n";
    cout << "size " << sizeof(unsigned char) << "\n\n";
    cout << "short type:" << "\n";
    cout << "from " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << "\n";
    cout << "size " << sizeof(short) << "\n\n";
    cout << "unsigned short type:" << "\n";
    cout << "from " << numeric_limits<unsigned short>::min() << " to " << numeric_limits<unsigned short>::max() << "\n";
    cout << "size " << sizeof(unsigned short) << "\n\n";
    cout << "long type:" << "\n";
    cout << "from " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << "\n";
    cout << "size " << sizeof(long) << "\n\n";
    cout << "unsigned long type:" << "\n";
    cout << "from " << numeric_limits<unsigned long>::min() << " to " << numeric_limits<unsigned long>::max() << "\n";
    cout << "size " << sizeof(unsigned long) << "\n\n";
    cout << "float type:" << "\n";
    cout << "from " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << "\n";
    cout << "size " << sizeof(float) << "\n\n";
    cout << "double type:" << "\n";
    cout << "from " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << "\n";
    cout << "size " << sizeof(double) << "\n\n";
    cout << "long double type:" << "\n";
    cout << "from " << numeric_limits<long double>::min() << " to " << numeric_limits<long double>::max() << "\n";
    cout << "size " << sizeof(long double) << "\n\n";
    cout << "bool type:" << "\n";
    cout << "from " << numeric_limits<bool>::min() << " to " << numeric_limits<bool>::max() << "\n";
    cout << "size " << sizeof(bool) << "\n\n";

    cout << "3.\n" << "Введите целое число: ";
    int num;
    cin >> num;
    cout << "Binary: " << bitset<32>(num) << "\n";
    cout << "Hex: " << hex << num << dec << "\n";
    cout << "Bool: " << bool(num) << "\n";
    cout << "Double: " << double(num) << "\n";
    cout << "Character: " << char(num) << "\n\n";

    cout << "4." << "\n";
    cout << "a*x=b\n" << "Введите переменные a(не равное нулю) и b: ";
    double a, b;
    cin >> a >> b;
    cout << a << " * x = " << b << "\n";
    cout << "x = " << b << " / " << a << "\n";
    double x;
    x = b / a;
    cout << "x = " << x << "\n\n";

    cout << "5.\n";
    cout << "Введите целые координаты начала и конца отрезка: ";
    int x1, y1;
    cin >> x1 >> y1;
    double res = (x1 + y1) / 2.0;
    cout << "Координаты середины отрезка: " << res  ;

    return 0;
}
 