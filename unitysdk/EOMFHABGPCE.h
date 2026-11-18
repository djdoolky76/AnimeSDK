#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"

#define EOMFHABGPCE_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x14185820)
#define EOMFHABGPCE_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x141856F0)
#define EOMFHABGPCE__CTOR_OFFSET UNITYSDK_OFFSET(0x141857D0)

inline static constexpr unsigned int EOMFHABGPCE_TypeDefinitionIndex = 46460;

class EOMFHABGPCE : public ::MDGLNFGCBOJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMFHABGPCE__CTOR_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMFHABGPCE_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMFHABGPCE_EEOOAGEDKLM_OFFSET))(this);
	}
};
