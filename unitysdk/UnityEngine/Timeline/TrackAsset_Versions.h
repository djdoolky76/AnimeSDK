#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackAsset_Versions_TypeDefinitionIndex = 32364;

	enum class TrackAsset_Versions : ::System::Int32
	{
		Initial = 0,
		RotationAsEuler = 1,
		RootMotionUpgrade = 2,
		AnimatedTrackProperties = 3,
	};
}
