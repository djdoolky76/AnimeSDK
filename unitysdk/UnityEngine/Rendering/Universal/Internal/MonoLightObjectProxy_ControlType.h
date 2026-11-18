#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int MonoLightObjectProxy_ControlType_TypeDefinitionIndex = 27312;

	enum class MonoLightObjectProxy_ControlType : ::System::Int32
	{
		LocalLight = 0,
		BoxVolumetricFog = 1,
	};
}
