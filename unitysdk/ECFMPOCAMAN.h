#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define ECFMPOCAMAN_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x14140450)
#define ECFMPOCAMAN__CTOR_OFFSET UNITYSDK_OFFSET(0x14140640)

inline static constexpr unsigned int ECFMPOCAMAN_TypeDefinitionIndex = 70409;

class ECFMPOCAMAN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFMPOCAMAN__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + ECFMPOCAMAN_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
