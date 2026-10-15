#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class MeshTopology : ::System::Int32
	{
		Triangles = 0,
		Quads = 2,
		Lines = 3,
		LineStrip = 4,
		Points = 5,
	};
}
