#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class ComputeShader; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSCOMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x108BF2A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassCommonConfig_TypeDefinitionIndex = 26234;

	class GPUGrassCommonConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::ComputeShader* grassComputeShader; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSCOMMONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
