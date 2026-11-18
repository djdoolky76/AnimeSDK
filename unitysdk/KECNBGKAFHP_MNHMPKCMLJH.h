#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JPMACEGMIOC;
class KECNBGKAFHP;

#define KECNBGKAFHP_MNHMPKCMLJH_HEPONPMPAIJ_OFFSET UNITYSDK_OFFSET(0x157E2050)
#define KECNBGKAFHP_MNHMPKCMLJH__CTOR_OFFSET UNITYSDK_OFFSET(0x157E2040)

inline static constexpr unsigned int KECNBGKAFHP_MNHMPKCMLJH_TypeDefinitionIndex = 65122;

class KECNBGKAFHP_MNHMPKCMLJH : public ::System::Object
{
public:
	::KECNBGKAFHP* KLHPEBKNIFB; // 0x10
	::JPMACEGMIOC* CAFLBKKGMAA; // 0x18
	::System::Boolean KKNGEJAAKAC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP_MNHMPKCMLJH__CTOR_OFFSET))(this);
	}

	::System::Void HEPONPMPAIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP_MNHMPKCMLJH_HEPONPMPAIJ_OFFSET))(this);
	}
};
