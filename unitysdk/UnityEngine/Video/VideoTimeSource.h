#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Video
{
	enum class VideoTimeSource : ::System::Int32
	{
		AudioDSPTimeSource = 0,
		GameTimeSource = 1,
	};
}
