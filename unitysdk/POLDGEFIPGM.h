#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define POLDGEFIPGM_GCHEIMEJMPM_OFFSET UNITYSDK_OFFSET(0x7506B0)
#define POLDGEFIPGM_JFILJACNPLL_OFFSET UNITYSDK_OFFSET(0x7506C0)
#define POLDGEFIPGM_PGGBFMFACCE_OFFSET UNITYSDK_OFFSET(0x718D80)

inline static constexpr unsigned int POLDGEFIPGM_TypeDefinitionIndex = 48030;

struct alignas(4) POLDGEFIPGM
{
	::System::Int32 MALMMOGKKPB; // 0x10
	::System::Int32 ACHHEEKBJKB; // 0x14

	::System::Boolean GCHEIMEJMPM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POLDGEFIPGM_GCHEIMEJMPM_OFFSET))(this);
	}

	::System::Boolean JFILJACNPLL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POLDGEFIPGM_JFILJACNPLL_OFFSET))(this);
	}

	::System::Boolean PGGBFMFACCE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POLDGEFIPGM_PGGBFMFACCE_OFFSET))(this);
	}
};
