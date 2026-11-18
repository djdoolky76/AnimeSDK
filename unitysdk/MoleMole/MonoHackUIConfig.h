#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoGuideUIBaseConfig.h"

#define MOLEMOLE_MONOHACKUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10D40840)

namespace MoleMole
{
	inline static constexpr unsigned int MonoHackUIConfig_TypeDefinitionIndex = 80685;

	class MonoHackUIConfig : public ::MoleMole::MonoGuideUIBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHACKUICONFIG__CTOR_OFFSET))(this);
		}
	};
}
