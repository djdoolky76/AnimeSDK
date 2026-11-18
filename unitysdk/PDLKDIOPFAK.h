#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define PDLKDIOPFAK_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x17315B40)
#define PDLKDIOPFAK__CTOR_OFFSET UNITYSDK_OFFSET(0x17315BD0)

inline static constexpr unsigned int PDLKDIOPFAK_TypeDefinitionIndex = 82080;

class PDLKDIOPFAK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDLKDIOPFAK__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + PDLKDIOPFAK_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
