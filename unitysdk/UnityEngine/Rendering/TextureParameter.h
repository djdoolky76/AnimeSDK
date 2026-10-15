#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_TEXTUREPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2CB030)

namespace UnityEngine::Rendering
{
	class TextureParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Texture* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREPARAMETER_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
