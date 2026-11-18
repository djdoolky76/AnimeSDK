#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODHMBDICCBM;

#define ODHMBDICCBM_MDPKAALOMPE_NILCMBLGMMO_OFFSET UNITYSDK_OFFSET(0xE147EA0)
#define ODHMBDICCBM_MDPKAALOMPE__CTOR_OFFSET UNITYSDK_OFFSET(0xE147E90)

inline static constexpr unsigned int ODHMBDICCBM_MDPKAALOMPE_TypeDefinitionIndex = 79444;

class ODHMBDICCBM_MDPKAALOMPE : public ::System::Object
{
public:
	::ODHMBDICCBM* KLHPEBKNIFB; // 0x10
	::System::Boolean BNDKJGPMMLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHMBDICCBM_MDPKAALOMPE__CTOR_OFFSET))(this);
	}

	::System::Void NILCMBLGMMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHMBDICCBM_MDPKAALOMPE_NILCMBLGMMO_OFFSET))(this);
	}
};
