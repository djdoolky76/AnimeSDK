#pragma once
#include "unitysdk/unitysdk.h"

#define ECHKLABNIFC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x7FE5DD0)
#define ECHKLABNIFC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x7FE5F30)
#define ECHKLABNIFC__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE5F10)

inline static constexpr unsigned int ECHKLABNIFC_TypeDefinitionIndex = 72902;

class ECHKLABNIFC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHKLABNIFC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHKLABNIFC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHKLABNIFC_GDEOPIBNOIN_OFFSET))(this);
	}
};
