#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHOODDJHJIL.h"

#define LNAMIFHGOEN_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x18510650)
#define LNAMIFHGOEN_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x18510660)
#define LNAMIFHGOEN__CTOR_OFFSET UNITYSDK_OFFSET(0x185109E0)

inline static constexpr unsigned int LNAMIFHGOEN_TypeDefinitionIndex = 65622;

class LNAMIFHGOEN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAMIFHGOEN__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAMIFHGOEN_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAMIFHGOEN_KMMIPNMJILI_OFFSET))(this);
	}
};
