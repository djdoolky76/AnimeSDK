#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class E6350CA2988BAC74;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define B7A7C4A07D3D7342_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x173AB70)
#define B7A7C4A07D3D7342_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x173AE30)
#define B7A7C4A07D3D7342_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x173ADD0)
#define B7A7C4A07D3D7342__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int B7A7C4A07D3D7342_TypeDefinitionIndex = 740;

class B7A7C4A07D3D7342 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoButton* AC4164BC057D497C; // 0x80
	::E6350CA2988BAC74* FB16980EE0454AC6; // 0x88
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0x90
	::ABC::UI::MonoLocalizedTmp* EA64A93616BBF750; // 0x98
	::UnityEngine::RectTransform* B7B4E9314E1DD999; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B7A7C4A07D3D7342__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + B7A7C4A07D3D7342_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void EC3033C0485522FB(::System::Boolean E44E7212AEFF1592)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + B7A7C4A07D3D7342_EC3033C0485522FB_OFFSET))(this, E44E7212AEFF1592);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B7A7C4A07D3D7342_F6A675B119E39F53_OFFSET))(this);
	}
};
