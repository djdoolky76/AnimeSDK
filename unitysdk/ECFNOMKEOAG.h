#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHOODDJHJIL.h"

#define ECFNOMKEOAG_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x1588F920)
#define ECFNOMKEOAG_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1588F930)
#define ECFNOMKEOAG__CTOR_OFFSET UNITYSDK_OFFSET(0x15890020)

inline static constexpr unsigned int ECFNOMKEOAG_TypeDefinitionIndex = 74740;

class ECFNOMKEOAG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFNOMKEOAG__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFNOMKEOAG_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFNOMKEOAG_KMMIPNMJILI_OFFSET))(this);
	}
};
