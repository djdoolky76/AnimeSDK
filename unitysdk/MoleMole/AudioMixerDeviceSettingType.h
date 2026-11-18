#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AudioMixerDeviceSettingType_TypeDefinitionIndex = 84170;

	enum class AudioMixerDeviceSettingType : ::System::Int32
	{
		SoundBar = 2,
		Phone = 3,
		HeadPhones = 1,
		None = 0,
		TV = 4,
	};
}
