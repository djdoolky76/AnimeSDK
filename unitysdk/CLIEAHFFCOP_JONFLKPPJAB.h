#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CLIEAHFFCOP;

#define CLIEAHFFCOP_JONFLKPPJAB_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0x14572580)
#define CLIEAHFFCOP_JONFLKPPJAB__CTOR_OFFSET UNITYSDK_OFFSET(0x145724E0)

inline static constexpr unsigned int CLIEAHFFCOP_JONFLKPPJAB_TypeDefinitionIndex = 79636;

class CLIEAHFFCOP_JONFLKPPJAB : public ::System::Object
{
public:
	::CLIEAHFFCOP* KLHPEBKNIFB; // 0x10
	::System::Int32 AGFCBMIFNMN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIEAHFFCOP_JONFLKPPJAB__CTOR_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIEAHFFCOP_JONFLKPPJAB_MJMKFFANPBL_OFFSET))(this);
	}
};
