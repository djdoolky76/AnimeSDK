#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define DNCMGAGIHPH_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x12092B10)
#define DNCMGAGIHPH__CTOR_OFFSET UNITYSDK_OFFSET(0x12092D00)

inline static constexpr unsigned int DNCMGAGIHPH_TypeDefinitionIndex = 69945;

class DNCMGAGIHPH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCMGAGIHPH__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + DNCMGAGIHPH_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
