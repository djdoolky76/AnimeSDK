#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int Quantization_TypeDefinitionIndex = 69173;

	enum class Quantization : ::System::Int32
	{
		DragTwoPoint = 5,
		DragDeltaX = 1,
		ScrollDeltaX = 3,
		None = 0,
		ScrollDeltaY = 4,
		DragDeltaY = 2,
	};
}
