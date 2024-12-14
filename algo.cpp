#include <iostream>
#include <vector>
using namespace std;

vector<int> simulateTubeArray(vector<int>& numbers) {
    vector<int> result;
    
    for(int num : numbers) {
        if(result.empty()) {
            result.push_back(num);
        }
        else if(result.size() % 2 == 0) {
            int mid = result.size() / 2;
            result.insert(result.begin() + mid, num);
        }
        else {
            int mid = (result.size() + 1) / 2 - 1;
            result.insert(result.begin() + mid, num);
        }
    }
    
    return result;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> numbers(N);
    for(int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
    
    vector<int> result = simulateTubeArray(numbers);
    
    for(int i = 0; i < result.size(); i++) {
        cout << result[i];
        if(i < result.size() - 1) cout << " ";
    }
    cout << endl;
    
    return 0;
}