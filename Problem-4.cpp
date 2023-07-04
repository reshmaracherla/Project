#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> countMultiples(const vector<int>& numbers) {
    unordered_map<int, int> result;
    
    for (int i = 1; i <= 9; i++) {
        result[i] = 0;
        
        for (int num : numbers) {
            if (num % i == 0) {
                result[i]++;
            }
        }
    }
    
    return result;
}

int main() {
    vector<int> numbers = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    
    unordered_map<int, int> counts = countMultiples(numbers);
    
    cout << "Output:" << endl;
    for (const auto& pair : counts) {
        cout << pair.first << ": " << pair.second << ", ";
    }
    
    return 0;
}
