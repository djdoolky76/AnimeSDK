#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class TimeRewindCheckSetStateResult : ::System::Int32
	{
		OK = 0,
		SetToTransitionNode = 1,
		SetToAnotherTrackNoCut = 2,
		SetToNotExistNode = 3,
		CustomFail = 4,
	};
}
