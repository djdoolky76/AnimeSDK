#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define DAADNOINLDK_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x147BE560)
#define DAADNOINLDK__CTOR_OFFSET UNITYSDK_OFFSET(0x147BE5F0)

inline static constexpr unsigned int DAADNOINLDK_TypeDefinitionIndex = 91757;

class DAADNOINLDK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAADNOINLDK__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + DAADNOINLDK_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
