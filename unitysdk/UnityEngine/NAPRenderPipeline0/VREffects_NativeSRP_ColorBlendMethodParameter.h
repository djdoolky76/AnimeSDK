#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VREffects_NativeSRP_ColorBlendMethod.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_VREFFECTS_NATIVESRP_COLORBLENDMETHODPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFE630)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VREffects_NativeSRP_ColorBlendMethodParameter_TypeDefinitionIndex = 6127;

	class VREffects_NativeSRP_ColorBlendMethodParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VREFFECTS_NATIVESRP_COLORBLENDMETHODPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
