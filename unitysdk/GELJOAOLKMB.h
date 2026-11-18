#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GELJOAOLKMB__CTOR_OFFSET UNITYSDK_OFFSET(0x116EB900)

inline static constexpr unsigned int GELJOAOLKMB_TypeDefinitionIndex = 77500;

class GELJOAOLKMB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELJOAOLKMB__CTOR_OFFSET))(this);
	}
};
