#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/System/Object.h"

class LAJKIMLKJMP;

#define LAJKIMLKJMP_ELHJPDMOPDD_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x129B33D0)
#define LAJKIMLKJMP_ELHJPDMOPDD__CTOR_OFFSET UNITYSDK_OFFSET(0x129B33C0)

inline static constexpr unsigned int LAJKIMLKJMP_ELHJPDMOPDD_TypeDefinitionIndex = 59856;

class LAJKIMLKJMP_ELHJPDMOPDD : public ::System::Object
{
public:
	::LAJKIMLKJMP* KLHPEBKNIFB; // 0x10
	::LGCNEDCMPKM HBMGHPEPBNC; // 0x18
	::HOCDHMEPPEG NEEFAAEMBOL; // 0x40
	::System::UInt32 AOCOIDIMLIH; // 0x70
	::System::UInt32 NKIPEHLEECP; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJKIMLKJMP_ELHJPDMOPDD__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJKIMLKJMP_ELHJPDMOPDD_LIDNPLMPHAL_OFFSET))(this);
	}
};
