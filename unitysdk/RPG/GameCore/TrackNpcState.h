#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TrackNpcState : ::System::Int32
	{
		Ready = 0,
		Tracking = 1,
		End = 2,
	};
}
