/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/rest/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_REST_TESTS_RESTCLIENTTESTS_HPP
#define GUARD_ISHIKO_CPP_REST_TESTS_RESTCLIENTTESTS_HPP

#include <Ishiko/TestFramework/Core.hpp>

class RESTClientTests : public Ishiko::TestSequence
{
public:
    RESTClientTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);
};

#endif
