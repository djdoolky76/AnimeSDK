#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int RenderModel_TextureMap_t_TypeDefinitionIndex = 39320;

	struct alignas(4) RenderModel_TextureMap_t
	{
		::System::Char unWidth; // 0x10
		::System::Char unHeight; // 0x12
		::System::Byte _padding0[0x4];
		::System::IntPtr rubTextureMapData; // 0x18
	};
}
