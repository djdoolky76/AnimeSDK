#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Renderer.h"

namespace UnityEngine::U2D { class SpriteAtlas; }

#define UNITYENGINE_TILEMAPS_TILEMAPRENDERER_A29FCBC715A158B5_OFFSET UNITYSDK_OFFSET(0x4214E20)
#define UNITYENGINE_TILEMAPS_TILEMAPRENDERER_E78515C59BEDFDCD_OFFSET UNITYSDK_OFFSET(0x4214E70)
#define UNITYENGINE_TILEMAPS_TILEMAPRENDERER_FACB0FAE8A949941_OFFSET UNITYSDK_OFFSET(0x4214EE0)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int TilemapRenderer_TypeDefinitionIndex = 21361;

	class TilemapRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void E78515C59BEDFDCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAPRENDERER_E78515C59BEDFDCD_OFFSET))(this);
		}

		::System::Void A29FCBC715A158B5(::UnityEngine::U2D::SpriteAtlas* EC5501F050F288AA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::U2D::SpriteAtlas*))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAPRENDERER_A29FCBC715A158B5_OFFSET))(this, EC5501F050F288AA);
		}

		::System::Void FACB0FAE8A949941()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAPRENDERER_FACB0FAE8A949941_OFFSET))(this);
		}
	};
}
