#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

#define OFHBPDFOFPK_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x13A53880)
#define OFHBPDFOFPK_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x13A537F0)
#define OFHBPDFOFPK_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x13A53720)
#define OFHBPDFOFPK__CTOR_OFFSET UNITYSDK_OFFSET(0x13A537E0)

inline static constexpr unsigned int OFHBPDFOFPK_TypeDefinitionIndex = 52955;

class OFHBPDFOFPK : public ::KCIPADHDIIN
{
public:
	::System::Boolean NPIIPAKCOLG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHBPDFOFPK__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHBPDFOFPK_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::OFHBPDFOFPK* BBPCBEEHALC()
	{
		return ((::OFHBPDFOFPK*(*)())((::PBYTE)hIl2Cpp + OFHBPDFOFPK_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHBPDFOFPK_ANEOCOIFDDJ_OFFSET))(this);
	}
};
