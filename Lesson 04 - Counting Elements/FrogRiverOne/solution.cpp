// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Time Complexity: O(N)
// Space Complexity: O(X)

int solution(int X, vector<int> &A) {
    vector<bool> v(X, false);

    for (auto i = 0U; i < A.size(); ++i) {
        if (v[A[i] - 1]) {
            continue;
        }

        v[A[i] - 1] = true;
        
        if (--X == 0) {
            return i;
        }
    }

    return -1;
}
