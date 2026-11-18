#pragma once
#include "unitysdk/unitysdk.h"

#define KELPMNCJJHG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13C54610)
#define KELPMNCJJHG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13C54770)
#define KELPMNCJJHG__CTOR_OFFSET UNITYSDK_OFFSET(0x13C54750)

inline static constexpr unsigned int KELPMNCJJHG_TypeDefinitionIndex = 79440;

class KELPMNCJJHG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELPMNCJJHG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELPMNCJJHG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELPMNCJJHG_GDEOPIBNOIN_OFFSET))(this);
	}
};
