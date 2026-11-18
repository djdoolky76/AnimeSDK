#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FANBKJPNEDB;

#define EOKHGFGEMKO_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x16168220)
#define EOKHGFGEMKO__CTOR_OFFSET UNITYSDK_OFFSET(0x161682A0)

inline static constexpr unsigned int EOKHGFGEMKO_TypeDefinitionIndex = 44228;

class EOKHGFGEMKO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKHGFGEMKO__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::FANBKJPNEDB* FFKBEGIHIGG, ::FANBKJPNEDB* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::FANBKJPNEDB*, ::FANBKJPNEDB*))((::PBYTE)hIl2Cpp + EOKHGFGEMKO_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
