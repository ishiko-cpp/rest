/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/rest/blob/main/LICENSE.txt
*/

#include "RESTClientTests.hpp"
#include <Ishiko/TestFramework/Core.hpp>
#include <exception>

using namespace Ishiko;

int main(int argc, char* argv[])
{
    try
    {
        TestHarness::CommandLineSpecification commandLineSpec;
        Configuration configuration = commandLineSpec.createDefaultConfiguration();
        CommandLineParser::parse(commandLineSpec, argc, argv, configuration);

        TestHarness theTestHarness("Ishiko/C++ REST Library Tests", configuration);

        TestSequence& theTests = theTestHarness.tests();
        theTests.append<RESTClientTests>();

        return theTestHarness.run();
    }
    catch (const std::exception& e)
    {
        return TestApplicationReturnCode::exception;
    }
    catch (...)
    {
        return TestApplicationReturnCode::exception;
    }
}
