#include "munit/munit.h"

float snek_score(int num_files, int num_contributors, int num_commits,
                 float avg_bug_criticality) {
    int size_factor = num_commits * num_files;
    int complexity_factor = size_factor + num_contributors;
    return (float)(complexity_factor * avg_bug_criticality);
}
