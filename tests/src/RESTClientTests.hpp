// SPDX-FileCopyrightText: 2005-2024 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#ifndef GUARD_ISHIKO_CPP_REST_TESTS_RESTCLIENTTESTS_HPP
#define GUARD_ISHIKO_CPP_REST_TESTS_RESTCLIENTTESTS_HPP

#include <Ishiko/TestFramework/Core.hpp>

class RESTClientTests : public Ishiko::TestSequence
{
public:
    RESTClientTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
};

#endif