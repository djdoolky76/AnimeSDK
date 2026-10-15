#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VertexAttributeDescriptor.h"

namespace UnityEngine::Experimental::Rendering
{
	struct alignas(8) ShaderWarmupSetup
	{
		::Il2CppArray<::UnityEngine::Rendering::VertexAttributeDescriptor>* vdecl; // 0x10
	};
}
