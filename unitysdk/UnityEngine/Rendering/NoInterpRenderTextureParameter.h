#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_RENDERING_NOINTERPRENDERTEXTUREPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C5CF0)

namespace UnityEngine::Rendering
{
	class NoInterpRenderTextureParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::RenderTexture* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPRENDERTEXTUREPARAMETER_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
