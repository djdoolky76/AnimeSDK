#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TechArt::GlassPlatformChangeManager { class GlassLayer; }
namespace TechArt::GlassPlatformChangeManager { class GlassMaterialData; }
namespace TechArt::GlassPlatformChangeManager { class GlassMaterialPresets; }

#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSCONFIGURATION_ADDNEWGLASSLAYER_OFFSET UNITYSDK_OFFSET(0x2871990)
#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSCONFIGURATION_GETALLGLASSMATERIALS_OFFSET UNITYSDK_OFFSET(0x2871B30)
#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSCONFIGURATION_SYNCMATERIALPRESETS_OFFSET UNITYSDK_OFFSET(0x2871CF0)
#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSCONFIGURATION__CTOR_OFFSET UNITYSDK_OFFSET(0x2871E70)

namespace TechArt::GlassPlatformChangeManager
{
	inline static constexpr unsigned int GlassConfiguration_TypeDefinitionIndex = 16082;

	class GlassConfiguration : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* blockLayerName; // 0x18
		::System::String* creationTime; // 0x20
		::TechArt::GlassPlatformChangeManager::GlassMaterialPresets* materialPresets; // 0x28
		::System::Collections::Generic::List_1<::TechArt::GlassPlatformChangeManager::GlassLayer*>* glassLayers; // 0x30

		::System::Collections::Generic::List_1<::TechArt::GlassPlatformChangeManager::GlassMaterialData*>* GetAllGlassMaterials()
		{
			return ((::System::Collections::Generic::List_1<::TechArt::GlassPlatformChangeManager::GlassMaterialData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSCONFIGURATION_GETALLGLASSMATERIALS_OFFSET))(this);
		}

		::System::Void SyncMaterialPresets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSCONFIGURATION_SYNCMATERIALPRESETS_OFFSET))(this);
		}

		::System::Void AddNewGlassLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSCONFIGURATION_ADDNEWGLASSLAYER_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSCONFIGURATION__CTOR_OFFSET))(this);
		}
	};
}
