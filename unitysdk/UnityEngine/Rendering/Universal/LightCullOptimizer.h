#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCULLOPTIMIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4568C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightCullOptimizer_TypeDefinitionIndex = 26717;

	class LightCullOptimizer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCULLOPTIMIZER__CTOR_OFFSET))(this);
		}
	};
}
