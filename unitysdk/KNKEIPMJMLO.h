#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCPJCJAGGGA;

#define KNKEIPMJMLO_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x15BA5730)
#define KNKEIPMJMLO__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA5AB0)

inline static constexpr unsigned int KNKEIPMJMLO_TypeDefinitionIndex = 50761;

class KNKEIPMJMLO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKEIPMJMLO__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::KCPJCJAGGGA* FFKBEGIHIGG, ::KCPJCJAGGGA* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::KCPJCJAGGGA*, ::KCPJCJAGGGA*))((::PBYTE)hIl2Cpp + KNKEIPMJMLO_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
