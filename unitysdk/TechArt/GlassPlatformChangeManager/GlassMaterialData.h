#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TechArt::GlassPlatformChangeManager { class GlassMaterialPresets; }
namespace TechArt::GlassPlatformChangeManager { class MaterialSlot; }
namespace UnityEngine { class GameObject; }

#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28B7460)

namespace TechArt::GlassPlatformChangeManager
{
	inline static constexpr unsigned int GlassMaterialData_TypeDefinitionIndex = 16253;

	class GlassMaterialData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* glassPrefab; // 0x10
		::TechArt::GlassPlatformChangeManager::MaterialSlot* singleSlot; // 0x18
		::System::Collections::Generic::List_1<::TechArt::GlassPlatformChangeManager::MaterialSlot*>* materialSlots; // 0x20
		::TechArt::GlassPlatformChangeManager::GlassMaterialPresets* materialPresets; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALDATA__CTOR_OFFSET))(this);
		}
	};
}
