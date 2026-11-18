#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILMKONAJBGC;

#define ILMKONAJBGC_FNDOHCHJNNC_GMHNHBFPMCO_OFFSET UNITYSDK_OFFSET(0x14A2C110)
#define ILMKONAJBGC_FNDOHCHJNNC__CTOR_OFFSET UNITYSDK_OFFSET(0x14A2C100)

inline static constexpr unsigned int ILMKONAJBGC_FNDOHCHJNNC_TypeDefinitionIndex = 88931;

class ILMKONAJBGC_FNDOHCHJNNC : public ::System::Object
{
public:
	::ILMKONAJBGC* KLHPEBKNIFB; // 0x10
	::System::Int32 NACGJJKHEJE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMKONAJBGC_FNDOHCHJNNC__CTOR_OFFSET))(this);
	}

	::System::Void GMHNHBFPMCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMKONAJBGC_FNDOHCHJNNC_GMHNHBFPMCO_OFFSET))(this);
	}
};
