#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputTrackingState_TypeDefinitionIndex = 27661;

	enum class InputTrackingState : ::System::UInt32
	{
		None = 0,
		Position = 1,
		Rotation = 2,
		Velocity = 4,
		AngularVelocity = 8,
		Acceleration = 16,
		AngularAcceleration = 32,
		All = 63,
	};
}
