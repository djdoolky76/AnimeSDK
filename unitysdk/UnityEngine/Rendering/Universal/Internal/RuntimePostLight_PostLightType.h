#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int RuntimePostLight_PostLightType_TypeDefinitionIndex = 26480;

	enum class RuntimePostLight_PostLightType : ::System::Int32
	{
		AO = 1,
		Light = 0,
	};
}
