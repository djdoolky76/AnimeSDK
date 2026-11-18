#pragma once
#include "unitysdk/unitysdk.h"

#define FKDOHOIGNIK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x165AFC50)
#define FKDOHOIGNIK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x165AFDB0)
#define FKDOHOIGNIK__CTOR_OFFSET UNITYSDK_OFFSET(0x165AFD90)

inline static constexpr unsigned int FKDOHOIGNIK_TypeDefinitionIndex = 73198;

class FKDOHOIGNIK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOHOIGNIK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOHOIGNIK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOHOIGNIK_GDEOPIBNOIN_OFFSET))(this);
	}
};
