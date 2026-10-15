#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Video
{
	enum class VideoRenderMode : ::System::Int32
	{
		CameraFarPlane = 0,
		CameraNearPlane = 1,
		RenderTexture = 2,
		MaterialOverride = 3,
		APIOnly = 4,
	};
}
