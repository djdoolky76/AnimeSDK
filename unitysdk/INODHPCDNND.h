#pragma once
#include "unitysdk/unitysdk.h"

#define INODHPCDNND_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x160B6020)
#define INODHPCDNND_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x160B6180)
#define INODHPCDNND__CTOR_OFFSET UNITYSDK_OFFSET(0x160B6160)

inline static constexpr unsigned int INODHPCDNND_TypeDefinitionIndex = 83702;

class INODHPCDNND
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INODHPCDNND__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INODHPCDNND_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INODHPCDNND_GDEOPIBNOIN_OFFSET))(this);
	}
};
