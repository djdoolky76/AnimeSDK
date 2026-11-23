#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TechArt/GlassPlatformChangeManager/GlassType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TechArt::GlassPlatformChangeManager { class GlassMaterialItem; }
namespace UnityEngine { class Material; }

#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS_GETALLMATERIALS_OFFSET UNITYSDK_OFFSET(0x28C9450)
#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS_GETMATERIALSBYTYPE_OFFSET UNITYSDK_OFFSET(0x28C95E0)
#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS_GETMATERIALTYPE_OFFSET UNITYSDK_OFFSET(0x28C94A0)
#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS__CTOR_OFFSET UNITYSDK_OFFSET(0x28C96F0)

namespace TechArt::GlassPlatformChangeManager
{
	inline static constexpr unsigned int GlassMaterialPresets_TypeDefinitionIndex = 16324;

	class GlassMaterialPresets : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::TechArt::GlassPlatformChangeManager::GlassMaterialItem*>* materials; // 0x18

		::System::Collections::Generic::List_1<::TechArt::GlassPlatformChangeManager::GlassMaterialItem*>* GetMaterialsByType(::TechArt::GlassPlatformChangeManager::GlassType A288CB28FC2A6DA3)
		{
			return ((::System::Collections::Generic::List_1<::TechArt::GlassPlatformChangeManager::GlassMaterialItem*>*(*)(::PVOID, ::TechArt::GlassPlatformChangeManager::GlassType))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS_GETMATERIALSBYTYPE_OFFSET))(this, A288CB28FC2A6DA3);
		}

		::System::Collections::Generic::List_1<::TechArt::GlassPlatformChangeManager::GlassMaterialItem*>* GetAllMaterials()
		{
			return ((::System::Collections::Generic::List_1<::TechArt::GlassPlatformChangeManager::GlassMaterialItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS_GETALLMATERIALS_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS__CTOR_OFFSET))(this);
		}

		::TechArt::GlassPlatformChangeManager::GlassType GetMaterialType(::UnityEngine::Material* E3AD885F703BB54B)
		{
			return ((::TechArt::GlassPlatformChangeManager::GlassType(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS_GETMATERIALTYPE_OFFSET))(this, E3AD885F703BB54B);
		}
	};
}
