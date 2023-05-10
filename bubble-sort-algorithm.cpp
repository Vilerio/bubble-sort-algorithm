#include <iostream>
#include <vector>
#include <sstream>


std::vector<int> swap(std::vector<int> numbers){
    if (numbers.size() == 1){
        return numbers;
    }
    while (true){
        bool swapped = false;
        for (int i = 0; i < numbers.size() - 1; i++){
            if (numbers[i] > numbers[i + 1]){
                int temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped){
            break;
        }
    }
    return numbers;
}

int main() {
    std::cout << "Bubble Sort Algorithm" << std::endl;
    std::vector<int> input_numbers;
    std::cout << "Enter the numbers to be sorted (separated by spaces) :" << std::endl;

    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    int number;
    while (iss >> number) {
        input_numbers.push_back(number);
    }
    std::cout << "Sorted numbers are : " << std::endl;
    std::vector<int> output_numbers = swap(input_numbers);
    for (int i = 0; i < output_numbers.size(); i++) {
        std::cout << output_numbers[i] << " ";
    }
    
    return 0;
}