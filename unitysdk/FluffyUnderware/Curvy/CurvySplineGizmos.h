#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySplineGizmos_TypeDefinitionIndex = 37675;

	enum class CurvySplineGizmos : ::System::Int32
	{
		Bounds = 128,
		Orientation = 16,
		Metadata = 64,
		Curve = 2,
		Labels = 32,
		TFs = 256,
		All = 65535,
		Tangents = 8,
		None = 0,
		OrientationAnchors = 1024,
		Approximation = 4,
		Connections = 1,
		RelativeDistances = 512,
	};
}
