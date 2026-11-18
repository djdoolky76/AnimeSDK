#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraMoveModeData_MoveModeDataPriority_TypeDefinitionIndex = 59784;

	enum class CameraMoveModeData_MoveModeDataPriority : ::System::Byte
	{
		SwitchAvatarOrbital = 98,
		LockTargetOrbital = 97,
		AimMode = 200,
		NormalData = 10,
		MidPriorityData = 99,
		Default = 1,
		MovePlatformOrbital = 80,
		HighPriorityData = 225,
		DragOrbital = 100,
	};
}
