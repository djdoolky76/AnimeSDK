#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define ODANEOEAENE_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0xB30EED0)
#define ODANEOEAENE__CTOR_OFFSET UNITYSDK_OFFSET(0xB30F2E0)

inline static constexpr unsigned int ODANEOEAENE_TypeDefinitionIndex = 71106;

class ODANEOEAENE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODANEOEAENE__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + ODANEOEAENE_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
