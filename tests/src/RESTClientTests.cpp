// SPDX-FileCopyrightText: 2005-2024 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#include "RESTClientTests.hpp"
#include "Ishiko/REST/RESTClient.hpp"

using namespace Ishiko;

RESTClientTests::RESTClientTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "RESTClient tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void RESTClientTests::ConstructorTest1(Test& test)
{
    RESTClient rest_client;

    ISHIKO_TEST_PASS();
}
