#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define DNCABOALACB_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x13E5AD20)
#define DNCABOALACB__CTOR_OFFSET UNITYSDK_OFFSET(0x13E5AE40)

inline static constexpr unsigned int DNCABOALACB_TypeDefinitionIndex = 82973;

class DNCABOALACB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCABOALACB__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + DNCABOALACB_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
