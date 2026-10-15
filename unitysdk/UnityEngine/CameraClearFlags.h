#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class CameraClearFlags : ::System::Int32
	{
		Skybox = 1,
		Color = 2,
		SolidColor = 2,
		Depth = 3,
		Nothing = 4,
	};
}
