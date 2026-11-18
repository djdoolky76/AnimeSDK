#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCAMERANOISE__CTOR_OFFSET UNITYSDK_OFFSET(0xFFD12E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraNoise_TypeDefinitionIndex = 58964;

	class ConfigCameraNoise : public ::System::Object
	{
	public:
		::System::String* noiseProfilePath; // 0x10
		::System::Single noiseFrequencyGain; // 0x18
		::System::Single noiseAmplitudeGain; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERANOISE__CTOR_OFFSET))(this);
		}
	};
}
