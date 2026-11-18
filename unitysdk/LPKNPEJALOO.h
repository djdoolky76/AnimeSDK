#pragma once
#include "unitysdk/unitysdk.h"

#define LPKNPEJALOO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15689A00)
#define LPKNPEJALOO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15689BA0)
#define LPKNPEJALOO__CTOR_OFFSET UNITYSDK_OFFSET(0x15689B40)

inline static constexpr unsigned int LPKNPEJALOO_TypeDefinitionIndex = 82176;

class LPKNPEJALOO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKNPEJALOO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKNPEJALOO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKNPEJALOO_GDEOPIBNOIN_OFFSET))(this);
	}
};
