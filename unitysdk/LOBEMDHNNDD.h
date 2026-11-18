#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define LOBEMDHNNDD_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x16C6A4C0)
#define LOBEMDHNNDD__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6A870)

inline static constexpr unsigned int LOBEMDHNNDD_TypeDefinitionIndex = 63047;

class LOBEMDHNNDD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBEMDHNNDD__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + LOBEMDHNNDD_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
