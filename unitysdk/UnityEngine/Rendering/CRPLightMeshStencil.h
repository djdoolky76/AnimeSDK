#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) CRPLightMeshStencil
	{
		::System::Int32 StencilDelegate; // 0x10
		::UnityEngine::Matrix4x4 StencilDelegateMatrix; // 0x14
	};
}
