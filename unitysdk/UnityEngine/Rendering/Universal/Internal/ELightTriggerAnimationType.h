#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ELightTriggerAnimationType_TypeDefinitionIndex = 27329;

	enum class ELightTriggerAnimationType : ::System::Int32
	{
		SparkAnimation = 0,
		NoneAnimation = 1,
		LinearAnimation = 2,
	};
}
