#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define GMIAKFJDKBB_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x13D6B350)
#define GMIAKFJDKBB__CTOR_OFFSET UNITYSDK_OFFSET(0x13D6B540)

inline static constexpr unsigned int GMIAKFJDKBB_TypeDefinitionIndex = 53284;

class GMIAKFJDKBB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIAKFJDKBB__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + GMIAKFJDKBB_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
