#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONQUEUETYPEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF7600)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DistortionQueueTypeParameter_TypeDefinitionIndex = 6112;

	class DistortionQueueTypeParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::DistortionQueueType value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DistortionQueueType, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONQUEUETYPEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
