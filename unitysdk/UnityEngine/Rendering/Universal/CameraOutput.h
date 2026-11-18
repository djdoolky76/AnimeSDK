#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CameraOutput_TypeDefinitionIndex = 26879;

	enum class CameraOutput : ::System::Int32
	{
		Texture = 1,
		Camera = 0,
		Screen = 0,
	};
}
