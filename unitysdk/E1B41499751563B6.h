#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B3CA13EF1EE53BCD.h"

class F5DC12EC825CCBF6;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define E1B41499751563B6_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1930250)
#define E1B41499751563B6_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x1930170)
#define E1B41499751563B6_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1930500)
#define E1B41499751563B6_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x19304B0)
#define E1B41499751563B6__CTOR_OFFSET UNITYSDK_OFFSET(0x16572C0)

inline static constexpr unsigned int E1B41499751563B6_TypeDefinitionIndex = 1571;

class E1B41499751563B6 : public ::B3CA13EF1EE53BCD
{
public:
	::ABC::UI::MonoButton* FB001ABBA2786D82; // 0xA8
	::UnityEngine::UI::Image* BE8B00C796036193; // 0xB0
	::UnityEngine::UI::Image* A92FA1B33ABB61F3; // 0xB8
	::ABC::UI::MonoPrefabLoader* E917C818ABC29236; // 0xC0
	::ABC::UI::MonoLocalizedTmp* F10D40A72DA4A741; // 0xC8
	::UnityEngine::RectTransform* F29CC5B0198D48FD; // 0xD0

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1B41499751563B6_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1B41499751563B6__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + E1B41499751563B6_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1B41499751563B6_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::F5DC12EC825CCBF6* ACDE58E97E37D13C)
	{
		return ((::System::Void(*)(::PVOID, ::F5DC12EC825CCBF6*))((::PBYTE)hIl2Cpp + E1B41499751563B6_EC3033C0485522FB_OFFSET))(this, ACDE58E97E37D13C);
	}
};
