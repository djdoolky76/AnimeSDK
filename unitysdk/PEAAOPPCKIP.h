#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;

#define PEAAOPPCKIP_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x1A7ED0B0)
#define PEAAOPPCKIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7ED300)

inline static constexpr unsigned int PEAAOPPCKIP_TypeDefinitionIndex = 80796;

class PEAAOPPCKIP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEAAOPPCKIP__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::OAOFCEFPEHP* FFKBEGIHIGG, ::OAOFCEFPEHP* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::OAOFCEFPEHP*, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + PEAAOPPCKIP_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
