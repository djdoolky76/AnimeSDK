#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJJBBOIFFPC.h"

#define FKBEDOLPPDC_GMPAEJJAJAH_OFFSET UNITYSDK_OFFSET(0x14AD83C0)
#define FKBEDOLPPDC_JNABFFDGEDM_OFFSET UNITYSDK_OFFSET(0x14AD82C0)
#define FKBEDOLPPDC__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD84C0)

inline static constexpr unsigned int FKBEDOLPPDC_TypeDefinitionIndex = 85772;

class FKBEDOLPPDC : public ::MJJBBOIFFPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBEDOLPPDC__CTOR_OFFSET))(this);
	}

	::System::Single JNABFFDGEDM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBEDOLPPDC_JNABFFDGEDM_OFFSET))(this);
	}

	::System::Single GMPAEJJAJAH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBEDOLPPDC_GMPAEJJAJAH_OFFSET))(this);
	}
};
