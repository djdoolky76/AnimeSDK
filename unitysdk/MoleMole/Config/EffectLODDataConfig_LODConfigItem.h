#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_EFFECTLODDATACONFIG_LODCONFIGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19251AF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectLODDataConfig_LODConfigItem_TypeDefinitionIndex = 92883;

	class EffectLODDataConfig_LODConfigItem : public ::System::Object
	{
	public:
		::System::Single emissionRate; // 0x10
		::System::Int32 alphaThresholdParticles; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLODDATACONFIG_LODCONFIGITEM__CTOR_OFFSET))(this);
		}
	};
}
