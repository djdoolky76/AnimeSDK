#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define JOGLFADBILG_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x14FC5250)
#define JOGLFADBILG__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC53E0)

inline static constexpr unsigned int JOGLFADBILG_TypeDefinitionIndex = 44333;

class JOGLFADBILG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGLFADBILG__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + JOGLFADBILG_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
