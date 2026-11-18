#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int ContourOrientation_TypeDefinitionIndex = 27145;

	enum class ContourOrientation : ::System::Int32
	{
		CounterClockwise = 2,
		Clockwise = 1,
		Original = 0,
	};
}
