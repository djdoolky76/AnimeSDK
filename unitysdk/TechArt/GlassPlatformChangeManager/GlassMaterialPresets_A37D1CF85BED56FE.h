#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TechArt/GlassPlatformChangeManager/GlassType.h"

namespace TechArt::GlassPlatformChangeManager { class GlassMaterialItem; }

#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS_A37D1CF85BED56FE_ECD2D5FD71031EE5_OFFSET UNITYSDK_OFFSET(0x28CE560)
#define TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS_A37D1CF85BED56FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TechArt::GlassPlatformChangeManager
{
	inline static constexpr unsigned int GlassMaterialPresets_A37D1CF85BED56FE_TypeDefinitionIndex = 16322;

	class GlassMaterialPresets_A37D1CF85BED56FE : public ::System::Object
	{
	public:
		::TechArt::GlassPlatformChangeManager::GlassType A288CB28FC2A6DA3; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS_A37D1CF85BED56FE__CTOR_OFFSET))(this);
		}

		::System::Boolean ECD2D5FD71031EE5(::TechArt::GlassPlatformChangeManager::GlassMaterialItem* B8A196AEAF73E28B)
		{
			return ((::System::Boolean(*)(::PVOID, ::TechArt::GlassPlatformChangeManager::GlassMaterialItem*))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_GLASSMATERIALPRESETS_A37D1CF85BED56FE_ECD2D5FD71031EE5_OFFSET))(this, B8A196AEAF73E28B);
		}
	};
}
