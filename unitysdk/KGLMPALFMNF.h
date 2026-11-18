#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define KGLMPALFMNF_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x15B8C130)
#define KGLMPALFMNF__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8C4E0)

inline static constexpr unsigned int KGLMPALFMNF_TypeDefinitionIndex = 39951;

class KGLMPALFMNF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLMPALFMNF__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + KGLMPALFMNF_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
