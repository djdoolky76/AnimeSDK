#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) RenderModel_t
	{
		::System::IntPtr rVertexData; // 0x10
		::System::UInt32 unVertexCount; // 0x18
		::System::Byte _padding0[0x4];
		::System::IntPtr rIndexData; // 0x20
		::System::UInt32 unTriangleCount; // 0x28
		::System::Int32 diffuseTextureId; // 0x2C
	};
}
