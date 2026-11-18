#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MAEGCCMKDCA;

#define BDNGPBCNJNI_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0xFF67270)
#define BDNGPBCNJNI__CTOR_OFFSET UNITYSDK_OFFSET(0xFF677A0)

inline static constexpr unsigned int BDNGPBCNJNI_TypeDefinitionIndex = 70817;

class BDNGPBCNJNI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNGPBCNJNI__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::MAEGCCMKDCA* FFKBEGIHIGG, ::MAEGCCMKDCA* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::MAEGCCMKDCA*, ::MAEGCCMKDCA*))((::PBYTE)hIl2Cpp + BDNGPBCNJNI_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
