#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyUpdateMethod_TypeDefinitionIndex = 37538;

	enum class CurvyUpdateMethod : ::System::Int32
	{
		Manual = 3,
		Update = 0,
		Stop = 4,
		LateUpdate = 1,
		FixedUpdate = 2,
	};
}
