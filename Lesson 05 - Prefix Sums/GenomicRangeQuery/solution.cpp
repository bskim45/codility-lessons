// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Time Complexity: O(N + M)
// Space Complexity: O(N)

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    const size_t N = S.length();
    const size_t M = P.size();

    vector<vector<int>> grid;
    grid.reserve(N);

    vector<int> seen(4, -1);

    for(size_t i = 0; i < N; ++i) {
        switch (S[i]) {
        case 'A':
            seen[0] = i;
            break;
        case 'C':
            seen[1] = i;
            break;
        case 'G':
            seen[2] = i;
            break;
        case 'T':
            seen[3] = i;
            break;
        }
        grid.push_back(seen);
    }

    vector<int> ans(M, 4);

    for(size_t i = 0; i < M; ++i) {
        for(size_t j = 0; j < 4; ++j) {
            if(grid[Q[i]][j] >= P[i]) {
                ans[i] = j + 1;
                break;
            }
        }
    }

    return ans;
}
