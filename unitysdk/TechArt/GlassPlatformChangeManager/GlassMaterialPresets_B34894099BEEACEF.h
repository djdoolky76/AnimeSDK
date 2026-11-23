#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TechArt::GlassPlatformChangeManager { class GlassMaterialItem; }
namespace UnityEngine { class Material; }

#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS_B34894099BEEACEF_B8DFC0C0B26287FA_OFFSET UNITYSDK_OFFSET(0x28CE580)
#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS_B34894099BEEACEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TechArt::GlassPlatformChangeManager
{
	inline static constexpr unsigned int GlassMaterialPresets_B34894099BEEACEF_TypeDefinitionIndex = 16323;

	class GlassMaterialPresets_B34894099BEEACEF : public ::System::Object
	{
	public:
		::UnityEngine::Material* E3AD885F703BB54B; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS_B34894099BEEACEF__CTOR_OFFSET))(this);
		}

		::System::Boolean B8DFC0C0B26287FA(::TechArt::GlassPlatformChangeManager::GlassMaterialItem* B8A196AEAF73E28B)
		{
			return ((::System::Boolean(*)(::PVOID, ::TechArt::GlassPlatformChangeManager::GlassMaterialItem*))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS_B34894099BEEACEF_B8DFC0C0B26287FA_OFFSET))(this, B8A196AEAF73E28B);
		}
	};
}
