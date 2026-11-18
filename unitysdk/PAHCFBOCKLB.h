#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;

#define PAHCFBOCKLB_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x172ED7B0)
#define PAHCFBOCKLB__CTOR_OFFSET UNITYSDK_OFFSET(0x172EDC80)

inline static constexpr unsigned int PAHCFBOCKLB_TypeDefinitionIndex = 43623;

class PAHCFBOCKLB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCFBOCKLB__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::OAOFCEFPEHP* FFKBEGIHIGG, ::OAOFCEFPEHP* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::OAOFCEFPEHP*, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + PAHCFBOCKLB_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
