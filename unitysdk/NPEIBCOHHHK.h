#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCPJCJAGGGA;

#define NPEIBCOHHHK_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x11FC5520)
#define NPEIBCOHHHK__CTOR_OFFSET UNITYSDK_OFFSET(0x11FC5630)

inline static constexpr unsigned int NPEIBCOHHHK_TypeDefinitionIndex = 54295;

class NPEIBCOHHHK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEIBCOHHHK__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::KCPJCJAGGGA* FFKBEGIHIGG, ::KCPJCJAGGGA* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::KCPJCJAGGGA*, ::KCPJCJAGGGA*))((::PBYTE)hIl2Cpp + NPEIBCOHHHK_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
