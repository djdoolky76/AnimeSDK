#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class DynamicResUpscaleFilter : ::System::Byte
	{
		Bilinear = 0,
		CatmullRom = 1,
		Lanczos = 2,
		ContrastAdaptiveSharpen = 3,
	};
}
