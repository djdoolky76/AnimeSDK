#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/HQBloomMode.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_HQBLOOMMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C854EA0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int HQBloomModeParameter_TypeDefinitionIndex = 26932;

	class HQBloomModeParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::HQBloomMode value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::HQBloomMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_HQBLOOMMODEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
