#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"
namespace MiHoYo::SDK::PluginUI { class PluginUIDataSecurityService; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF89D60)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF87F30)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BF87F40)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x1BF88020)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_SHOWOVERSEACONSENTBANNERMANAGEPREFERENCESPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BF889C0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_SHOWOVERSEACONSENTBANNERPRIVACYPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BF88210)

namespace MiHoYo::SDK::PluginUI
{
	class PluginUIDataSecurityService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIDataSecurityService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIDataSecurityService**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "PluginUIDataSecurityService")->GetStaticField(0x19680);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIDataSecurityService* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIDataSecurityService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_GETINSTANCE_OFFSET))();
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void ShowOverseaConsentBannerPrivacyPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_SHOWOVERSEACONSENTBANNERPRIVACYPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowOverseaConsentBannerManagePreferencesPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDATASECURITYSERVICE_SHOWOVERSEACONSENTBANNERMANAGEPREFERENCESPLUGINUI_OFFSET))(this, a1, a2);
		}

	};
}
