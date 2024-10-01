#include "munit/munit.h"

#include "exercise.h"

munit_case(RUN, test_snek_score_1, {
    float result = snek_score(3, 4, 5, 0.1);
    munit_assert_double_equal(result, 1.9, "result must be 1.9");
});

munit_case(RUN, test_snek_score_2, {
    float result = snek_score(10, 10, 10, 0.1);
    munit_assert_double_equal(result, 11.0, "result must be 11.0");
});

munit_case(SUBMIT, test_snek_score_3, {
    float result = snek_score(105, 205, 207, 0.1);
    munit_assert_double_equal(result, 2194, "result must be 2194.0");
});

int main() {
    MunitTest tests[] = {
        munit_test("/test_snek_score_1", test_snek_score_1),
        munit_test("/test_snek_score_2", test_snek_score_2),
        munit_test("/test_snek_score_3", test_snek_score_3),
        munit_null_test,
    };

    MunitSuite suite = munit_suite("snek_score", tests);

    return munit_suite_main(&suite, NULL, 0, NULL);
}
