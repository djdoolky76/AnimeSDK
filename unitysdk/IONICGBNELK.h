#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABKOPPMAKPH.h"
#include "unitysdk/PGLKPCIELAN.h"

#define IONICGBNELK_AJCIKCEDHBN_OFFSET UNITYSDK_OFFSET(0x13AB2A10)
#define IONICGBNELK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13AB2A50)
#define IONICGBNELK_FJLAFKABJDM_OFFSET UNITYSDK_OFFSET(0x13AB2A90)
#define IONICGBNELK_KFCBPOFDDEG_OFFSET UNITYSDK_OFFSET(0x13AB29F0)
#define IONICGBNELK_MHKKOFEKPHI_OFFSET UNITYSDK_OFFSET(0x13AB2A00)
#define IONICGBNELK__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB2AD0)

inline static constexpr unsigned int IONICGBNELK_TypeDefinitionIndex = 38375;

class IONICGBNELK : public ::PGLKPCIELAN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONICGBNELK__CTOR_OFFSET))(this);
	}

	::System::Boolean KFCBPOFDDEG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IONICGBNELK_KFCBPOFDDEG_OFFSET))(this);
	}

	::ABKOPPMAKPH MHKKOFEKPHI()
	{
		return ((::ABKOPPMAKPH(*)(::PVOID))((::PBYTE)hIl2Cpp + IONICGBNELK_MHKKOFEKPHI_OFFSET))(this);
	}

	::System::Void AJCIKCEDHBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONICGBNELK_AJCIKCEDHBN_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONICGBNELK_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void FJLAFKABJDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONICGBNELK_FJLAFKABJDM_OFFSET))(this);
	}
};
