#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CubeLightBakeOnly_NamedFace_TypeDefinitionIndex = 27345;

	enum class CubeLightBakeOnly_NamedFace : ::System::Int32
	{
		Front = 1,
		Bottom = 5,
		Right = 0,
		Top = 4,
		Left = 2,
		Back = 3,
	};
}
