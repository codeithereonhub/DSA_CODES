#include <iostream>

int main()
{
int arr[100], n;

std::cout << "Enter the size of array: ";
std::cin >> n;

std::cout << "Enter " << n << " integers: ";

for (int i = 0; i < n; i++)
{
    std::cin >> arr[i];
}

std::cout << "Your array is: ";

for (int i = 0; i < n; i++)
{
    std::cout << arr[i] << " ";
}

int pos, val;

std::cout << "\nEnter the position: ";
std::cin >> pos;

std::cout << "Enter the value: ";
std::cin >> val;

// Shift elements one position to the right
for (int i = n - 1; i >= pos - 1; i--)
{
    arr[i + 1] = arr[i];
}

// Insert new value
arr[pos - 1] = val;

n++;

std::cout << "\nArray after insertion: ";

for (int i = 0; i < n; i++)
{
    std::cout << arr[i] << " ";
}

return 0;
}
