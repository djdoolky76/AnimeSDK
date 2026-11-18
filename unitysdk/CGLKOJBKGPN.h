#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CGLKOJBKGPN_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x78F980)
#define CGLKOJBKGPN__CTOR_OFFSET UNITYSDK_OFFSET(0x78F8E0)

inline static constexpr unsigned int CGLKOJBKGPN_TypeDefinitionIndex = 92873;

struct alignas(4) CGLKOJBKGPN
{
	::System::Single HODFGOJHNGL; // 0x10
	::System::Single AOHLEFAJBML; // 0x14
	::System::Single CEPMEAEOKKL; // 0x18

	::System::Void _ctor(::System::Single ADHCHBELCDG, ::System::Single INLCCLKACAL, ::System::Single BLHLLDJIPJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CGLKOJBKGPN__CTOR_OFFSET))(this, ADHCHBELCDG, INLCCLKACAL, BLHLLDJIPJC);
	}

	::System::Void GPKMPDHNCGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLKOJBKGPN_GPKMPDHNCGL_OFFSET))(this);
	}
};
