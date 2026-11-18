#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define ICONOHEAGAP_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x15BF9070)
#define ICONOHEAGAP__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF9230)

inline static constexpr unsigned int ICONOHEAGAP_TypeDefinitionIndex = 89458;

class ICONOHEAGAP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICONOHEAGAP__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + ICONOHEAGAP_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
