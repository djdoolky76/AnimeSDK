#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int TargetComponent_TypeDefinitionIndex = 37493;

	enum class TargetComponent : ::System::Int32
	{
		Transform = 0,
		KinematicRigidbody2D = 2,
		KinematicRigidbody = 1,
	};
}
