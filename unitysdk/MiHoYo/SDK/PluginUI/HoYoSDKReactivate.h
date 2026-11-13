#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"
namespace MiHoYo::SDK::PluginUI { class HoYoSDKReactivate; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF6BEE0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BF6BE30)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONCLOSEDIALOG_OFFSET UNITYSDK_OFFSET(0x1BF6C2F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1BF6C120)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1BF6BF60)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1BF6C2B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_SHOW_OFFSET UNITYSDK_OFFSET(0x1BF6C020)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKReactivate_TypeDefinitionIndex = 47800;

	class HoYoSDKReactivate : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKReactivate** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKReactivate**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "HoYoSDKReactivate")->GetStaticField(0x28410);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKReactivate* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKReactivate*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_SHOW_OFFSET))(this);
		}

		::System::Void OnSubmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONSUBMIT_OFFSET))(this);
		}

		::System::Void OnCloseDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONCLOSEDIALOG_OFFSET))(this);
		}

	};
}
