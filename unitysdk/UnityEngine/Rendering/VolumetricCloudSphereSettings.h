#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) VolumetricCloudSphereSettings
	{
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 Width; // 0x14
		::System::Int32 Height; // 0x18
		::System::Int32 MarchingSteps; // 0x1C
		::System::Single AccumulationFactor; // 0x20
	};
}
