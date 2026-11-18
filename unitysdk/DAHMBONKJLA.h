#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define DAHMBONKJLA_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x14986460)
#define DAHMBONKJLA__CTOR_OFFSET UNITYSDK_OFFSET(0x14986810)

inline static constexpr unsigned int DAHMBONKJLA_TypeDefinitionIndex = 81308;

class DAHMBONKJLA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHMBONKJLA__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + DAHMBONKJLA_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
