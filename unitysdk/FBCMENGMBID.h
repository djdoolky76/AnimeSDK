#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define FBCMENGMBID_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x14282FD0)
#define FBCMENGMBID__CTOR_OFFSET UNITYSDK_OFFSET(0x14283050)

inline static constexpr unsigned int FBCMENGMBID_TypeDefinitionIndex = 74518;

class FBCMENGMBID : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCMENGMBID__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + FBCMENGMBID_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
