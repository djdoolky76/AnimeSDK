#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHOODDJHJIL.h"

#define DEACJHIBIOA_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x19D59B10)
#define DEACJHIBIOA_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x19D59B20)
#define DEACJHIBIOA__CTOR_OFFSET UNITYSDK_OFFSET(0x19D59CD0)

inline static constexpr unsigned int DEACJHIBIOA_TypeDefinitionIndex = 79539;

class DEACJHIBIOA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEACJHIBIOA__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + DEACJHIBIOA_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEACJHIBIOA_KMMIPNMJILI_OFFSET))(this);
	}
};
