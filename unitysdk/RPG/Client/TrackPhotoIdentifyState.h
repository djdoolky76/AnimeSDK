#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class TrackPhotoIdentifyState : ::System::Int32
	{
		SearchTarget = 0,
		AimTarget = 1,
		CandidPhotography = 2,
	};
}
