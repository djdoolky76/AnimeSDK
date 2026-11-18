#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FANBKJPNEDB;

#define EMCCEAJMCIL_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x12363DB0)
#define EMCCEAJMCIL__CTOR_OFFSET UNITYSDK_OFFSET(0x12363E30)

inline static constexpr unsigned int EMCCEAJMCIL_TypeDefinitionIndex = 54220;

class EMCCEAJMCIL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCCEAJMCIL__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::FANBKJPNEDB* FFKBEGIHIGG, ::FANBKJPNEDB* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::FANBKJPNEDB*, ::FANBKJPNEDB*))((::PBYTE)hIl2Cpp + EMCCEAJMCIL_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
