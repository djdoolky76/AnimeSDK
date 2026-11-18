#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int InterpCurveMode_TypeDefinitionIndex = 36344;

	enum class InterpCurveMode : ::System::Byte
	{
		Linear = 0,
		Cubic = 1,
		Constant = 2,
		Bezier = 3,
	};
}
