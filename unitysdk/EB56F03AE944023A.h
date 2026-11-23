#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

#define EB56F03AE944023A__CTOR_OFFSET UNITYSDK_OFFSET(0x2ABECF0)

inline static constexpr unsigned int EB56F03AE944023A_TypeDefinitionIndex = 19184;

class EB56F03AE944023A : public ::System::Object
{
public:
	::System::Guid ED6187AE74CD752F; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB56F03AE944023A__CTOR_OFFSET))(this);
	}
};
