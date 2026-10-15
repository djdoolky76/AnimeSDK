#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class CameraDataAndFlags_RoamingStyle : ::System::Int32
	{
		None = 0,
		ThridPerson = 1,
		FirstPerson = 2,
		ThridPersonLocked = 3,
		TrackRoaming = 4,
	};
}
