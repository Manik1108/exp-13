#include <iostream>

class ArrayComparer {
private:
    int array1[5];
    int array2[5];
public:
    ArrayComparer(int arr1[], int arr2[]) {
        // Copy values from arr1 to array1
        for (int i = 0; i < 5; ++i) {
            array1[i] = arr1[i];
        }
        // Copy values from arr2 to array2
        for (int i = 0; i < 5; ++i) {
            array2[i] = arr2[i];
        }
    }

    int sumOfArray(int arr[]) {
        int sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += arr[i];
        }
        return sum;
    }

    void compareArrays() {
        int sum1 = sumOfArray(array1);
        int sum2 = sumOfArray(array2);

        if (sum1 > sum2) {
            std::cout << "Array 1 has a higher sum: " << sum1 << std::endl;
        } else if (sum1 < sum2) {
            std::cout << "Array 2 has a higher sum: " << sum2 << std::endl;
        } else {
            std::cout << "Both arrays have the same sum: " << sum1 << std::endl;
        }
    }
};

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};

    ArrayComparer comparer(arr1, arr2);
    comparer.compareArrays();

    return 0;
}

