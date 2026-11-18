#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define GGNEHGIAKHM_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x15CE2810)
#define GGNEHGIAKHM__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE2950)

inline static constexpr unsigned int GGNEHGIAKHM_TypeDefinitionIndex = 65899;

class GGNEHGIAKHM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNEHGIAKHM__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + GGNEHGIAKHM_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
