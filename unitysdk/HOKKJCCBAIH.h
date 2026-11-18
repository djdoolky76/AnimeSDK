#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHOODDJHJIL.h"

#define HOKKJCCBAIH_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x1470CAD0)
#define HOKKJCCBAIH_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1470CAE0)
#define HOKKJCCBAIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1470CDF0)

inline static constexpr unsigned int HOKKJCCBAIH_TypeDefinitionIndex = 55388;

class HOKKJCCBAIH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKKJCCBAIH__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKKJCCBAIH_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKKJCCBAIH_KMMIPNMJILI_OFFSET))(this);
	}
};
