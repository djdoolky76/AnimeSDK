#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"
namespace MiHoYo::SDK::PluginUI { class PluginUIControlService; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF87E40)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF86D90)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BF86DA0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x1BF86E80)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWALERTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BF87430)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWCONFIRMPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BF874A0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWLOADINGPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BF879D0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWLOADINGTOASTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BF87BB0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWPOPUPDIALOGPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BF87520)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWTIPSBARPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BF87E00)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWTOASTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BF87DA0)

namespace MiHoYo::SDK::PluginUI
{
	class PluginUIControlService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIControlService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIControlService**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "PluginUIControlService")->GetStaticField(0x195E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIControlService* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIControlService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_GETINSTANCE_OFFSET))();
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void ShowAlertPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWALERTPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowConfirmPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWCONFIRMPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowPopupDialogPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWPOPUPDIALOGPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowLoadingPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWLOADINGPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowLoadingToastPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWLOADINGTOASTPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowToastPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWTOASTPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowTipsbarPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE_SHOWTIPSBARPLUGINUI_OFFSET))(this, a1, a2);
		}

	};
}
