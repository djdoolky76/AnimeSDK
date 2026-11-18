#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHOODDJHJIL.h"

#define CKJBLJOCJAC_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x1496F820)
#define CKJBLJOCJAC_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1496F830)
#define CKJBLJOCJAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1496F8E0)

inline static constexpr unsigned int CKJBLJOCJAC_TypeDefinitionIndex = 65626;

class CKJBLJOCJAC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJBLJOCJAC__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJBLJOCJAC_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJBLJOCJAC_KMMIPNMJILI_OFFSET))(this);
	}
};
