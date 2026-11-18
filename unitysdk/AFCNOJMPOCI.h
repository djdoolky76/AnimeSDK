#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define AFCNOJMPOCI_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x16D720B0)
#define AFCNOJMPOCI__CTOR_OFFSET UNITYSDK_OFFSET(0x16D724C0)

inline static constexpr unsigned int AFCNOJMPOCI_TypeDefinitionIndex = 77472;

class AFCNOJMPOCI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCNOJMPOCI__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + AFCNOJMPOCI_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
