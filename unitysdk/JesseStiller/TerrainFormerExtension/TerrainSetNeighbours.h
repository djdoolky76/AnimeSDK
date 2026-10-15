#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Terrain; }

#define JESSESTILLER_TERRAINFORMEREXTENSION_TERRAINSETNEIGHBOURS_AWAKE_OFFSET UNITYSDK_OFFSET(0xAF4F020)
#define JESSESTILLER_TERRAINFORMEREXTENSION_TERRAINSETNEIGHBOURS_CTOR_OFFSET UNITYSDK_OFFSET(0xAF4F110)
#define JESSESTILLER_TERRAINFORMEREXTENSION_TERRAINSETNEIGHBOURS_SETNEIGHBOURS_OFFSET UNITYSDK_OFFSET(0xAF4F0F0)

namespace JesseStiller::TerrainFormerExtension
{
	class TerrainSetNeighbours : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Terrain* leftTerrain; // 0x18
		::UnityEngine::Terrain* topTerrain; // 0x20
		::UnityEngine::Terrain* rightTerrain; // 0x28
		::UnityEngine::Terrain* bottomTerrain; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JESSESTILLER_TERRAINFORMEREXTENSION_TERRAINSETNEIGHBOURS_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JESSESTILLER_TERRAINFORMEREXTENSION_TERRAINSETNEIGHBOURS_AWAKE_OFFSET))(this);
		}

		::System::Void SetNeighbours(::UnityEngine::Terrain* a1, ::UnityEngine::Terrain* a2, ::UnityEngine::Terrain* a3, ::UnityEngine::Terrain* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + JESSESTILLER_TERRAINFORMEREXTENSION_TERRAINSETNEIGHBOURS_SETNEIGHBOURS_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
