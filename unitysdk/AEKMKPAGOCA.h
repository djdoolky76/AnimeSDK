#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCPJCJAGGGA;

#define AEKMKPAGOCA_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x16D6A3E0)
#define AEKMKPAGOCA__CTOR_OFFSET UNITYSDK_OFFSET(0x16D6A460)

inline static constexpr unsigned int AEKMKPAGOCA_TypeDefinitionIndex = 50835;

class AEKMKPAGOCA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKMKPAGOCA__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::KCPJCJAGGGA* FFKBEGIHIGG, ::KCPJCJAGGGA* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::KCPJCJAGGGA*, ::KCPJCJAGGGA*))((::PBYTE)hIl2Cpp + AEKMKPAGOCA_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
