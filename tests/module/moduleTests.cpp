#include "TestHarness.h"

#ifdef __cplusplus
extern "C" {
#endif

#   include "module.h"

#ifdef __cplusplus
}
#endif

TEST_GROUP(module)
{
    void setup()
    {

    }

    void teardown()
    {

    }
};

TEST(module, FailAlways)
{
    FAIL_TEST("Prova di test");
}

TEST(module, Test1)
{
    CHECK_EQUAL(1, prova());
}

TEST(module, Test0)
{
    CHECK_EQUAL(0, prova());
}