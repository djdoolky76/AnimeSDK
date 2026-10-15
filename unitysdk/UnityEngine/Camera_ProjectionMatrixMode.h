#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class Camera_ProjectionMatrixMode : ::System::Int32
	{
		Explicit = 0,
		Implicit = 1,
		PhysicalPropertiesBased = 2,
	};
}
