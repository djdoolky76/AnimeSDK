#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MAEGCCMKDCA;

#define EOBJCENMLNP_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x1724EB10)
#define EOBJCENMLNP__CTOR_OFFSET UNITYSDK_OFFSET(0x1724F040)

inline static constexpr unsigned int EOBJCENMLNP_TypeDefinitionIndex = 80490;

class EOBJCENMLNP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBJCENMLNP__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::MAEGCCMKDCA* FFKBEGIHIGG, ::MAEGCCMKDCA* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::MAEGCCMKDCA*, ::MAEGCCMKDCA*))((::PBYTE)hIl2Cpp + EOBJCENMLNP_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
