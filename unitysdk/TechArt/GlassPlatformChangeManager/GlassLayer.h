#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TechArt::GlassPlatformChangeManager { class GlassMaterialData; }
namespace TechArt::GlassPlatformChangeManager { class GlassMaterialPresets; }

#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSLAYER_GETACTIVEMATERIALS_OFFSET UNITYSDK_OFFSET(0x28B7180)
#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSLAYER_SETMATERIALPRESETS_OFFSET UNITYSDK_OFFSET(0x28B7300)
#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x28B73A0)

namespace TechArt::GlassPlatformChangeManager
{
	inline static constexpr unsigned int GlassLayer_TypeDefinitionIndex = 16283;

	class GlassLayer : public ::System::Object
	{
	public:
		::System::String* layerName; // 0x10
		::System::Boolean enableInnerGlass; // 0x18
		::System::Boolean enableOuterGlass; // 0x19
		::System::Byte _padding0[0x6];
		::TechArt::GlassPlatformChangeManager::GlassMaterialData* innerGlass; // 0x20
		::TechArt::GlassPlatformChangeManager::GlassMaterialData* outerGlass; // 0x28

		::System::Collections::Generic::List_1<::TechArt::GlassPlatformChangeManager::GlassMaterialData*>* GetActiveMaterials()
		{
			return ((::System::Collections::Generic::List_1<::TechArt::GlassPlatformChangeManager::GlassMaterialData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSLAYER_GETACTIVEMATERIALS_OFFSET))(this);
		}

		::System::Void SetMaterialPresets(::TechArt::GlassPlatformChangeManager::GlassMaterialPresets* E9A8E1F30E47471C)
		{
			return ((::System::Void(*)(::PVOID, ::TechArt::GlassPlatformChangeManager::GlassMaterialPresets*))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSLAYER_SETMATERIALPRESETS_OFFSET))(this, E9A8E1F30E47471C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSLAYER__CTOR_OFFSET))(this);
		}
	};
}
