#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int CurveTransformTween_TransformMode_TypeDefinitionIndex = 30816;

	enum class CurveTransformTween_TransformMode : ::System::Int32
	{
		Rotation = 1,
		Scale = 2,
		Position = 0,
	};
}
