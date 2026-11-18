#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHGOHPEGJKP.h"
#include "unitysdk/System/ValueType.h"

#define CHNLAGKLALB_NDBNFMMCJOK_OFFSET UNITYSDK_OFFSET(0x78E0A0)
#define CHNLAGKLALB__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int CHNLAGKLALB_TypeDefinitionIndex = 70400;

struct alignas(4) CHNLAGKLALB
{
	::IHGOHPEGJKP OJNAOFPCDBC; // 0x10

	::System::Void _ctor(::IHGOHPEGJKP JBJFINAFFKO)
	{
		return ((::System::Void(*)(::PVOID, ::IHGOHPEGJKP))((::PBYTE)hIl2Cpp + CHNLAGKLALB__CTOR_OFFSET))(this, JBJFINAFFKO);
	}

	::System::UInt32 NDBNFMMCJOK()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNLAGKLALB_NDBNFMMCJOK_OFFSET))(this);
	}
};
