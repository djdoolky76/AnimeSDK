#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/IDOHKCEJPJP.h"
namespace UnityEngine { class Texture2D; }

#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD28030)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_DUMP_OFFSET UNITYSDK_OFFSET(0x1BD27FE0)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0x1BD27DE0)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0x1BD27DD0)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_BLOCKBOUNDS_OFFSET UNITYSDK_OFFSET(0x1BD27DB0)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_GRIDCOL_OFFSET UNITYSDK_OFFSET(0x1BD27D70)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_GRIDROW_OFFSET UNITYSDK_OFFSET(0x1BD27D60)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_LOD_OFFSET UNITYSDK_OFFSET(0x1BD27D80)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_SHADOWHEIGHTMAPHEIGHTSCALE_OFFSET UNITYSDK_OFFSET(0x1BD27DA0)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_SHADOWHEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1BD27D90)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_TERRAINSHADOWPROXYID_OFFSET UNITYSDK_OFFSET(0x1BD27E00)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_LOAD_OFFSET UNITYSDK_OFFSET(0x1BD27E10)
#define RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1BD27F50)

namespace RPG::Rendering::Terrain
{
	inline static constexpr unsigned int TerrainBlockInfo_TypeDefinitionIndex = 52883;

	class TerrainBlockInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 gridRow; // 0x18
		::System::Int32 gridCol; // 0x1C
		::System::Int32 lod; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Texture2D* shadowHeightMap; // 0x28
		::System::Single shadowHeightMapHeightScale; // 0x30
		::UnityEngine::Bounds blockBounds; // 0x34
		::System::Byte _padding1[0x4];
		::System::UInt64 BFJMNLDLNGN; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_CTOR_OFFSET))(this);
		}

		::System::Int32 get_GridRow()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_GRIDROW_OFFSET))(this);
		}

		::System::Int32 get_GridCol()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_GRIDCOL_OFFSET))(this);
		}

		::System::Int32 get_Lod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_LOD_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_ShadowHeightMap()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_SHADOWHEIGHTMAP_OFFSET))(this);
		}

		::System::Single get_ShadowHeightMapHeightScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_SHADOWHEIGHTMAPHEIGHTSCALE_OFFSET))(this);
		}

		::UnityEngine::Bounds get_BlockBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_BLOCKBOUNDS_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_ARTBOUND_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::UInt64 get_TerrainShadowProxyID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_GET_TERRAINSHADOWPROXYID_OFFSET))(this);
		}

		::System::Void Load(::IDOHKCEJPJP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_LOAD_OFFSET))(this, a1);
		}

		::System::Void UnLoad(::IDOHKCEJPJP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_UNLOAD_OFFSET))(this, a1);
		}

		::System::Void Dump(::IDOHKCEJPJP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINBLOCKINFO_DUMP_OFFSET))(this, a1);
		}

	};
}
