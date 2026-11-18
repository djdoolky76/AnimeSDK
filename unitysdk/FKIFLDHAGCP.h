#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define FKIFLDHAGCP_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x15E6AB40)
#define FKIFLDHAGCP__CTOR_OFFSET UNITYSDK_OFFSET(0x15E6AC80)

inline static constexpr unsigned int FKIFLDHAGCP_TypeDefinitionIndex = 80376;

class FKIFLDHAGCP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIFLDHAGCP__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + FKIFLDHAGCP_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
