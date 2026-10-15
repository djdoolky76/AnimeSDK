#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeParameter_1_TypeDefinitionIndex = 35622;

	template <typename T>
	class VolumeParameter_1 : public ::UnityEngine::Rendering::VolumeParameter
	{
	public:
		T m_Value; // 0x0
	};
}
