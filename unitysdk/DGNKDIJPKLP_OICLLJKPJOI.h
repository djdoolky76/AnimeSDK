#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FHPEOALHKDM.h"

#define DGNKDIJPKLP_OICLLJKPJOI_COMPARE_OFFSET UNITYSDK_OFFSET(0x149A63B0)
#define DGNKDIJPKLP_OICLLJKPJOI__CTOR_OFFSET UNITYSDK_OFFSET(0x149A6420)

inline static constexpr unsigned int DGNKDIJPKLP_OICLLJKPJOI_TypeDefinitionIndex = 73387;

class DGNKDIJPKLP_OICLLJKPJOI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_OICLLJKPJOI__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::FHPEOALHKDM HAAEBCOBKFF, ::FHPEOALHKDM BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::FHPEOALHKDM, ::FHPEOALHKDM))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_OICLLJKPJOI_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
