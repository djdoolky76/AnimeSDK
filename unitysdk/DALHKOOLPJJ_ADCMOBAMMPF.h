#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DALHKOOLPJJ_ADCMOBAMMPF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1A1CD040)
#define DALHKOOLPJJ_ADCMOBAMMPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CDE40)

inline static constexpr unsigned int DALHKOOLPJJ_ADCMOBAMMPF_TypeDefinitionIndex = 56576;

class DALHKOOLPJJ_ADCMOBAMMPF : public ::System::Object
{
public:
	::System::Int32 MHNIAGLHIBG; // 0x10
	::System::Boolean ILINFIPGHJI; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DALHKOOLPJJ_ADCMOBAMMPF__CTOR_OFFSET))(this);
	}

	::DALHKOOLPJJ_ADCMOBAMMPF* NPOLNFDBOOD()
	{
		return ((::DALHKOOLPJJ_ADCMOBAMMPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DALHKOOLPJJ_ADCMOBAMMPF_NPOLNFDBOOD_OFFSET))(this);
	}
};
