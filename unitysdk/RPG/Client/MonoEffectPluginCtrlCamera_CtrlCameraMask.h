#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MonoEffectPluginCtrlCamera_CtrlCameraMask : ::System::Int32
	{
		Transform = 1,
		Projection = 2,
		OrthographicSize = 4,
		ClippingPlane = 8,
		Fov = 16,
		CullingMask = 32,
	};
}
