#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	enum class CinemachineVirtualCameraBase_BlendHint : ::System::Int32
	{
		None = 0,
		SphericalPosition = 1,
		CylindricalPosition = 2,
		ScreenSpaceAimWhenTargetsDiffer = 4,
		RadialAimAndLinearDistance = 8,
		BlockFovAdjustT = 16,
	};
}
