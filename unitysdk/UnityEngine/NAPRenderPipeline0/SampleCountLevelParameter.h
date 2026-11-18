#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SampleCountLevel.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_SAMPLECOUNTLEVELPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFC060)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SampleCountLevelParameter_TypeDefinitionIndex = 5826;

	class SampleCountLevelParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::SampleCountLevel value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::SampleCountLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SAMPLECOUNTLEVELPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
