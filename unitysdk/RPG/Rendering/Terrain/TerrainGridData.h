#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Rendering/Terrain/TerrainGridBlockEntry.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_BOOHHBJEEKC_OFFSET UNITYSDK_OFFSET(0xE884740)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE884850)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_BLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0xE884520)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0xE8847E0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_CREATEORIGIN_OFFSET UNITYSDK_OFFSET(0xE8844D0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDCOLMIN_OFFSET UNITYSDK_OFFSET(0xE8844A0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDCOLUMNS_OFFSET UNITYSDK_OFFSET(0xE8844C0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDROWMIN_OFFSET UNITYSDK_OFFSET(0xE884490)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDROWS_OFFSET UNITYSDK_OFFSET(0xE8844B0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_ROOTNAME_OFFSET UNITYSDK_OFFSET(0xE884510)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_TERRAINHEIGHT_OFFSET UNITYSDK_OFFSET(0xE884500)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_TERRAINLATERALSIZE_OFFSET UNITYSDK_OFFSET(0xE8844F0)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_OJHFMHGBNCD_OFFSET UNITYSDK_OFFSET(0xE884670)
#define RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_OKIOMHDGLMF_OFFSET UNITYSDK_OFFSET(0xE884570)

namespace RPG::Rendering::Terrain
{
	class TerrainGridData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 gridRowMin; // 0x18
		::System::Int32 gridColMin; // 0x1C
		::System::Int32 gridRows; // 0x20
		::System::Int32 gridColumns; // 0x24
		::UnityEngine::Vector3 createOrigin; // 0x28
		::System::Single terrainLateralSize; // 0x34
		::System::Single terrainHeight; // 0x38
		::System::Byte _padding0[0x4];
		::System::String* rootName; // 0x40
		::System::Collections::Generic::List_1<::RPG::Rendering::Terrain::TerrainGridBlockEntry>* blocks; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_CTOR_OFFSET))(this);
		}

		::System::Int32 get_GridRowMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDROWMIN_OFFSET))(this);
		}

		::System::Int32 get_GridColMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDCOLMIN_OFFSET))(this);
		}

		::System::Int32 get_GridRows()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDROWS_OFFSET))(this);
		}

		::System::Int32 get_GridColumns()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_GRIDCOLUMNS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CreateOrigin()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_CREATEORIGIN_OFFSET))(this);
		}

		::System::Single get_TerrainLateralSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_TERRAINLATERALSIZE_OFFSET))(this);
		}

		::System::Single get_TerrainHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_TERRAINHEIGHT_OFFSET))(this);
		}

		::System::String* get_RootName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_ROOTNAME_OFFSET))(this);
		}

		::System::Int32 get_BlockCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_BLOCKCOUNT_OFFSET))(this);
		}

		::System::String* OKIOMHDGLMF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_OKIOMHDGLMF_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Rendering::Terrain::TerrainGridBlockEntry>* OJHFMHGBNCD()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Rendering::Terrain::TerrainGridBlockEntry>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_OJHFMHGBNCD_OFFSET))(this);
		}

		::UnityEngine::Vector3 BOOHHBJEEKC(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_BOOHHBJEEKC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 get_BlockSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_TERRAIN_TERRAINGRIDDATA_GET_BLOCKSIZE_OFFSET))(this);
		}

	};
}
