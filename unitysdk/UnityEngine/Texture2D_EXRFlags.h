#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class Texture2D_EXRFlags : ::System::Int32
	{
		None = 0,
		OutputAsFloat = 1,
		CompressZIP = 2,
		CompressRLE = 4,
		CompressPIZ = 8,
		DiscardAlpha = 16,
	};
}
