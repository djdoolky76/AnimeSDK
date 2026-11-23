#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class E6350CA2988BAC74;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::UI { class Image; }

#define A487E07347AB6399_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1ACD330)
#define A487E07347AB6399_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1ACD670)
#define A487E07347AB6399_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1ACD610)
#define A487E07347AB6399__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A487E07347AB6399_TypeDefinitionIndex = 2011;

class A487E07347AB6399 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoButton* F2EF388BCC222547; // 0x80
	::ABC::UI::MonoPrefabLoader* A0E8C944DEA69E2E; // 0x88
	::UnityEngine::UI::Image* BE8B00C796036193; // 0x90
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0x98
	::E6350CA2988BAC74* A72538EFBDF753CE; // 0xA0
	::ABC::UI::MonoLocalizedTmp* A0FB631C9CD77603; // 0xA8
	::ABC::UI::MonoLocalizedTmp* E2DD755B74A05F57; // 0xB0

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A487E07347AB6399_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A487E07347AB6399__CTOR_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A487E07347AB6399_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 EAB74E382CAFD347, ::System::UInt32 BC8A36DD3606E794)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + A487E07347AB6399_EC3033C0485522FB_OFFSET))(this, EAB74E382CAFD347, BC8A36DD3606E794);
	}
};
