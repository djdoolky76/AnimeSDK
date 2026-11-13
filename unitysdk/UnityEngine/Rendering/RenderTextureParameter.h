#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_RENDERING_RENDERTEXTUREPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F64FC70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTextureParameter_TypeDefinitionIndex = 36581;

	class RenderTextureParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::RenderTexture* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTEXTUREPARAMETER_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
