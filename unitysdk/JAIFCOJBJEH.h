#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

#define JAIFCOJBJEH_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x13CA59F0)
#define JAIFCOJBJEH_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x13CA5A80)
#define JAIFCOJBJEH_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x13CA5910)
#define JAIFCOJBJEH__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA59E0)

inline static constexpr unsigned int JAIFCOJBJEH_TypeDefinitionIndex = 38367;

class JAIFCOJBJEH : public ::KCIPADHDIIN
{
public:
	::System::UInt32 JOCOFFGOBND; // 0x10
	::System::UInt32 JOABFILLGDD; // 0x14
	::System::UInt32 FBCBELLFEKI; // 0x18
	::System::UInt32 DLLFBPLMGOB; // 0x1C
	::System::UInt32 EEKAOFHHEGM; // 0x20
	::System::UInt32 FJOIFHFMBCA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIFCOJBJEH__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIFCOJBJEH_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIFCOJBJEH_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::JAIFCOJBJEH* BBPCBEEHALC()
	{
		return ((::JAIFCOJBJEH*(*)())((::PBYTE)hIl2Cpp + JAIFCOJBJEH_BBPCBEEHALC_OFFSET))();
	}
};
