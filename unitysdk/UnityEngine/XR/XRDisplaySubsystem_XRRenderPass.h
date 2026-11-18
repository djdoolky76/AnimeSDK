#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRDisplaySubsystem_XRRenderPass_TypeDefinitionIndex = 27669;

	struct alignas(4) XRDisplaySubsystem_XRRenderPass
	{
		::System::IntPtr displaySubsystemInstance; // 0x10
		::System::Int32 renderPassIndex; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Rendering::RenderTargetIdentifier renderTarget; // 0x20
		::UnityEngine::RenderTextureDescriptor renderTargetDesc; // 0x48
		::System::Boolean shouldFillOutDepth; // 0x80
		::System::Byte _padding1[0x3];
		::System::Int32 cullingPassIndex; // 0x84
	};
}
