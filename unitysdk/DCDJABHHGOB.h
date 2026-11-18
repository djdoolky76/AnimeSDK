#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBEPKELNDPC.h"
#include "unitysdk/KHOODDJHJIL.h"

#define DCDJABHHGOB_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x19D527E0)
#define DCDJABHHGOB_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x19D527F0)
#define DCDJABHHGOB__CTOR_OFFSET UNITYSDK_OFFSET(0x19D52830)

inline static constexpr unsigned int DCDJABHHGOB_TypeDefinitionIndex = 53307;

class DCDJABHHGOB : public ::KBEPKELNDPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDJABHHGOB__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDJABHHGOB_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDJABHHGOB_KMMIPNMJILI_OFFSET))(this);
	}
};
