#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define MPKPMKJBMFK_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x121834B0)
#define MPKPMKJBMFK__CTOR_OFFSET UNITYSDK_OFFSET(0x12183810)

inline static constexpr unsigned int MPKPMKJBMFK_TypeDefinitionIndex = 53081;

class MPKPMKJBMFK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKPMKJBMFK__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + MPKPMKJBMFK_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
