#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define DCNCOKFCKHL_JNMDHOLCCPG_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x14994090)
#define DCNCOKFCKHL_JNMDHOLCCPG__CTOR_OFFSET UNITYSDK_OFFSET(0x14994080)

inline static constexpr unsigned int DCNCOKFCKHL_JNMDHOLCCPG_TypeDefinitionIndex = 61142;

class DCNCOKFCKHL_JNMDHOLCCPG : public ::System::Object
{
public:
	::HOCDHMEPPEG BOOGIOBGHPL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNCOKFCKHL_JNMDHOLCCPG__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNCOKFCKHL_JNMDHOLCCPG_LIDNPLMPHAL_OFFSET))(this);
	}
};
