#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCPJCJAGGGA;

#define INPBECBGFIN_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x13C9F750)
#define INPBECBGFIN__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9F7F0)

inline static constexpr unsigned int INPBECBGFIN_TypeDefinitionIndex = 89747;

class INPBECBGFIN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPBECBGFIN__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::KCPJCJAGGGA* FFKBEGIHIGG, ::KCPJCJAGGGA* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::KCPJCJAGGGA*, ::KCPJCJAGGGA*))((::PBYTE)hIl2Cpp + INPBECBGFIN_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
