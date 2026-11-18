#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int ScePadTriggerEffectState_TypeDefinitionIndex = 68869;

enum class ScePadTriggerEffectState : ::System::Int32
{
	Intercepted = -1,
	Off = 0,
	WeaponFiring = 5,
	VibrationStandby = 6,
	FeedbackActive = 2,
	WeaponStandby = 3,
	FeedbackStandby = 1,
	VibrationActive = 7,
	WeaponPulling = 4,
};
