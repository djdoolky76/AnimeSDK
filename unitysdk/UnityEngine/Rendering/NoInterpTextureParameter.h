#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_NOINTERPTEXTUREPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F297FD0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpTextureParameter_TypeDefinitionIndex = 35652;

	class NoInterpTextureParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Texture* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPTEXTUREPARAMETER_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
