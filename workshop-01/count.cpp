#include <iostream>
// Sums together all positive numbers and returns them
int count(int array[], int n) {
    int even_total = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] % 2==0) {
            even_total += array[i];
        }
    }

    return even_total;
}

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array, 5) << std::endl;
    return 0;
}
