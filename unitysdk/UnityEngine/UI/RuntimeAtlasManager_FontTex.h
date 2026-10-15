#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class WeakReference; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_FONTTEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1F53E310)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RuntimeAtlasManager_FontTex_TypeDefinitionIndex = 6824;

	class RuntimeAtlasManager_FontTex : public ::System::Object
	{
	public:
		::System::WeakReference* font; // 0x10
		::UnityEngine::Texture* fontTex; // 0x18
		::System::Void _ctor(::UnityEngine::Font* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_FONTTEX_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
