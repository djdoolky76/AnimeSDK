#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DOOBJIPNDJG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E5CF0)

inline static constexpr unsigned int DOOBJIPNDJG_TypeDefinitionIndex = 34051;

class DOOBJIPNDJG : public ::System::Object
{
public:
	::System::UInt64 MEKAFGFKKJD; // 0x10
	::System::UInt64 PMJAEGHHBIP; // 0x18
	::System::UInt64 JPJJJFCMGLL; // 0x20
	::System::UInt64 DJBEEMOOIID; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOBJIPNDJG__CTOR_OFFSET))(this);
	}
};
