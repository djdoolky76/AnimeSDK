#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurMode.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLURMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0DAF40)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int MotionBlurModeParameter_TypeDefinitionIndex = 6103;

	class MotionBlurModeParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::MotionBlurMode value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MotionBlurMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLURMODEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
