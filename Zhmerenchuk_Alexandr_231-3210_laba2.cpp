#include<iostream>
#include<cmath>
#include<iomanip>


void task1(unsigned int const &n)
{
    std::string output ;
    for(int i; i <= n; i++){
        output += std::to_string(i);
        std::cout << output << std::endl;
    }
}


double task2(unsigned int const &n, unsigned int k)
{
    double res = 1;
    if (k > n/2) k = n - k; 
    for(double i = 1; i <= k; i++){
        res *= (n - k + i) / i;
    }
    return ceil(res - 0.2);
}


void task3()
{
    int count;
    double sum = 0;
    double input;
    while (true){
        std::cout << "Введите координату точки(0 чтобы посчитать среднее арифметическое): ";
        std::cin >> input;
        if (std::cin.fail()) 
        {
            std::cout << "Неверное значение\n";
            std::cin.clear(); 
            std::cin.ignore(99999,'\n'); 
        }
        else if (input != 0){
            ++count;
            sum += input;
        } 
        else {
            break;
        }
    }
    
    std::cout << "Среднее арифметическое: " << sum / count << std::endl;
}


int main()
{
    int choice = 0;
    while (true)
    {
        std::cout << "Что вы хотите выполнить? \n"
        << "1. Числовой треугольник\n"
        << "2. Нахождение биноминальных коэффициентов\n"
        << "3. Вычисление среднего арифметического введённых точек\n"
        << "4. Выход\n";
        std::cin >> choice;
        switch (choice)
        {
            case 1:
                unsigned int num1;
                std:: cout << "Введите положительное целое число: ";
                std:: cin >> num1;
                task1(num1);
                break;
            case 2:
                unsigned int num2;
                std:: cout << "Введите положительное целое число от 0 до 99: ";
                std:: cin >> num2;
                for(unsigned int k = 0; k <= num2; k++){
                    std::cout << std::setprecision(30) << task2(num2, k) << std::endl;
                }
                break;
            case 3:
                task3();
                break;
            case 4:
                return 0;
                break;
            default:
                continue;
        }

    }

}