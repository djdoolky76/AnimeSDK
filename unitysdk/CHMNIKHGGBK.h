#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define CHMNIKHGGBK_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x19A09370)
#define CHMNIKHGGBK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A09530)

inline static constexpr unsigned int CHMNIKHGGBK_TypeDefinitionIndex = 67571;

class CHMNIKHGGBK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMNIKHGGBK__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + CHMNIKHGGBK_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
