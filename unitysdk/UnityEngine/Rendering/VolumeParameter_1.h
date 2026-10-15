#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter.h"

namespace UnityEngine::Rendering
{
	template <typename T>
	class VolumeParameter_1 : public ::UnityEngine::Rendering::VolumeParameter
	{
	public:
		T m_Value; // 0x0
	};
}
