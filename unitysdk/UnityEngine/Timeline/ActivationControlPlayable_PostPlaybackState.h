#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	enum class ActivationControlPlayable_PostPlaybackState : ::System::Int32
	{
		Active = 0,
		Inactive = 1,
		Revert = 2,
	};
}
