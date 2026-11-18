#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHOODDJHJIL.h"

#define LBAPMGKIKFK_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x17738110)
#define LBAPMGKIKFK_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x17738120)
#define LBAPMGKIKFK__CTOR_OFFSET UNITYSDK_OFFSET(0x17738220)

inline static constexpr unsigned int LBAPMGKIKFK_TypeDefinitionIndex = 84396;

class LBAPMGKIKFK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAPMGKIKFK__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAPMGKIKFK_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAPMGKIKFK_KMMIPNMJILI_OFFSET))(this);
	}
};
