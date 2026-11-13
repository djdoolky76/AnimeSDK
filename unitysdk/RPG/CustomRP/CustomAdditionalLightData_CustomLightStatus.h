#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomAdditionalLightData_CustomLightStatus_TypeDefinitionIndex = 38641;

	enum class CustomAdditionalLightData_CustomLightStatus : ::System::Int32
	{
		Off = 0,
		On = 1,
		FadeOut = 2,
		FadeIn = 3,
	};
}
