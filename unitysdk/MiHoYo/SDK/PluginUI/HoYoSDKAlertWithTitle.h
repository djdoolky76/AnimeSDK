#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"
namespace MiHoYo::SDK::PluginUI { class HoYoSDKAlertWithTitle; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF638A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BF637F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1BF63AF0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x1BF63D30)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1BF63920)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_SHOW_OFFSET UNITYSDK_OFFSET(0x1BF639E0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAlertWithTitle_TypeDefinitionIndex = 47770;

	class HoYoSDKAlertWithTitle : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKAlertWithTitle** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKAlertWithTitle**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "HoYoSDKAlertWithTitle")->GetStaticField(0x27A50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKAlertWithTitle* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKAlertWithTitle*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_SHOW_OFFSET))(this);
		}

		::System::Void OnConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_ONCONFIRM_OFFSET))(this);
		}

	};
}
