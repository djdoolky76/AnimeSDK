#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHOODDJHJIL.h"

#define PDKLGGOPEJA_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x1B9CB980)
#define PDKLGGOPEJA_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1B9CB990)
#define PDKLGGOPEJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CBB50)

inline static constexpr unsigned int PDKLGGOPEJA_TypeDefinitionIndex = 42302;

class PDKLGGOPEJA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKLGGOPEJA__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKLGGOPEJA_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKLGGOPEJA_KMMIPNMJILI_OFFSET))(this);
	}
};
