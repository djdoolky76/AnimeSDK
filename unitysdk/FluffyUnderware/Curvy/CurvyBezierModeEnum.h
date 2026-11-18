#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyBezierModeEnum_TypeDefinitionIndex = 37505;

	enum class CurvyBezierModeEnum : ::System::Int32
	{
		Combine = 8,
		Direction = 1,
		None = 0,
		Length = 2,
		Connections = 4,
	};
}
