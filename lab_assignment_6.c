int search (int numbers[], int low, int high, int value) {

    int mid;
    if (low <= high) {
        mid = (low + high)/2;
        if(value < numbers[mid]) {
            return search(numbers, low, mid-1, value);
        }
        else if (value > numbers[mid]) {
            return search (numbers, high ,mid+1, value);
        }
        else {
            return mid;
        }
    }
    return -1;
}
