#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

#define AFHCGFKBHAA_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x11B924B0)
#define AFHCGFKBHAA_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x11B92540)
#define AFHCGFKBHAA_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x11B923D0)
#define AFHCGFKBHAA__CTOR_OFFSET UNITYSDK_OFFSET(0x11B924A0)

inline static constexpr unsigned int AFHCGFKBHAA_TypeDefinitionIndex = 75027;

class AFHCGFKBHAA : public ::LICBHCFJLNF
{
public:
	::System::UInt32 MNAIIBHLHMA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHCGFKBHAA__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHCGFKBHAA_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHCGFKBHAA_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::AFHCGFKBHAA* BBPCBEEHALC()
	{
		return ((::AFHCGFKBHAA*(*)())((::PBYTE)hIl2Cpp + AFHCGFKBHAA_BBPCBEEHALC_OFFSET))();
	}
};
