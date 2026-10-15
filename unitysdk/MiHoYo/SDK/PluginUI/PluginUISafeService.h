#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"
namespace MiHoYo::SDK::PluginUI { class PluginUISafeService; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFA62B0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFA4260)
#define MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BF8A8A0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x1BFA4270)
#define MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_SHOWBINDMOBILEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BFA5240)
#define MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_SHOWDEVICELOGINTIPSPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BFA4520)
#define MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_SHOWVERIFYMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BFA5990)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUISafeService_TypeDefinitionIndex = 9157;

	class PluginUISafeService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUISafeService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUISafeService**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "PluginUISafeService")->GetStaticField(0x1A9E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUISafeService* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUISafeService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_GETINSTANCE_OFFSET))();
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void ShowDeviceLoginTipsPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_SHOWDEVICELOGINTIPSPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowBindMobilePluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_SHOWBINDMOBILEPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowVerifyMailPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUISAFESERVICE_SHOWVERIFYMAILPLUGINUI_OFFSET))(this, a1, a2);
		}

	};
}
