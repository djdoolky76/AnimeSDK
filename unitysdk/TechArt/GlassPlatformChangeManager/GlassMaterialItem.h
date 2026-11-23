#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TechArt/GlassPlatformChangeManager/GlassType.h"

namespace UnityEngine { class Material; }

#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x28A19C0)

namespace TechArt::GlassPlatformChangeManager
{
	inline static constexpr unsigned int GlassMaterialItem_TypeDefinitionIndex = 16208;

	class GlassMaterialItem : public ::System::Object
	{
	public:
		::UnityEngine::Material* material; // 0x10
		::TechArt::GlassPlatformChangeManager::GlassType glassType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALITEM__CTOR_OFFSET))(this);
		}
	};
}
