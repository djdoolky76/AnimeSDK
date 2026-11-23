#pragma once
#include "unitysdk/unitysdk.h"

namespace E733EA16DCBE16B0
{
	inline static constexpr unsigned int B0878849BC7428D5_TypeDefinitionIndex = 21285;

	enum class B0878849BC7428D5 : ::System::UInt32
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
