#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define DKHAIBAAFMG_MOAEMMHNELE_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x120890E0)
#define DKHAIBAAFMG_MOAEMMHNELE_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x12089040)
#define DKHAIBAAFMG_MOAEMMHNELE__CTOR_OFFSET UNITYSDK_OFFSET(0x12089030)

inline static constexpr unsigned int DKHAIBAAFMG_MOAEMMHNELE_TypeDefinitionIndex = 38899;

class DKHAIBAAFMG_MOAEMMHNELE : public ::System::Object
{
public:
	::HOCDHMEPPEG DOHGKLMAIJA; // 0x10
	::HOCDHMEPPEG AJHFDMLOGIF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAIBAAFMG_MOAEMMHNELE__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAIBAAFMG_MOAEMMHNELE_LIDNPLMPHAL_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAIBAAFMG_MOAEMMHNELE_AAHMACBDCPN_OFFSET))(this);
	}
};
