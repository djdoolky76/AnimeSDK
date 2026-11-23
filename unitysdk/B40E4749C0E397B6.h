#pragma once
#include "unitysdk/unitysdk.h"

class B08D5F35EC3F2E15;
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define B40E4749C0E397B6_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x17F78A0)
#define B40E4749C0E397B6_BFCEE111278C4278_OFFSET UNITYSDK_OFFSET(0x17F7AB0)
#define B40E4749C0E397B6_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x17F7A60)
#define B40E4749C0E397B6__CTOR_OFFSET UNITYSDK_OFFSET(0x17F7BC0)

inline static constexpr unsigned int B40E4749C0E397B6_TypeDefinitionIndex = 1053;

class B40E4749C0E397B6
{
public:
	::UnityEngine::UI::Image* ECB2D4AD52F7340B; // 0x90
	::UnityEngine::UI::Image* F976B5526C37D877; // 0x98
	::UnityEngine::RectTransform* E3B0DD9BDD75D9C7; // 0xA0
	::UnityEngine::RectTransform* E0A998A39251562B; // 0xA8

	::System::Void BFCEE111278C4278(::B08D5F35EC3F2E15* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::B08D5F35EC3F2E15*))((::PBYTE)hIl2Cpp + B40E4749C0E397B6_BFCEE111278C4278_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + B40E4749C0E397B6_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B40E4749C0E397B6__CTOR_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B40E4749C0E397B6_F6A675B119E39F53_OFFSET))(this);
	}
};
