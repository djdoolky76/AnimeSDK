#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyAdvBezierModeEnum_TypeDefinitionIndex = 37504;

	enum class CurvyAdvBezierModeEnum : ::System::Int32
	{
		Direction = 1,
		None = 0,
		Combine = 8,
		Length = 2,
	};
}
