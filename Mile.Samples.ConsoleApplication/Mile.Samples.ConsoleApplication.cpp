/*
 * PROJECT:   Mile.Samples.ConsoleApplication
 * FILE:      Mile.Samples.ConsoleApplication.cpp
 * PURPOSE:   Implementation for Mile.Samples.ConsoleApplication
 *
 * LICENSE:   The MIT License
 *
 * MAINTAINER: MouriNaruto (Kenji.Mouri@outlook.com)
 */

#include <clocale>
#include <cstdio>
#include <cwchar>

int main()
{
    // I can't use that because of the limitation in VC-LTL.
    // std::setlocale(LC_ALL, "zh_CN.UTF-8");

    std::setlocale(LC_ALL, "chs");

    std::wprintf(
        L"Mile.Samples.ConsoleApplication\n"
        L"================================================================\n"
        L"仅用于演示。\n"
        L"For presentation purposes only.\n");

    return 0;
}
