#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class TrackPhotoShotTargetResult : ::System::Int32
	{
		Normal = 0,
		CandidPhotography = 1,
		Repeated = 2,
	};
}
