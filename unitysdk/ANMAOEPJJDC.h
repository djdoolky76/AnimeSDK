#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIKKMBHKDAO.h"

#define ANMAOEPJJDC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14C22140)
#define ANMAOEPJJDC_PCEPOEIOFBN_OFFSET UNITYSDK_OFFSET(0x14C22180)
#define ANMAOEPJJDC__CTOR_OFFSET UNITYSDK_OFFSET(0x14C223E0)

inline static constexpr unsigned int ANMAOEPJJDC_TypeDefinitionIndex = 79955;

class ANMAOEPJJDC : public ::CIKKMBHKDAO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMAOEPJJDC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMAOEPJJDC_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PCEPOEIOFBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMAOEPJJDC_PCEPOEIOFBN_OFFSET))(this);
	}
};
