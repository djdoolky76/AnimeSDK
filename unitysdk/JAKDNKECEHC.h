#pragma once
#include "unitysdk/unitysdk.h"

#define JAKDNKECEHC_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x130653D0)
#define JAKDNKECEHC_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x13065540)
#define JAKDNKECEHC__CTOR_OFFSET UNITYSDK_OFFSET(0x130653B0)

inline static constexpr unsigned int JAKDNKECEHC_TypeDefinitionIndex = 72417;

class JAKDNKECEHC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAKDNKECEHC__CTOR_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAKDNKECEHC_DFJPMOOOLHM_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void PBGJKMAEINN(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAKDNKECEHC_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI);
	}
};
