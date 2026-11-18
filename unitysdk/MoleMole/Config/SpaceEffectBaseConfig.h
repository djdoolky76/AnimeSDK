#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_SPACEEFFECTBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4B340)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SpaceEffectBaseConfig_TypeDefinitionIndex = 82198;

	class SpaceEffectBaseConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPACEEFFECTBASECONFIG__CTOR_OFFSET))(this);
		}
	};
}
