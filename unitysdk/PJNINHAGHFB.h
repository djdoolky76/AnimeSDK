#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define PJNINHAGHFB_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x1B9EA200)
#define PJNINHAGHFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9EA270)

inline static constexpr unsigned int PJNINHAGHFB_TypeDefinitionIndex = 54188;

class PJNINHAGHFB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNINHAGHFB__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + PJNINHAGHFB_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
