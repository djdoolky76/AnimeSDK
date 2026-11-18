#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_DOWNSAMPLEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA41F40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DownSampleParameter_TypeDefinitionIndex = 26726;

	class DownSampleParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::DownSampleLevel value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DownSampleLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DOWNSAMPLEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
