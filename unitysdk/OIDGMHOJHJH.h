#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCCMPEIHJMN.h"

#define OIDGMHOJHJH_CKHKGAKDCAJ_OFFSET UNITYSDK_OFFSET(0x12933300)
#define OIDGMHOJHJH__CTOR_OFFSET UNITYSDK_OFFSET(0x129331A0)

inline static constexpr unsigned int OIDGMHOJHJH_TypeDefinitionIndex = 80802;

class OIDGMHOJHJH : public ::BCCMPEIHJMN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDGMHOJHJH__CTOR_OFFSET))(this);
	}

	::System::Void CKHKGAKDCAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDGMHOJHJH_CKHKGAKDCAJ_OFFSET))(this);
	}
};
