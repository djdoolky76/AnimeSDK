#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define AKMNFKAEMHN_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x16D8D590)
#define AKMNFKAEMHN__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8D780)

inline static constexpr unsigned int AKMNFKAEMHN_TypeDefinitionIndex = 74576;

class AKMNFKAEMHN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMNFKAEMHN__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + AKMNFKAEMHN_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
