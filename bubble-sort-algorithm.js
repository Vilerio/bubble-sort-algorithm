function swap(numbers) {
    if (numbers.length === 1) {
        return numbers;
    }
    while (true) {
        let swapped = false;
        for (let i = 0; i < numbers.length - 1; i++) {
            if (numbers[i] > numbers[i + 1]) {
                [numbers[i], numbers[i + 1]] = [numbers[i + 1], numbers[i]];
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
    return numbers;
}

console.log("Bubble Sort Algorithm");
const input = prompt("Enter the numbers to be sorted (separated by spaces):");
const inputNumbers = input.split(" ").map(Number);
console.log("Sorted numbers are:");
const outputNumbers = swap(inputNumbers);
console.log(outputNumbers.join(" "));
