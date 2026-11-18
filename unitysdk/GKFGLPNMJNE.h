#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define GKFGLPNMJNE_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x14CF5660)
#define GKFGLPNMJNE__CTOR_OFFSET UNITYSDK_OFFSET(0x14CF5A10)

inline static constexpr unsigned int GKFGLPNMJNE_TypeDefinitionIndex = 82441;

class GKFGLPNMJNE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFGLPNMJNE__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + GKFGLPNMJNE_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
