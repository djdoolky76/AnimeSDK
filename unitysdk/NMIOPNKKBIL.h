#pragma once
#include "unitysdk/unitysdk.h"

#define NMIOPNKKBIL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x114AE280)
#define NMIOPNKKBIL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x114AE420)
#define NMIOPNKKBIL__CTOR_OFFSET UNITYSDK_OFFSET(0x114AE3C0)

inline static constexpr unsigned int NMIOPNKKBIL_TypeDefinitionIndex = 81508;

class NMIOPNKKBIL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIOPNKKBIL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIOPNKKBIL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIOPNKKBIL_GDEOPIBNOIN_OFFSET))(this);
	}
};
