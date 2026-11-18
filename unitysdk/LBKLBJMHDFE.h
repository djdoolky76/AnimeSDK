#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;

#define LBKLBJMHDFE_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x126CB5C0)
#define LBKLBJMHDFE__CTOR_OFFSET UNITYSDK_OFFSET(0x126CB7B0)

inline static constexpr unsigned int LBKLBJMHDFE_TypeDefinitionIndex = 79134;

class LBKLBJMHDFE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKLBJMHDFE__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::OAOFCEFPEHP* FFKBEGIHIGG, ::OAOFCEFPEHP* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::OAOFCEFPEHP*, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + LBKLBJMHDFE_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
