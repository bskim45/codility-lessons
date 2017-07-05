// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Time Complexity: O(N + M)
// Space Complexity: O(N)

vector<int> solution(int N, vector<int> &A) {
    vector<int> v(N, 0);
    int last_max = 0;
    int max = 0;

    for (auto i = 0; i < A.size(); ++i) {
        if (A[i] >= 1 && A[i] <= N) {
            if (v[A[i] - 1] < last_max) {
                v[A[i] - 1] = last_max;
            }

            max = std::max(++v[A[i] - 1], max);
        }
        else {
            last_max = max;
        }
    }

    for (auto i = 0; i < N; ++i) {
        if (v[i] < last_max) {
            v[i] = last_max;
        }
    }

    return v;
}
