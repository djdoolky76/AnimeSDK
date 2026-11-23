#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Renderer.h"

#define UNITYENGINE_U2D_SPRITESHAPERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x40E9D70)

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int SpriteShapeRenderer_TypeDefinitionIndex = 21557;

	class SpriteShapeRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITESHAPERENDERER__CTOR_OFFSET))(this);
		}
	};
}
