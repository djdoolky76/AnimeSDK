#pragma once
#include "unitysdk/unitysdk.h"

class E6350CA2988BAC74;
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class RectTransform; }

#define EBBEA40A304F6359_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1734EC0)
#define EBBEA40A304F6359_BFCEE111278C4278_OFFSET UNITYSDK_OFFSET(0x1735150)
#define EBBEA40A304F6359_E94C29686E5E95D8_OFFSET UNITYSDK_OFFSET(0x17350E0)
#define EBBEA40A304F6359_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1735080)
#define EBBEA40A304F6359__CTOR_OFFSET UNITYSDK_OFFSET(0x1735210)

inline static constexpr unsigned int EBBEA40A304F6359_TypeDefinitionIndex = 752;

class EBBEA40A304F6359
{
public:
	::System::Boolean FFF22F7DFFC523D5; // 0x90
	::System::Byte _padding0[0x7];
	::E6350CA2988BAC74* AE1F11702A1915E9; // 0x98
	::UnityEngine::RectTransform* E3BDB48F263FEEFD; // 0xA0
	::UnityEngine::RectTransform* A00CBBEDCC1DD2DF; // 0xA8

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + EBBEA40A304F6359_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBEA40A304F6359_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void BFCEE111278C4278(::System::Boolean F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EBBEA40A304F6359_BFCEE111278C4278_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBEA40A304F6359__CTOR_OFFSET))(this);
	}

	::System::Void E94C29686E5E95D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBEA40A304F6359_E94C29686E5E95D8_OFFSET))(this);
	}
};
