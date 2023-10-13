/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/rest/blob/main/LICENSE.txt
*/

#include "RESTClientTests.hpp"
#include "Ishiko/REST/RESTClient.hpp"

using namespace Ishiko;

RESTClientTests::RESTClientTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "RESTClient tests", context)
{
}
