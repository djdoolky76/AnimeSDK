#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define FNKDJECKDPO_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x125B6F30)
#define FNKDJECKDPO__CTOR_OFFSET UNITYSDK_OFFSET(0x125B6FE0)

inline static constexpr unsigned int FNKDJECKDPO_TypeDefinitionIndex = 62626;

class FNKDJECKDPO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKDJECKDPO__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + FNKDJECKDPO_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
