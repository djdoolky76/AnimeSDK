#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class MPBDNENJMOL;

#define MPBDNENJMOL_OKBHNLOCHII_DISPOSE_OFFSET UNITYSDK_OFFSET(0x785A20)
#define MPBDNENJMOL_OKBHNLOCHII__CTOR_OFFSET UNITYSDK_OFFSET(0x785A10)

inline static constexpr unsigned int MPBDNENJMOL_OKBHNLOCHII_TypeDefinitionIndex = 84354;

struct alignas(8) MPBDNENJMOL_OKBHNLOCHII
{
	::MPBDNENJMOL* HDNKMBCIOHD; // 0x10

	::System::Void _ctor(::MPBDNENJMOL* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MPBDNENJMOL*))((::PBYTE)hIl2Cpp + MPBDNENJMOL_OKBHNLOCHII__CTOR_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPBDNENJMOL_OKBHNLOCHII_DISPOSE_OFFSET))(this);
	}
};
