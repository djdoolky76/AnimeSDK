#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	enum class EditLevel : ::System::Int32
	{
		Top = 0,
		Geometry = 1,
		Texture = 2,
		Plugin = 3,
	};
}
