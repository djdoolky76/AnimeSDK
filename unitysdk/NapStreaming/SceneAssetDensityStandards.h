#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/SceneAssetDensityStandard.h"
#include "unitysdk/System/Object.h"

namespace NapStreaming { class NapStreamingAssetDensityConfig; }
namespace NapStreaming { class SceneAssetDensityCell; }
namespace System { class String; }

#define NAPSTREAMING_SCENEASSETDENSITYSTANDARDS_CREATECELL_OFFSET UNITYSDK_OFFSET(0x15FB9470)
#define NAPSTREAMING_SCENEASSETDENSITYSTANDARDS_CREATERUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0x15FB99B0)
#define NAPSTREAMING_SCENEASSETDENSITYSTANDARDS_FLOORSEVENTYPERCENT_OFFSET UNITYSDK_OFFSET(0x15FB9960)
#define NAPSTREAMING_SCENEASSETDENSITYSTANDARDS_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x15FB9210)
#define NAPSTREAMING_SCENEASSETDENSITYSTANDARDS_GETGREENBUDGET_OFFSET UNITYSDK_OFFSET(0x15FB95B0)
#define NAPSTREAMING_SCENEASSETDENSITYSTANDARDS_GETMAXBUDGET_OFFSET UNITYSDK_OFFSET(0x15FB9330)
#define NAPSTREAMING_SCENEASSETDENSITYSTANDARDS_GETREFERENCESCENEPATH_OFFSET UNITYSDK_OFFSET(0x15FB92A0)

namespace NapStreaming
{
	inline static constexpr unsigned int SceneAssetDensityStandards_TypeDefinitionIndex = 39298;

	class SceneAssetDensityStandards : public ::System::Object
	{
	public:
		// static const ::NapStreaming::SceneAssetDensityStandard DefaultStandard = 0x1; // 0x0

		static ::System::String* GetDisplayName(::NapStreaming::SceneAssetDensityStandard standard)
		{
			return ((::System::String*(*)(::NapStreaming::SceneAssetDensityStandard))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYSTANDARDS_GETDISPLAYNAME_OFFSET))(standard);
		}

		static ::System::String* GetReferenceScenePath(::NapStreaming::SceneAssetDensityStandard standard)
		{
			return ((::System::String*(*)(::NapStreaming::SceneAssetDensityStandard))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYSTANDARDS_GETREFERENCESCENEPATH_OFFSET))(standard);
		}

		static ::NapStreaming::SceneAssetDensityCell* GetMaxBudget(::NapStreaming::SceneAssetDensityStandard standard)
		{
			return ((::NapStreaming::SceneAssetDensityCell*(*)(::NapStreaming::SceneAssetDensityStandard))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYSTANDARDS_GETMAXBUDGET_OFFSET))(standard);
		}

		static ::NapStreaming::SceneAssetDensityCell* GetGreenBudget(::NapStreaming::SceneAssetDensityStandard standard)
		{
			return ((::NapStreaming::SceneAssetDensityCell*(*)(::NapStreaming::SceneAssetDensityStandard))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYSTANDARDS_GETGREENBUDGET_OFFSET))(standard);
		}

		static ::NapStreaming::NapStreamingAssetDensityConfig* CreateRuntimeConfig(::NapStreaming::NapStreamingAssetDensityConfig* source, ::NapStreaming::SceneAssetDensityStandard standard)
		{
			return ((::NapStreaming::NapStreamingAssetDensityConfig*(*)(::NapStreaming::NapStreamingAssetDensityConfig*, ::NapStreaming::SceneAssetDensityStandard))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYSTANDARDS_CREATERUNTIMECONFIG_OFFSET))(source, standard);
		}

		static ::System::Int32 FloorSeventyPercent(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYSTANDARDS_FLOORSEVENTYPERCENT_OFFSET))(value);
		}

		static ::NapStreaming::SceneAssetDensityCell* CreateCell(::System::Double texturePixelCount, ::System::Int32 textureCount, ::System::Int32 materialCount, ::System::Int32 vertexCount, ::System::Int32 particleCount, ::System::Int32 animationClipCount, ::System::Int32 skinnedMeshCount, ::System::Int32 rendererCount, ::System::Int32 objectCount, ::System::Int32 lightCount)
		{
			return ((::NapStreaming::SceneAssetDensityCell*(*)(::System::Double, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYSTANDARDS_CREATECELL_OFFSET))(texturePixelCount, textureCount, materialCount, vertexCount, particleCount, animationClipCount, skinnedMeshCount, rendererCount, objectCount, lightCount);
		}
	};
}
