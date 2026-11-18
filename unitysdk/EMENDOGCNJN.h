#pragma once
#include "unitysdk/unitysdk.h"

#define EMENDOGCNJN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF9E2C90)
#define EMENDOGCNJN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF9E2E30)
#define EMENDOGCNJN__CTOR_OFFSET UNITYSDK_OFFSET(0xF9E2DD0)

inline static constexpr unsigned int EMENDOGCNJN_TypeDefinitionIndex = 92219;

class EMENDOGCNJN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMENDOGCNJN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMENDOGCNJN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMENDOGCNJN_GDEOPIBNOIN_OFFSET))(this);
	}
};
