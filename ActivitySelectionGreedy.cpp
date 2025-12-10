// Even Question: Given set of N activities where each activity has starting time S_i finish time F_i,
// Select maximum set of activites such that 2 activites should not overlap
// Sort Activites using Merge Sort based on Finish Time
// Print Max Selcted Activities and their Start and Finish Time

//Observations:
//Time Complexity: n * log(n) + n = n*log(n)

#include <iostream>
#include <vector>
using namespace std;

struct Activity {
    int start;
    int finish;
};

void merge(vector<Activity>& activities, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<Activity> left(n1), right(n2);
    for (int i = 0; i < n1; i++)
        left[i] = activities[l + i];
    for (int j = 0; j < n2; j++)
        right[j] = activities[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i].finish <= right[j].finish) {
            activities[k] = left[i];
            i++;
        } else {
            activities[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        activities[k] = left[i];
        i++;
        k++;
    }
    while (j < n2) {
        activities[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(vector<Activity>& activities, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(activities, l, m);
        mergeSort(activities, m + 1, r);
        merge(activities, l, m, r);
    }
}

vector<Activity> selectActivities(vector<Activity>& activities) {
    vector<Activity> selected;

    if (activities.empty()) return selected;

    selected.push_back(activities[0]);
    int lastFinish = activities[0].finish;

    for (int i = 1; i < activities.size(); i++) {
        if (activities[i].start >= lastFinish) {
            selected.push_back(activities[i]);
            lastFinish = activities[i].finish;
        }
    }

    return selected;
}

int main() {
    int n;
    cout << "Enter Number of Activities: ";
    cin >> n;

    vector<Activity> activities(n);
    cout << "Enter Activities with their Start Time and Finish Time:\n";
    for (int i = 0; i < n; i++) {
        cout << "Activity " << i + 1 << ": ";
        cin >> activities[i].start >> activities[i].finish;
    }

    mergeSort(activities, 0, n - 1);

    cout << "\nActivities after sorting by finish time:\n";
    for (int i = 0; i < n; i++) {
        cout << "(" << activities[i].start << ", " << activities[i].finish << ") ";
    }
    cout << "\n";

    vector<Activity> selected = selectActivities(activities);

    cout << "\nMaximum number of non-overlapping activities: " << selected.size() << "\n";
    cout << "Selected Activities (Start, Finish):\n";
    for (int i = 0; i < selected.size(); i++) {
        cout << "Activity " << i + 1 << ": (" << selected[i].start << ", " << selected[i].finish << ")\n";
    }

    cout << "\nMaximum number Selectable activities: " << selected.size() << "\n";

    return 0;
}
