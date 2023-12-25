#include <iostream>

int plus(int a, int b) {
    return a + b;
}

int minus(int a, int b) {
    return a - b;
}

int umnozhenie(int a, int b) {
    return a * b;
}

int delenie(int a, int b) {
    if (b != 0) {
        return a / b;
    }
    else {
        return 0;
    }
}

int main() {
    int (*operation)(int, int); // ��������� �� �������

    char oprtn;
    int num1, num2;

    while (true) {
        std::cout << "Enter the operation (+, -, *, /) and then enter two integers, each separated by spaces: ";
        std::cin >> oprtn >> num1 >> num2;


        if (oprtn == '+') {  // �������� �������� � ������� ��������� �� �������
            operation = &plus;
        }
        else if (oprtn == '-') {
            operation = &minus;
        }
        else if (oprtn == '*') {
            operation = &umnozhenie;
        }
        else if (oprtn == '/') {
            operation = &delenie;
        }
        else {
            break; // ���� ������������ ������ ������, ���� �����������
        }

        int result = operation(num1, num2); // ����� ��������� �������
        std::cout << "Result: " << result << std::endl;
    }

    return 0;
}