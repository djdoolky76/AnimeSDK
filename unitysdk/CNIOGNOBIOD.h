#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHOODDJHJIL.h"

#define CNIOGNOBIOD_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x120442A0)
#define CNIOGNOBIOD_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x120442B0)
#define CNIOGNOBIOD__CTOR_OFFSET UNITYSDK_OFFSET(0x12044960)

inline static constexpr unsigned int CNIOGNOBIOD_TypeDefinitionIndex = 51375;

class CNIOGNOBIOD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIOGNOBIOD__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIOGNOBIOD_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIOGNOBIOD_KMMIPNMJILI_OFFSET))(this);
	}
};
