#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) DeepCameraSettings
	{
		::UnityEngine::Vector4 TransparentClearColor; // 0x10
		::System::Int32 OpaqueDepthTex; // 0x20
	};
}
