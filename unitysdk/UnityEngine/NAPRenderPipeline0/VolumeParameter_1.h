#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeParameter.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumeParameter_1_TypeDefinitionIndex = 6058;

	template <typename T>
	class VolumeParameter_1 : public ::UnityEngine::NAPRenderPipeline0::VolumeParameter
	{
	public:
		T m_Value; // 0x0
	};
}
