#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ELightTriggerType_TypeDefinitionIndex = 26710;

	enum class ELightTriggerType : ::System::Int32
	{
		CustomType = -2,
		JustOnDay = 2,
		EveningAndNight = 5,
		DayAndEvening = 6,
		Evening = 4,
		AllTime = 7,
		NoTime = 8,
		JustOnNight = 1,
	};
}
