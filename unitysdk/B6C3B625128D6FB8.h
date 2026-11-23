#pragma once
#include "unitysdk/unitysdk.h"

class ED4768D175EFE6C9;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoItemIcon; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define B6C3B625128D6FB8_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x165BD60)
#define B6C3B625128D6FB8_BFCEE111278C4278_OFFSET UNITYSDK_OFFSET(0x165C580)
#define B6C3B625128D6FB8_F5080DC84BF4FBDC_OFFSET UNITYSDK_OFFSET(0x165C6E0)
#define B6C3B625128D6FB8_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x165C530)
#define B6C3B625128D6FB8__CTOR_OFFSET UNITYSDK_OFFSET(0x165C7F0)

inline static constexpr unsigned int B6C3B625128D6FB8_TypeDefinitionIndex = 3;

class B6C3B625128D6FB8
{
public:
	::ABC::UI::MonoButton* A31112E5A9B38461; // 0x90
	::ABC::UI::MonoUIAutoView* A3425CCA5A56B7C3; // 0x98
	::UnityEngine::UI::Image* E80054E98C7F7AB8; // 0xA0
	::UnityEngine::UI::Image* A2B71CBEACD1A3D7; // 0xA8
	::UnityEngine::UI::Image* F88A4322C4F6A73D; // 0xB0
	::UnityEngine::UI::Image* BEA79EB5CDE70E9C; // 0xB8
	::UnityEngine::UI::Image* BF57BE0F7E4AE8AD; // 0xC0
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xC8
	::UnityEngine::UI::Image* FCB67C65A27AE402; // 0xD0
	::ABC::UI::MonoUIAutoView* F787AE52CC643F49; // 0xD8
	::UnityEngine::UI::Image* B1C90912248FE9DF; // 0xE0
	::UnityEngine::UI::Image* F75CDAC1F8717C75; // 0xE8
	::UnityEngine::RectTransform* FE706C2C34FDEA28; // 0xF0
	::UnityEngine::RectTransform* A9CACDBD4E2080BE; // 0xF8
	::UnityEngine::RectTransform* E4EEB0655B7FBC88; // 0x100
	::UnityEngine::RectTransform* B5C059B486E8019B; // 0x108
	::ABC::UI::MonoPrefabLoader* A83D37ED810667F6; // 0x110
	::UnityEngine::RectTransform* ABFA8B4470063C8B; // 0x118
	::UnityEngine::RectTransform* B71F3E267B1C2266; // 0x120
	::ABC::UI::MonoPrefabLoader* E917C818ABC29236; // 0x128
	::ABC::UI::MonoPrefabLoader* FA7BAF31060EADAA; // 0x130
	::UnityEngine::RectTransform* E26E969D1AC6B3D5; // 0x138
	::ABC::UI::MonoLocalizedTmp* A552B99CD97F3356; // 0x140
	::ABC::UI::MonoLocalizedTmp* F75A149BB2508B94; // 0x148
	::ABC::UI::MonoLocalizedTmp* B7E899C21700D978; // 0x150
	::ABC::UI::MonoLocalizedTmp* FD8F82464B7408EB; // 0x158
	::ABC::UI::MonoLocalizedTmp* AB5A415B02A4D0E1; // 0x160
	::ABC::UI::MonoButton* ED31353FEF5362A0; // 0x168
	::ABC::UI::MonoItemIcon* F686975210889F9E; // 0x170

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6C3B625128D6FB8__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + B6C3B625128D6FB8_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void BFCEE111278C4278(::ED4768D175EFE6C9* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::ED4768D175EFE6C9*))((::PBYTE)hIl2Cpp + B6C3B625128D6FB8_BFCEE111278C4278_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Void F5080DC84BF4FBDC(::System::Boolean FD0CED3260F62FD3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + B6C3B625128D6FB8_F5080DC84BF4FBDC_OFFSET))(this, FD0CED3260F62FD3);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6C3B625128D6FB8_F6A675B119E39F53_OFFSET))(this);
	}
};
