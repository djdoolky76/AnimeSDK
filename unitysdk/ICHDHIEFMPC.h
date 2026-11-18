#pragma once
#include "unitysdk/unitysdk.h"

#define ICHDHIEFMPC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xEA134A0)
#define ICHDHIEFMPC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xEA135F0)
#define ICHDHIEFMPC__CTOR_OFFSET UNITYSDK_OFFSET(0xEA135E0)

inline static constexpr unsigned int ICHDHIEFMPC_TypeDefinitionIndex = 55669;

class ICHDHIEFMPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHDHIEFMPC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHDHIEFMPC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHDHIEFMPC_GDEOPIBNOIN_OFFSET))(this);
	}
};
