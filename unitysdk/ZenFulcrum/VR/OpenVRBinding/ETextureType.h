#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	enum class ETextureType : ::System::Int32
	{
		DirectX = 0,
		OpenGL = 1,
		Vulkan = 2,
		IOSurface = 3,
		DirectX12 = 4,
	};
}
