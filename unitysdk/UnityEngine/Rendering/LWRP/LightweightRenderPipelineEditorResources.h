#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_LWRP_LIGHTWEIGHTRENDERPIPELINEEDITORRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1719A0)

namespace UnityEngine::Rendering::LWRP
{
	inline static constexpr unsigned int LightweightRenderPipelineEditorResources_TypeDefinitionIndex = 26810;

	class LightweightRenderPipelineEditorResources : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LWRP_LIGHTWEIGHTRENDERPIPELINEEDITORRESOURCES__CTOR_OFFSET))(this);
		}
	};
}
