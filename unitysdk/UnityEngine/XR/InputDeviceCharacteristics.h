#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputDeviceCharacteristics_TypeDefinitionIndex = 27660;

	enum class InputDeviceCharacteristics : ::System::UInt32
	{
		None = 0,
		HeadMounted = 1,
		Camera = 2,
		HeldInHand = 4,
		HandTracking = 8,
		EyeTracking = 16,
		TrackedDevice = 32,
		Controller = 64,
		TrackingReference = 128,
		Left = 256,
		Right = 512,
		Simulated6DOF = 1024,
	};
}
