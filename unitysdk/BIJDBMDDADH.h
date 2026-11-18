#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define BIJDBMDDADH_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x1856BC30)
#define BIJDBMDDADH__CTOR_OFFSET UNITYSDK_OFFSET(0x1856C1B0)

inline static constexpr unsigned int BIJDBMDDADH_TypeDefinitionIndex = 50965;

class BIJDBMDDADH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJDBMDDADH__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + BIJDBMDDADH_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
