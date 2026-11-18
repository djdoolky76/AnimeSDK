#pragma once
#include "unitysdk/unitysdk.h"

#define GDOJLPBAMMC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x116E59F0)
#define GDOJLPBAMMC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x116E5B40)
#define GDOJLPBAMMC__CTOR_OFFSET UNITYSDK_OFFSET(0x116E5B30)

inline static constexpr unsigned int GDOJLPBAMMC_TypeDefinitionIndex = 73100;

class GDOJLPBAMMC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOJLPBAMMC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOJLPBAMMC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOJLPBAMMC_GDEOPIBNOIN_OFFSET))(this);
	}
};
