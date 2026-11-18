#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define OBPNAPIGIEK_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x14F607F0)
#define OBPNAPIGIEK__CTOR_OFFSET UNITYSDK_OFFSET(0x14F60870)

inline static constexpr unsigned int OBPNAPIGIEK_TypeDefinitionIndex = 63744;

class OBPNAPIGIEK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPNAPIGIEK__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + OBPNAPIGIEK_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
