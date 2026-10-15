#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) HiddenAreaMesh_t
	{
		::System::IntPtr pVertexData; // 0x10
		::System::UInt32 unTriangleCount; // 0x18
	};
}
