#include <iostream>
#include <ctime>

int main() {
    const int N = 5; 
    int array[N][N]; 

    std::cout << "Array:" << std::endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            array[i][j] = i + j;
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    time_t now = time(0);
    struct tm localTime;
    localtime_s(&localTime, &now);

    int currentDay = localTime.tm_mday;
    int rowIndex = currentDay % N;
    int sum = 0;
    for (int j = 0; j < N; j++) {
        sum += array[rowIndex][j];
    }

    std::cout << "Sum of elements in row " << rowIndex << ": " << sum << std::endl;

    return 0;
}
