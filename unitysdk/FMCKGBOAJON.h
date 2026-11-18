#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define FMCKGBOAJON_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x10EC1000)
#define FMCKGBOAJON__CTOR_OFFSET UNITYSDK_OFFSET(0x10EC11F0)

inline static constexpr unsigned int FMCKGBOAJON_TypeDefinitionIndex = 60525;

class FMCKGBOAJON : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCKGBOAJON__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + FMCKGBOAJON_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
