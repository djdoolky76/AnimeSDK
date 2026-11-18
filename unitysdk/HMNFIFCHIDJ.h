#pragma once
#include "unitysdk/unitysdk.h"

#define HMNFIFCHIDJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1537FC50)
#define HMNFIFCHIDJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1537FFB0)
#define HMNFIFCHIDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1537FE00)

inline static constexpr unsigned int HMNFIFCHIDJ_TypeDefinitionIndex = 47166;

class HMNFIFCHIDJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNFIFCHIDJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNFIFCHIDJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNFIFCHIDJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
