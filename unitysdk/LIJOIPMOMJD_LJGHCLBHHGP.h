#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
class LIJOIPMOMJD;

#define LIJOIPMOMJD_LJGHCLBHHGP_HCGNMCLIJGD_OFFSET UNITYSDK_OFFSET(0x16C597B0)
#define LIJOIPMOMJD_LJGHCLBHHGP_INFFGECEPJC_OFFSET UNITYSDK_OFFSET(0x16C59430)
#define LIJOIPMOMJD_LJGHCLBHHGP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C59420)

inline static constexpr unsigned int LIJOIPMOMJD_LJGHCLBHHGP_TypeDefinitionIndex = 91364;

class LIJOIPMOMJD_LJGHCLBHHGP : public ::System::Object
{
public:
	::LIJOIPMOMJD* KLHPEBKNIFB; // 0x10
	::BPHGNMNLLHF* EGFEKHEDPFL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJOIPMOMJD_LJGHCLBHHGP__CTOR_OFFSET))(this);
	}

	::System::Void INFFGECEPJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJOIPMOMJD_LJGHCLBHHGP_INFFGECEPJC_OFFSET))(this);
	}

	::System::Void HCGNMCLIJGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJOIPMOMJD_LJGHCLBHHGP_HCGNMCLIJGD_OFFSET))(this);
	}
};
