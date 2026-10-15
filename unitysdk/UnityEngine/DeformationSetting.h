#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DeformationQuality.h"

namespace UnityEngine
{
	struct alignas(4) DeformationSetting
	{
		::System::Single MaxZExtent; // 0x10
		::System::Boolean EnableFill; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single FillRate; // 0x18
		::System::Single TessRange; // 0x1C
		::System::Single NeedTessTerrainNodeSize; // 0x20
		::System::Single NoiseTiling; // 0x24
		::System::Single TrailElevation; // 0x28
		::System::Single ElevationNoise; // 0x2C
		::System::Single DepressionNoise; // 0x30
		::System::Boolean CloseDeformationTiling; // 0x34
		::System::Byte _padding1[0x3];
		::UnityEngine::DeformationQuality DeformationQualitySetting; // 0x38
	};
}
