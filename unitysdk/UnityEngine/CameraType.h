#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int CameraType_TypeDefinitionIndex = 5217;

	enum class CameraType : ::System::Int32
	{
		Game = 1,
		SceneView = 2,
		Preview = 4,
		VR = 8,
		Reflection = 16,
	};
}
