#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) RTReflectionSettings
	{
		::System::Boolean Enabled; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single RenderScale; // 0x14
		::System::Single CullingDistance; // 0x18
		::System::Int32 RayGenShader; // 0x1C
		::System::Int32 PBRLightingMat; // 0x20
		::System::Boolean Debug; // 0x24
	};
}
