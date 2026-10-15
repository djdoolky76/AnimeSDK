#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	enum class CullingMode : ::System::Int32
	{
		None = 0,
		Back = 1,
		Front = 2,
		FrontBack = 3,
	};
}
