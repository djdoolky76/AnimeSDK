#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	enum class ExtrudeMethod : ::System::Int32
	{
		IndividualFaces = 0,
		VertexNormal = 1,
		FaceNormal = 2,
	};
}
