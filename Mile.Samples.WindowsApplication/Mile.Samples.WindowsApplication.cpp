/*
 * PROJECT:   Mile.Samples.WindowsApplication
 * FILE:      Mile.Samples.WindowsApplication.cpp
 * PURPOSE:   Implementation for Mile.Samples.WindowsApplication
 *
 * LICENSE:   The MIT License
 *
 * MAINTAINER: MouriNaruto (Kenji.Mouri@outlook.com)
 */

#include <Windows.h>

int WINAPI wWinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR lpCmdLine,
    _In_ int nShowCmd)
{
    UNREFERENCED_PARAMETER(hInstance);
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);
    UNREFERENCED_PARAMETER(nShowCmd);

    ::MessageBoxW(
        nullptr,
        L"仅用于演示。\n"
        L"For presentation purposes only.\n",
        L"Mile.Samples.WindowsApplication",
        0);

    return 0;
}
