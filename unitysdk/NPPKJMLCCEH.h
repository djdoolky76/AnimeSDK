#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FANBKJPNEDB;

#define NPPKJMLCCEH_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0xEEB3270)
#define NPPKJMLCCEH__CTOR_OFFSET UNITYSDK_OFFSET(0xEEB32F0)

inline static constexpr unsigned int NPPKJMLCCEH_TypeDefinitionIndex = 63459;

class NPPKJMLCCEH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPKJMLCCEH__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::FANBKJPNEDB* FFKBEGIHIGG, ::FANBKJPNEDB* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::FANBKJPNEDB*, ::FANBKJPNEDB*))((::PBYTE)hIl2Cpp + NPPKJMLCCEH_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
