#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UvModes.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_UVMODESPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x16E88D30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UvModesParameter_TypeDefinitionIndex = 27389;

	class UvModesParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::UvModes value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UvModes, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UVMODESPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
