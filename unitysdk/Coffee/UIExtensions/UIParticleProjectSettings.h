#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/HideFlags.h"

#define COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS_CCTOR_OFFSET UNITYSDK_OFFSET(0x20814B80)
#define COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x20814B70)
#define COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS_GET_FORCELEGACY_OFFSET UNITYSDK_OFFSET(0x20814AD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS_GET_GLOBALHIDEFLAGS_OFFSET UNITYSDK_OFFSET(0x20812DA0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS_SET_FORCELEGACY_OFFSET UNITYSDK_OFFSET(0x20814B10)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleProjectSettings_TypeDefinitionIndex = 40872;

	class UIParticleProjectSettings : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_m_HideGeneratedObjects()
		{
			return (::System::Boolean*)UnitySDK::FromName("Coffee.UIExtensions", "UIParticleProjectSettings")->GetStaticField(0x620);
		}

		static ::System::Boolean* StaticGet_s_ForceLegacy()
		{
			return (::System::Boolean*)UnitySDK::FromName("Coffee.UIExtensions", "UIParticleProjectSettings")->GetStaticField(0x621);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS_CCTOR_OFFSET))();
		}

		static ::System::Boolean get_forceLegacy()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS_GET_FORCELEGACY_OFFSET))();
		}

		static ::System::Void set_forceLegacy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS_SET_FORCELEGACY_OFFSET))(a1);
		}

		static ::UnityEngine::HideFlags get_globalHideFlags()
		{
			return ((::UnityEngine::HideFlags(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS_GET_GLOBALHIDEFLAGS_OFFSET))();
		}

	};
}
