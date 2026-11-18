#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_CHANNELMAPPINGPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FCCD0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ChannelMappingParameter_TypeDefinitionIndex = 26653;

	class ChannelMappingParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::ChannelMapping value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ChannelMapping, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHANNELMAPPINGPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
