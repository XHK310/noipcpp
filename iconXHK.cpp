#include <bits/stdc++.h>
#include <windows.h>

HWND hwnd = GetDesktopWindow();
HDC hdc = GetDC(hwnd);

void xhk()
{
    int x = 440, y = 440;

    int i = 9;

    while (i)
    {

        DrawIcon(hdc, x, y, LoadIcon(NULL, IDI_QUESTION));
        x += 20;
        y += 20;
        i--;
        Sleep(10);
    }
    i = 9;
    x = 590;
    y = 440;
    while (i)
    {
        DrawIcon(hdc, x, y, LoadIcon(NULL, IDI_QUESTION));
        x -= 20;
        y += 20;
        i--;
        Sleep(10);
    }

    x = 700;
    y = 440;

    for (int i = 0; i <= 7; i++)
    {
        DrawIcon(hdc, x, y, LoadIcon(NULL, IDI_WARNING));
        y += 20;
        Sleep(10);
    }
    y = 510;
    for (int i = 0; i <= 6; i++)
    {
        DrawIcon(hdc, x, y, LoadIcon(NULL, IDI_WARNING));
        x += 20;
        Sleep(10);
    }
    y = 440;
    for (int i = 0; i <= 7; i++)
    {
        DrawIcon(hdc, x, y, LoadIcon(NULL, IDI_WARNING));
        y += 20;
        Sleep(10);
    }
    x += 110;
    y = 440;
    for (int i = 0; i <= 8; i++)
    {
        DrawIcon(hdc, x, y, LoadIcon(NULL, IDI_ERROR));
        y += 20;
        Sleep(10);
    }
    x += 80;
    y = 440;
    for (int i = 0; i <= 3; i++)
    {
        DrawIcon(hdc, x, y, LoadIcon(NULL, IDI_ERROR));
        x -= 20;
        y += 20;
        Sleep(10);
    }

    for (int i = 0; i <= 4; i++)
    {
        DrawIcon(hdc, x, y, LoadIcon(NULL, IDI_ERROR));
        x += 20;
        y += 20;
        Sleep(10);
    }
}

void clear()
{
    InvalidateRect(NULL, NULL, true);
    InvalidateRect(NULL, NULL, true);
    Sleep(65);
}

int WINAPI WinMain(HINSTANCE hThisInstance, HINSTANCE hPrevInstance, LPSTR lpszArgument, int nCmdShow)
{
    for (int i = 0; i <= 100; i++)
    {
        xhk();
        clear();
    }
    return 0;
}