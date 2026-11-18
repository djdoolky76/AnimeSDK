#pragma once
#include "unitysdk/unitysdk.h"

#define MCDHGNNPMNC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A635ED0)
#define MCDHGNNPMNC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A636070)
#define MCDHGNNPMNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A636010)

inline static constexpr unsigned int MCDHGNNPMNC_TypeDefinitionIndex = 41303;

class MCDHGNNPMNC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDHGNNPMNC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDHGNNPMNC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDHGNNPMNC_GDEOPIBNOIN_OFFSET))(this);
	}
};
