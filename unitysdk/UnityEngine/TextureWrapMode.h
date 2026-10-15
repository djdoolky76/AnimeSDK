#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class TextureWrapMode : ::System::Int32
	{
		Repeat = 0,
		Clamp = 1,
		Mirror = 2,
		MirrorOnce = 3,
	};
}
