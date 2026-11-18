#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define DODBNACEGIC_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x7FDCF40)
#define DODBNACEGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x7FDD290)

inline static constexpr unsigned int DODBNACEGIC_TypeDefinitionIndex = 68118;

class DODBNACEGIC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DODBNACEGIC__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + DODBNACEGIC_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
