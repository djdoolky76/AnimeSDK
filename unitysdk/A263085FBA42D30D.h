#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class ED4768D175EFE6C9;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace ABC::UI { class MonoUIBlur; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::UI { class Image; }

#define A263085FBA42D30D_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1807270)
#define A263085FBA42D30D_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x18075D0)
#define A263085FBA42D30D_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1807580)
#define A263085FBA42D30D__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A263085FBA42D30D_TypeDefinitionIndex = 1059;

class A263085FBA42D30D : public ::EFC4AEA2121EC272
{
public:
	::UnityEngine::Canvas* EB728202C675828C; // 0x80
	::UnityEngine::Canvas* F619FC5D69B85380; // 0x88
	::UnityEngine::UI::Image* EDF5036EA30B7A7F; // 0x90
	::UnityEngine::UI::Image* F958DE1F5A0C4EC8; // 0x98
	::ABC::UI::MonoUIBlur* AE07E094515ABAC9; // 0xA0
	::ABC::UI::MonoLocalizedTmp* B732DF7664EE1EE7; // 0xA8
	::ABC::UI::MonoLocalizedTmp* A413028986428A16; // 0xB0
	::ABC::UI::MonoLocalizedTmp* FDDFD0F199C01D54; // 0xB8
	::UnityEngine::Animator* B9F01DAFAA0245A1; // 0xC0

	::System::Void EC3033C0485522FB(::ED4768D175EFE6C9* EC35F88C87A83BEB)
	{
		return ((::System::Void(*)(::PVOID, ::ED4768D175EFE6C9*))((::PBYTE)hIl2Cpp + A263085FBA42D30D_EC3033C0485522FB_OFFSET))(this, EC35F88C87A83BEB);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A263085FBA42D30D__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A263085FBA42D30D_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A263085FBA42D30D_F6A675B119E39F53_OFFSET))(this);
	}
};
