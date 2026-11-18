#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEIICODCJNC.h"

class LGINJIKKBJA;
namespace UnityEngine { class Animation; }

#define KIHFHALBNBL_GMMMAKECOPN_OFFSET UNITYSDK_OFFSET(0x126897C0)
#define KIHFHALBNBL_OGJEJIHLOJP_OFFSET UNITYSDK_OFFSET(0x126897B0)
#define KIHFHALBNBL_PKOOMIICKNE_OFFSET UNITYSDK_OFFSET(0x126897A0)
#define KIHFHALBNBL__CTOR_OFFSET UNITYSDK_OFFSET(0x126897D0)

inline static constexpr unsigned int KIHFHALBNBL_TypeDefinitionIndex = 90460;

class KIHFHALBNBL : public ::AEIICODCJNC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHFHALBNBL__CTOR_OFFSET))(this);
	}

	::LGINJIKKBJA* PKOOMIICKNE()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHFHALBNBL_PKOOMIICKNE_OFFSET))(this);
	}

	::UnityEngine::Animation* OGJEJIHLOJP()
	{
		return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHFHALBNBL_OGJEJIHLOJP_OFFSET))(this);
	}

	::UnityEngine::Animation* GMMMAKECOPN()
	{
		return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHFHALBNBL_GMMMAKECOPN_OFFSET))(this);
	}
};
