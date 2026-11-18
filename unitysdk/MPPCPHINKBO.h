#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define MPPCPHINKBO_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x11A328E0)
#define MPPCPHINKBO__CTOR_OFFSET UNITYSDK_OFFSET(0x11A32A90)

inline static constexpr unsigned int MPPCPHINKBO_TypeDefinitionIndex = 88269;

class MPPCPHINKBO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPCPHINKBO__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MPPCPHINKBO_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
