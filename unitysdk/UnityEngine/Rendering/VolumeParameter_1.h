#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDC595893C6EE433/A35817262A53CA5C.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeParameter_1_TypeDefinitionIndex = 20406;

	template <typename T>
	class VolumeParameter_1 : public ::BDC595893C6EE433::A35817262A53CA5C
	{
	public:
		T m_Value; // 0x0
	};
}
