#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUILightParam_EAttenuationType_TypeDefinitionIndex = 40231;

	enum class ConfigUILightParam_EAttenuationType : ::System::Int32
	{
		ZeroAttenuation = 2,
		DefaultAttenuation = 0,
		UseSlowAttenuatio = 1,
	};
}
