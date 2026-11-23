#pragma once
#include "unitysdk/unitysdk.h"

class A575FD91F8A4F4E3;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define A7FBB43498CAE9AF_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1F1F120)
#define A7FBB43498CAE9AF_BFCEE111278C4278_OFFSET UNITYSDK_OFFSET(0x1F1F370)
#define A7FBB43498CAE9AF_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1F1F320)
#define A7FBB43498CAE9AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F450)

inline static constexpr unsigned int A7FBB43498CAE9AF_TypeDefinitionIndex = 7536;

class A7FBB43498CAE9AF
{
public:
	::UnityEngine::UI::Image* BDABE0D694F74646; // 0x90
	::UnityEngine::UI::Image* B409DD5AA5FB6F60; // 0x98
	::UnityEngine::RectTransform* E36C05CE1F9980A0; // 0xA0
	::ABC::UI::MonoLocalizedTmp* BF1114CC592A9EF1; // 0xA8
	::UnityEngine::RectTransform* BCB26428FCE0CF91; // 0xB0

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A7FBB43498CAE9AF_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7FBB43498CAE9AF__CTOR_OFFSET))(this);
	}

	::System::Void BFCEE111278C4278(::A575FD91F8A4F4E3* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::A575FD91F8A4F4E3*))((::PBYTE)hIl2Cpp + A7FBB43498CAE9AF_BFCEE111278C4278_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7FBB43498CAE9AF_F6A675B119E39F53_OFFSET))(this);
	}
};
