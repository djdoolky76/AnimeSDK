#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class E6350CA2988BAC74;
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoScrollRect; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define FE2D40974576D74E_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x22B1C90)
#define FE2D40974576D74E_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x22B2050)
#define FE2D40974576D74E__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int FE2D40974576D74E_TypeDefinitionIndex = 7200;

class FE2D40974576D74E : public ::EFC4AEA2121EC272
{
public:
	::UnityEngine::RectTransform* AD0B1F8F860A5892; // 0x80
	::UnityEngine::RectTransform* E78E7CC51C850065; // 0x88
	::UnityEngine::RectTransform* E77D277C59DF7526; // 0x90
	::ABC::UI::MonoPrefabLoader* A50B540854F75CBB; // 0x98
	::UnityEngine::UI::Image* A20BE7CD3F4FF151; // 0xA0
	::UnityEngine::UI::Image* EA7ABB5B1AC08277; // 0xA8
	::UnityEngine::UI::Image* FAE39AC42FC85948; // 0xB0
	::UnityEngine::UI::Image* A288C6EF90A27882; // 0xB8
	::E6350CA2988BAC74* F681014F06F30479; // 0xC0
	::ABC::UI::MonoScrollRect* BDA7A2FEA7B54926; // 0xC8
	::UnityEngine::RectTransform* ECE171AF2D478057; // 0xD0

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE2D40974576D74E_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE2D40974576D74E__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + FE2D40974576D74E_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}
};
