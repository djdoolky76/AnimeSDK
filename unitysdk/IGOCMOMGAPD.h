#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int IGOCMOMGAPD_TypeDefinitionIndex = 52086;

enum class IGOCMOMGAPD : ::System::Int32
{
	LookAtAvatarInSector = 2,
	LookAtCameraInSectorWithDefaultParam = 5,
	None = 0,
	LookAtAvatarInSectorWithDefaultParam = 4,
	LookAtCameraInSector = 3,
	ActiveDuringInteraction = 1,
	Custom = 6,
};
