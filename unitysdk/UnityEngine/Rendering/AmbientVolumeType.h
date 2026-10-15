#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class AmbientVolumeType : ::System::Int32
	{
		Both = 0,
		SceneOnly = 1,
		CharacterOnly = 2,
	};
}
