#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FANBKJPNEDB;

#define MEAPGMLPLND_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x10740B60)
#define MEAPGMLPLND__CTOR_OFFSET UNITYSDK_OFFSET(0x10740BE0)

inline static constexpr unsigned int MEAPGMLPLND_TypeDefinitionIndex = 49917;

class MEAPGMLPLND : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAPGMLPLND__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::FANBKJPNEDB* FFKBEGIHIGG, ::FANBKJPNEDB* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::FANBKJPNEDB*, ::FANBKJPNEDB*))((::PBYTE)hIl2Cpp + MEAPGMLPLND_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
