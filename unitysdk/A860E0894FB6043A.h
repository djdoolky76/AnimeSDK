#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define A860E0894FB6043A_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1B6FF20)
#define A860E0894FB6043A_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1B702B0)
#define A860E0894FB6043A_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1B70260)
#define A860E0894FB6043A__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A860E0894FB6043A_TypeDefinitionIndex = 2247;

class A860E0894FB6043A : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoButton* A17B4EAE6FA221C7; // 0x80
	::UnityEngine::UI::Image* A5E2BF98E8A54E7F; // 0x88
	::UnityEngine::UI::Image* A6E8BB77D907FE17; // 0x90
	::UnityEngine::UI::Image* AAF2298E0D1F32AB; // 0x98
	::UnityEngine::UI::Image* B30157DA0E33CFD9; // 0xA0
	::UnityEngine::RectTransform* B5CDC9832CFB95AA; // 0xA8
	::ABC::UI::MonoLocalizedTmp* B9245587747B5E69; // 0xB0
	::ABC::UI::MonoLocalizedTmp* A121D40F03CB07A4; // 0xB8
	::ABC::UI::MonoLocalizedTmp* A4700D7EBDFF5007; // 0xC0
	::ABC::UI::MonoLocalizedTmp* E2DD755B74A05F57; // 0xC8

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A860E0894FB6043A_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A860E0894FB6043A__CTOR_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 E14C124C01DA15CE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + A860E0894FB6043A_EC3033C0485522FB_OFFSET))(this, E14C124C01DA15CE);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A860E0894FB6043A_F6A675B119E39F53_OFFSET))(this);
	}
};
