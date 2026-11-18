#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MAOFHEPOEPE;

#define MAOFHEPOEPE_EPOPFNBGMME_NOIFDPGDNCN_OFFSET UNITYSDK_OFFSET(0xD4429C0)
#define MAOFHEPOEPE_EPOPFNBGMME__CTOR_OFFSET UNITYSDK_OFFSET(0xD4429B0)

inline static constexpr unsigned int MAOFHEPOEPE_EPOPFNBGMME_TypeDefinitionIndex = 83250;

class MAOFHEPOEPE_EPOPFNBGMME : public ::System::Object
{
public:
	::MAOFHEPOEPE* KLHPEBKNIFB; // 0x10
	::System::Boolean EBGGFHEIKJA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOFHEPOEPE_EPOPFNBGMME__CTOR_OFFSET))(this);
	}

	::System::Void NOIFDPGDNCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOFHEPOEPE_EPOPFNBGMME_NOIFDPGDNCN_OFFSET))(this);
	}
};
