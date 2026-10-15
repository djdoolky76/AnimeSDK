#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"
namespace MiHoYo::SDK::PluginUI { class PluginUIProtocolService; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFA0490)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF9DE20)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BF8AA60)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x1BF9DE30)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_SHOWOVERSEAPROTOCOLPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BF9F5F0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_SHOWPROTOCOLPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BF9EAF0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_SHOWPROTOCOLRECONFIRMPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BF9E0E0)

namespace MiHoYo::SDK::PluginUI
{
	class PluginUIProtocolService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIProtocolService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIProtocolService**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "PluginUIProtocolService")->GetStaticField(0x1A540);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIProtocolService* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIProtocolService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_GETINSTANCE_OFFSET))();
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void ShowProtocolReConfirmPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_SHOWPROTOCOLRECONFIRMPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowProtocolPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_SHOWPROTOCOLPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowOverseaProtocolPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIPROTOCOLSERVICE_SHOWOVERSEAPROTOCOLPLUGINUI_OFFSET))(this, a1, a2);
		}

	};
}
