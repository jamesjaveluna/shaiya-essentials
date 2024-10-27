#include "include/static.h"
using namespace shaiya;

void Static::DrawRect(D3DCOLOR argb, long x, long y, long w, long h)
{
    typedef void(__cdecl* LPFN)(D3DCOLOR, long, long, long, long);
    (*(LPFN)0x4B6180)(argb, x, y, w, h);
}

void Static::SysMsgTextOut(int messageType, int messageId, int unknown)
{
    // 1-14     = CHAT_BOX (WHITE)
    // 15       = SYSTEM_MESSAGE (ORANGE)
    // 16-17    = SYSTEM_MESSAGE (RED)
    // 18       = SYSTEM_MESSAGE (YELLOW-ORANGE)
    // 19       = SYSTEM_MESSAGE (GREEN)
    // 20       = SYSTEM_MESSAGE (PURPLE)
    // 21       = SYSTEM_MESSAGE (SKYBLUE)
    // 22       = SYSTEM_MESSAGE (LIGHT-YELLOW)     
    // 23       = SYSTEM_MESSAGE (WHITE)
    // 24       = SYSTEM_MESSAGE (DARK-YELLOW)      (WITH ANNOUNCEMENT)
    // 25       = SYSTEM_MESSAGE (DARK-WHITE)       (WITH ANNOUNCEMENT)
    // 26       = CHATBOX (WHITE)                   (WITH ANNOUNCEMENT)
    // 27       = CHATBOX (WHITE)                   (WITH ANNOUNCEMENT)
    // 28       = SYSTEM_MESSAGE (WHITE)            (WITH ANNOUNCEMENT)
    // 29       = SYSTEM_MESSAGE (WHITE)
    // 30       = SYSTEM_MESSAGE (WHITE)
    // 31       = SYSTEM_MESSAGE (GRAY)
    // 32       = CHAT_BOX (WHITE)
    // 33       = CHAT_BOX (WHITE)
    // 34       = CHAT_BOX (GRAY)
    // 35       = CHAT_BOX (LIGHTGREEN)
    // 36       = CHAT_BOX (LIGHTRED)
    // 37       = CHAT_BOX (LIGHTPURPLE)
    // 38       = CHAT_BOX (LIGHTBROWN)
    // 39       = CHAT_BOX (RED)
    // 40       = CHAT_BOX (YELLOW)
    typedef void(__cdecl* LPFN)(int, int, int);
    (*(LPFN)0x423150)(messageType, messageId, unknown);
}

bool Static::PlayWav(const char* filename, D3DVECTOR* origin, float volume, bool repeat)
{
    typedef bool(__thiscall* LPFN)(void*, const char*, D3DVECTOR*, float, bool);
    return (*(LPFN)0x56C650)((void*)0x22B4030, filename, origin, volume, repeat);
}

