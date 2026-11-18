#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CapturePass_PreviewType_TypeDefinitionIndex = 27245;

	enum class CapturePass_PreviewType : ::System::Int32
	{
		SkyBackground = 7,
		Normal = 1,
		Position = 2,
		BaseUV = 9,
		SkyCloud = 8,
		Albedo = 4,
		Effect = 6,
		LayerId = 0,
		Light = 5,
		Depth = 3,
	};
}
