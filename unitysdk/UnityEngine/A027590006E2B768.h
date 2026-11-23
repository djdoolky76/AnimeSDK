#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int A027590006E2B768_TypeDefinitionIndex = 20803;

	enum class A027590006E2B768 : ::System::UInt16
	{
		SolveContacts = 1,
		ModifyContacts = 2,
		NotifyTouchFound = 4,
		NotifyTouchPersists = 8,
		NotifyTouchLost = 16,
		NotifyTouchCCD = 32,
		NotifyThresholdForceFound = 64,
		NotifyThresholdForcePersists = 128,
		NotifyThresholdForceLost = 256,
		NotifyContactPoint = 512,
		DetectDiscreteContact = 1024,
		DetectCCDContact = 2048,
		PreSolverVelocity = 4096,
		PostSolverVelocity = 8192,
		ContactEventPose = 16384,
		NextFree = 32768,
		ContactDefault = 1025,
		TriggerDefault = 1044,
	};
}
