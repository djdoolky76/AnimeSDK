#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ReflectionType_TypeDefinitionIndex = 26143;

	enum class ReflectionType : ::System::Int32
	{
		PlanarReflection = 2,
		ReflectionProbe = 1,
		Cubemap = 0,
	};
}
