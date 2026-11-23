#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class F32C05369A114F02;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::UI { class Image; }

#define E43C32C0AA40C008_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x2265A00)
#define E43C32C0AA40C008_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x2265970)
#define E43C32C0AA40C008_EB7F36BCDD2E7A7A_OFFSET UNITYSDK_OFFSET(0x2265C60)
#define E43C32C0AA40C008_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x2265C10)
#define E43C32C0AA40C008__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int E43C32C0AA40C008_TypeDefinitionIndex = 9215;

class E43C32C0AA40C008 : public ::EFC4AEA2121EC272
{
public:
	::F32C05369A114F02* E97AA068BBB42CBF; // 0x80
	::ABC::UI::MonoButton* EE54B591DDDA1D5B; // 0x88
	::UnityEngine::UI::Image* BE8B00C796036193; // 0x90
	::UnityEngine::UI::Image* ABE5582FFD69144C; // 0x98
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xA0
	::ABC::UI::MonoPrefabLoader* E917C818ABC29236; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E43C32C0AA40C008__CTOR_OFFSET))(this);
	}

	::System::Void EB7F36BCDD2E7A7A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E43C32C0AA40C008_EB7F36BCDD2E7A7A_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E43C32C0AA40C008_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + E43C32C0AA40C008_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E43C32C0AA40C008_B950FF9810FC6646_OFFSET))(this);
	}
};
