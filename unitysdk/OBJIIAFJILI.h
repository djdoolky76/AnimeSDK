#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCPJCJAGGGA;

#define OBJIIAFJILI_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x15F57FE0)
#define OBJIIAFJILI__CTOR_OFFSET UNITYSDK_OFFSET(0x15F58100)

inline static constexpr unsigned int OBJIIAFJILI_TypeDefinitionIndex = 50853;

class OBJIIAFJILI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJIIAFJILI__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::KCPJCJAGGGA* FFKBEGIHIGG, ::KCPJCJAGGGA* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::KCPJCJAGGGA*, ::KCPJCJAGGGA*))((::PBYTE)hIl2Cpp + OBJIIAFJILI_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
