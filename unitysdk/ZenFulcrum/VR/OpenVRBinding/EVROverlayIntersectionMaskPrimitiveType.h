#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	enum class EVROverlayIntersectionMaskPrimitiveType : ::System::Int32
	{
		OverlayIntersectionPrimitiveType_Rectangle = 0,
		OverlayIntersectionPrimitiveType_Circle = 1,
	};
}
