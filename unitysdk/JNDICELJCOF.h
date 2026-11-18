#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define JNDICELJCOF_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x17630A60)
#define JNDICELJCOF__CTOR_OFFSET UNITYSDK_OFFSET(0x17630AF0)

inline static constexpr unsigned int JNDICELJCOF_TypeDefinitionIndex = 53346;

class JNDICELJCOF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDICELJCOF__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + JNDICELJCOF_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
