#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define PKLNMPKCOOO_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x1C2BB710)
#define PKLNMPKCOOO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BB950)

inline static constexpr unsigned int PKLNMPKCOOO_TypeDefinitionIndex = 74516;

class PKLNMPKCOOO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLNMPKCOOO__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + PKLNMPKCOOO_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
