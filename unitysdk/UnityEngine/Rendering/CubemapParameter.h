#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Cubemap; }

#define UNITYENGINE_RENDERING_CUBEMAPPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x20566F00)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CubemapParameter_TypeDefinitionIndex = 36583;

	class CubemapParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Cubemap* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Cubemap*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CUBEMAPPARAMETER_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
