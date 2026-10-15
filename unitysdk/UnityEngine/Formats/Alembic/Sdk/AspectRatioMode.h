#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	enum class AspectRatioMode : ::System::Int32
	{
		CurrentResolution = 0,
		DefaultResolution = 1,
		CameraAperture = 2,
	};
}
