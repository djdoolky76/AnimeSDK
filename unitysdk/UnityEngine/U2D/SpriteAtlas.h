#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace UnityEngine { class Sprite; }

#define UNITYENGINE_U2D_SPRITEATLAS_E7FACDFEE55BE438_OFFSET UNITYSDK_OFFSET(0x413FB90)
#define UNITYENGINE_U2D_SPRITEATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x413FBE0)

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int SpriteAtlas_TypeDefinitionIndex = 17152;

	class SpriteAtlas : public ::UnityEngine::Object
	{
	public:
		::System::Boolean E7FACDFEE55BE438(::UnityEngine::Sprite* F6810B7660FF842B)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_E7FACDFEE55BE438_OFFSET))(this, F6810B7660FF842B);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS__CTOR_OFFSET))(this);
		}
	};
}
