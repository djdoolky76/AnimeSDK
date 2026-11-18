#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFKMGEDEFJD.h"
#include "unitysdk/KCIPADHDIIN.h"

class OAPPHIDCEOA;

#define KMCMELNEAAP_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x15BA1130)
#define KMCMELNEAAP_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x15BA11C0)
#define KMCMELNEAAP_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x15BA1050)
#define KMCMELNEAAP__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA1120)

inline static constexpr unsigned int KMCMELNEAAP_TypeDefinitionIndex = 92519;

class KMCMELNEAAP : public ::KCIPADHDIIN
{
public:
	::OAPPHIDCEOA* JFGADPDPGOM; // 0x10
	::IFKMGEDEFJD EGEEFEBFIHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCMELNEAAP__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCMELNEAAP_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCMELNEAAP_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::KMCMELNEAAP* BBPCBEEHALC()
	{
		return ((::KMCMELNEAAP*(*)())((::PBYTE)hIl2Cpp + KMCMELNEAAP_BBPCBEEHALC_OFFSET))();
	}
};
