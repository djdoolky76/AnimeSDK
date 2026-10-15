#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro
{
	enum class TMP_VertexDataUpdateFlags : ::System::Int32
	{
		None = 0,
		Vertices = 1,
		Uv0 = 2,
		Uv2 = 4,
		Uv4 = 8,
		Colors32 = 16,
		All = 255,
	};
}
