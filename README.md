# SwcTesterFunction

## Summary

This repository contains a VS 2022 solution that is comprised of two projects:
1. SwcTesterFunction.csproj - a .NET6 Azure Function App that calls a function from a C++ DLL
2. ReturnNumber.vcxproj - a C++ project that has a few different simple functions accepting and returning integer values.

The goal of this solution is to host a simple Function App that can access code in a C++ DLL.
