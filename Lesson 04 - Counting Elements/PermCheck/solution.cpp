// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Time Complexity: O(N)
// Space Complexity: O(N)

int solution(vector<int>& A) {
    const int N = A.size();
    vector<bool> v(N, false);

    for (const int i : A) {
        if (i > N) {
            return 0;
        }

        if (v[i - 1]) {
            return 0;
        }

        v[i - 1] = true;
    }

    return 1;
}
