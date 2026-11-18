#pragma once
#include "unitysdk/unitysdk.h"

#define GEPBINOFAIP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1660BD20)
#define GEPBINOFAIP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1660BEA0)
#define GEPBINOFAIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1660BE60)

inline static constexpr unsigned int GEPBINOFAIP_TypeDefinitionIndex = 86979;

class GEPBINOFAIP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPBINOFAIP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPBINOFAIP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPBINOFAIP_GDEOPIBNOIN_OFFSET))(this);
	}
};
