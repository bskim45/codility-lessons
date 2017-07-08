// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Time Complexity: O(N)
// Space Complexity: O(1)

#include <cfloat>

int solution(vector<int> &A) {
    double min_avg = DBL_MAX;
    int idx = 0;

    for(size_t i = 0; i < A.size() - 2; i++) {
        double avg = std::min(double(A[i] + A[i + 1]) / 2,
            double(A[i] + A[i + 1] + A[i + 2]) / 3);

        if(avg < min_avg) {
            min_avg = avg;
            idx = i;
        }
    }

    if(double(*(A.cend() - 2) + *(A.cend() - 1)) / 2 < min_avg) {
        idx = A.size() - 2;
    }

    return idx;
}

