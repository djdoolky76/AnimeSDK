#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFIKLIHGCCO_AxisAlignedDirection.h"
#include "unitysdk/KFIKLIHGCCO_DebugStage.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class KFIKLIHGCCO_CIBLKPAIHOP;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_CLEARCARDS_OFFSET UNITYSDK_OFFSET(0xE88A3E0)
#define RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_CLEARSURFELS_OFFSET UNITYSDK_OFFSET(0xE88A330)
#define RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE88A6E0)
#define RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_EXPORTTEXTURES_OFFSET UNITYSDK_OFFSET(0xE88A470)
#define RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_GENERATESURFACECARDS_OFFSET UNITYSDK_OFFSET(0xE88A2A0)
#define RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_GENERATESURFELS_OFFSET UNITYSDK_OFFSET(0xE88A1E0)
#define RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_GETSURFACECARDS_OFFSET UNITYSDK_OFFSET(0xE88A590)
#define RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_GETSURFELSCENE_OFFSET UNITYSDK_OFFSET(0xE88A500)
#define RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_GET_ISGENERATED_OFFSET UNITYSDK_OFFSET(0xE88A630)

namespace RPG::SurfaceCache
{
	inline static constexpr unsigned int SurfaceCacheGeneratorMonoPlugin_TypeDefinitionIndex = 51751;

	class SurfaceCacheGeneratorMonoPlugin
	{
	public:
		::System::Single voxelSize; // 0x30
		::System::Int32 maxVoxels; // 0x34
		::System::Int32 raysPerVoxel; // 0x38
		::System::Single minCoverage; // 0x3C
		::System::Int32 visibilityRays; // 0x40
		::System::Single minClusterCoverage; // 0x44
		::System::Single minOuterClusterCoverage; // 0x48
		::System::Single minDensityPerCluster; // 0x4C
		::System::Int32 maxCardsPerDirection; // 0x50
		::System::Int32 atlasSize; // 0x54
		::System::Single targetUtilization; // 0x58
		::System::Single pixelsPerUnit; // 0x5C
		::System::Int32 minCardPixelSize; // 0x60
		::System::Int32 maxCardPixelSize; // 0x64
		::System::Int32 cardPadding; // 0x68
		::System::Int32 atlasDilateIterations; // 0x6C
		::System::Single nearPlaneOffset; // 0x70
		::System::Single farPlaneOffset; // 0x74
		::UnityEngine::RenderTexture* atlasTexture; // 0x78
		::UnityEngine::Texture2D* cardInfoTexture; // 0x80
		::System::String* exportPath; // 0x88
		::System::String* exportPrefix; // 0x90
		::System::Boolean showVoxelGrid; // 0x98
		::System::Boolean showBounds; // 0x99
		::System::Boolean showVoxelSpace; // 0x9A
		::System::Boolean showSurfels; // 0x9B
		::System::Boolean showClusters; // 0x9C
		::System::Byte _padding0[0x3];
		::System::Single surfelVisualizationSize; // 0xA0
		::System::Boolean showCardGizmos; // 0xA4
		::System::Byte _padding1[0x3];
		::KFIKLIHGCCO_AxisAlignedDirection stepDebugDirection; // 0xA8
		::KFIKLIHGCCO_DebugStage currentDebugStage; // 0xAC
		::System::Boolean debugSpecificVoxel; // 0xB0
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector2Int debugVoxelCoord; // 0xB4
		::System::Boolean showAllVoxels; // 0xBC
		::System::Byte _padding3[0x3];
		::System::Int32 debugVoxelCount; // 0xC0
		::System::Int32 maxVisualizeRays; // 0xC4
		::System::Boolean enableClusterPreview; // 0xC8
		::System::Byte _padding4[0x3];
		::KFIKLIHGCCO_AxisAlignedDirection previewDirection; // 0xCC
		::System::Boolean showClusterDetails; // 0xD0
		::System::Boolean showClusterSurfels; // 0xD1
		::System::Boolean showUnusedSurfels; // 0xD2
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void GenerateSurfels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_GENERATESURFELS_OFFSET))(this);
		}

		::System::Void GenerateSurfaceCards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_GENERATESURFACECARDS_OFFSET))(this);
		}

		::System::Void ClearSurfels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_CLEARSURFELS_OFFSET))(this);
		}

		::System::Void ClearCards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_CLEARCARDS_OFFSET))(this);
		}

		::System::Void ExportTextures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_EXPORTTEXTURES_OFFSET))(this);
		}

		::KFIKLIHGCCO_CIBLKPAIHOP* GetSurfelScene(::System::Int32 a1)
		{
			return ((::KFIKLIHGCCO_CIBLKPAIHOP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_GETSURFELSCENE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetSurfaceCards()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_GETSURFACECARDS_OFFSET))(this);
		}

		::System::Boolean get_IsGenerated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SURFACECACHE_SURFACECACHEGENERATORMONOPLUGIN_GET_ISGENERATED_OFFSET))(this);
		}

	};
}
