class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int sum = 0, direct = 0;
        for (auto i : distance) {
            sum += i;
        }
        for (int i = min(start, destination); i < max(start, destination); i++) {
            direct += distance[i];
        }
        return min(sum - direct, direct);
    }
};
