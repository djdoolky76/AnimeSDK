#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define MABOAFDFFPF_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x1568C3C0)
#define MABOAFDFFPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1568C5C0)

inline static constexpr unsigned int MABOAFDFFPF_TypeDefinitionIndex = 64947;

class MABOAFDFFPF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABOAFDFFPF__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MABOAFDFFPF_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
