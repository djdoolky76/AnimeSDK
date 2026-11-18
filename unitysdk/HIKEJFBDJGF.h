#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;

#define HIKEJFBDJGF_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x146FDA90)
#define HIKEJFBDJGF__CTOR_OFFSET UNITYSDK_OFFSET(0x146FE1A0)

inline static constexpr unsigned int HIKEJFBDJGF_TypeDefinitionIndex = 45482;

class HIKEJFBDJGF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKEJFBDJGF__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::CKENOHMEEGI* FFKBEGIHIGG, ::CKENOHMEEGI* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + HIKEJFBDJGF_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
