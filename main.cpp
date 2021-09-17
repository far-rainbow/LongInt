#include <iostream>
#include "LongInt.hpp"


int main() {
    std::string number_thirst_string;
    std::string number_second_string;
    std::string action;
    LongInt number_thirst;
    LongInt number_second;
    long double time_start;
    long double time_end;
    LongInt result_longint;
    bool result_bool;
    char result_char;
    std::cout << "1| Сложение двух целых чисел." << std::endl;
    std::cout << "2| Вычитание из целого числа целое число." << std::endl;
    std::cout << "3| Умножение двух целых чисел." << std::endl;
    std::cout << "4| Деление нацело двух целых чисел." << std::endl;
    std::cout << "5| Получения остатка от деления двух целых чисел." << std::endl;
    std::cout << "6| Возведение целого числа в целую неотрицательную степень." << std::endl;
    std::cout << "7| Подсчет факториала от натурального числа." << std::endl;
    std::cout << "8| Подсчет НОД двух целых чисел." << std::endl;
    std::cout << "9| Подсчет НОК двух целых чисел." << std::endl;
    std::cout << "10| Получение модуля целого числа." << std::endl;
    std::cout << "11| Получение знака целого числа." << std::endl;
    std::cout << "12| Быстрая проверка целого числа на четность." << std::endl;
    std::cout << "13| Быстрая проверка целого числа на нечетность." << std::endl;
    std::cout << "14| Получение максимального из двух целых чисел." << std::endl;
    std::cout << "15| Получение минимального из двух целых чисел." << std::endl;
    std::cout << "16| Извлечение целого квадратного корня из целого неотрицательного числа." << std::endl;
    std::cout << "17| Извлечение целого кубического корня из целого числа." << std::endl;
    std::cout << "18| Выход." << std::endl;
    for (; ;) {
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Выберите операцию: ";
        getline(std::cin, action);
        if (action == "1") {
            std::cout << "Введите первое число: ";
            getline(std::cin, number_thirst_string);
            std::cout << "Введите второе число: ";
            getline(std::cin, number_second_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            number_second = number_second_string;
            result_longint = number_thirst + number_second;
            std::cout << "Результат: " << result_longint << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "2") {
            std::cout << "Введите первое число: ";
            getline(std::cin, number_thirst_string);
            std::cout << "Введите второе число: ";
            getline(std::cin, number_second_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            number_second = number_second_string;
            result_longint = number_thirst - number_second;
            std::cout << "Результат: " << result_longint << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "3") {
            std::cout << "Введите первое число: ";
            getline(std::cin, number_thirst_string);
            std::cout << "Введите второе число: ";
            getline(std::cin, number_second_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            number_second = number_second_string;
            result_longint = number_thirst * number_second;
            std::cout << "Результат: " << result_longint << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "4") {
            std::cout << "Введите первое число: ";
            getline(std::cin, number_thirst_string);
            std::cout << "Введите второе число: ";
            getline(std::cin, number_second_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            number_second = number_second_string;
            result_longint = number_thirst / number_second;
            std::cout << "Результат: " << result_longint << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "5") {
            std::cout << "Введите первое число: ";
            getline(std::cin, number_thirst_string);
            std::cout << "Введите второе число: ";
            getline(std::cin, number_second_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            number_second = number_second_string;
            result_longint = number_thirst % number_second;
            std::cout << "Результат: " << result_longint << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "6") {
            std::cout << "Введите первое число: ";
            getline(std::cin, number_thirst_string);
            std::cout << "Введите второе число: ";
            getline(std::cin, number_second_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            number_second = number_second_string;
            result_longint = LongInt::pow(number_thirst, number_second);
            std::cout << "Результат: " << result_longint << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "7") {
            std::cout << "Введите число: ";
            getline(std::cin, number_thirst_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            result_longint = LongInt::factorial(number_thirst);
            std::cout << "Результат: " << result_longint << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "8") {
            std::cout << "Введите первое число: ";
            getline(std::cin, number_thirst_string);
            std::cout << "Введите второе число: ";
            getline(std::cin, number_second_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            number_second = number_second_string;
            result_longint = LongInt::gcd(number_thirst, number_second);
            std::cout << "Результат: " << result_longint << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "9") {
            std::cout << "Введите первое число: ";
            getline(std::cin, number_thirst_string);
            std::cout << "Введите второе число: ";
            getline(std::cin, number_second_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            number_second = number_second_string;
            result_longint = LongInt::lcm(number_thirst, number_second);
            std::cout << "Результат: " << result_longint << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "10") {
            std::cout << "Введите число: ";
            getline(std::cin, number_thirst_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            result_longint = LongInt::abs(number_thirst);
            std::cout << "Результат: " << result_longint << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "11") {
            std::cout << "Введите число: ";
            getline(std::cin, number_thirst_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            result_char = LongInt::sign(number_thirst);
            std::cout << "Результат: " << result_char << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "12") {
            std::cout << "Введите число: ";
            getline(std::cin, number_thirst_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            result_bool = LongInt::even(number_thirst);
            std::cout << "Результат: " << result_bool << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "13") {
            std::cout << "Введите число: ";
            getline(std::cin, number_thirst_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            result_bool = LongInt::odd(number_thirst);
            std::cout << "Результат: " << result_bool << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "14") {
            std::cout << "Введите первое число: ";
            getline(std::cin, number_thirst_string);
            std::cout << "Введите второе число: ";
            getline(std::cin, number_second_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            number_second = number_second_string;
            result_longint = LongInt::max(number_thirst, number_second);
            std::cout << "Результат: " << result_longint << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "15") {
            std::cout << "Введите первое число: ";
            getline(std::cin, number_thirst_string);
            std::cout << "Введите второе число: ";
            getline(std::cin, number_second_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            number_second = number_second_string;
            result_longint = LongInt::min(number_thirst, number_second);
            std::cout << "Результат: " << result_longint << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "16") {
            std::cout << "Введите число: ";
            getline(std::cin, number_thirst_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            result_longint = LongInt::sqrt(number_thirst);
            std::cout << "Результат: " << result_longint << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "17") {
            std::cout << "Введите число: ";
            getline(std::cin, number_thirst_string);
            time_start = clock();
            number_thirst = number_thirst_string;
            result_longint = LongInt::cbrt(number_thirst);
            std::cout << "Результат: " << result_longint << "." << std::endl;
            time_end = clock();
            std::cout << "Затрачено времени [с учетом затрат на конвертацию типов и вывод]: " << (time_end - time_start) / CLOCKS_PER_SEC << " секунд(а/ы)." << std::endl;
        }
        else if (action == "18") {
            break;
        }
        else {
            std::cout << "Неизвестный номер команды. Введите число от 1 до 18." << std::endl;
        }
    }
    return 0;
}