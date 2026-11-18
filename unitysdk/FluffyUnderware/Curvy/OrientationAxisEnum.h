#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int OrientationAxisEnum_TypeDefinitionIndex = 37464;

	enum class OrientationAxisEnum : ::System::Int32
	{
		Down = 1,
		Left = 4,
		Up = 0,
		Backward = 3,
		Forward = 2,
		Right = 5,
	};
}
