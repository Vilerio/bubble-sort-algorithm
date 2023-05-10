def swap(numbers):
    if len(numbers) == 1:
        return numbers
    while True:
        swapped = False
        for i in range(len(numbers) - 1):
            if numbers[i] > numbers[i + 1]:
                numbers[i], numbers[i + 1] = numbers[i + 1], numbers[i]
                swapped = True
        if not swapped:
            break
    return numbers

print("Bubble Sort Algorithm")
input_numbers = input("Enter the numbers to be sorted (separated by spaces): ").split()
input_numbers = [int(num) for num in input_numbers]
print("Sorted numbers are:")
output_numbers = swap(input_numbers)
for number in output_numbers:
    print(number, end=" ")
