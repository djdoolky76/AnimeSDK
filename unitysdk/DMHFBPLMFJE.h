#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;

#define DMHFBPLMFJE_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x7FC6E80)
#define DMHFBPLMFJE__CTOR_OFFSET UNITYSDK_OFFSET(0x7FC7080)

inline static constexpr unsigned int DMHFBPLMFJE_TypeDefinitionIndex = 44433;

class DMHFBPLMFJE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHFBPLMFJE__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::OAOFCEFPEHP* FFKBEGIHIGG, ::OAOFCEFPEHP* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::OAOFCEFPEHP*, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + DMHFBPLMFJE_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
