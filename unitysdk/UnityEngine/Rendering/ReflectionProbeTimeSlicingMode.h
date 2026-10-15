#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class ReflectionProbeTimeSlicingMode : ::System::Int32
	{
		AllFacesAtOnce = 0,
		IndividualFaces = 1,
		NoTimeSlicing = 2,
	};
}
