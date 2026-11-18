#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int SplineControllerConnectionBehavior_TypeDefinitionIndex = 37632;

	enum class SplineControllerConnectionBehavior : ::System::Int32
	{
		FollowUpOtherwiseRandom = 3,
		CurrentSpline = 0,
		Custom = 4,
		RandomSpline = 2,
		FollowUpSpline = 1,
	};
}
