#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define EHGLBODCDEB_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x16BE2020)
#define EHGLBODCDEB__CTOR_OFFSET UNITYSDK_OFFSET(0x16BE2210)

inline static constexpr unsigned int EHGLBODCDEB_TypeDefinitionIndex = 46937;

class EHGLBODCDEB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGLBODCDEB__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + EHGLBODCDEB_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
