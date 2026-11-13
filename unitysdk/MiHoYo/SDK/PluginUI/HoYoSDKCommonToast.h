#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"
namespace MiHoYo::SDK::PluginUI { class HoYoSDKCommonToast; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF64D70)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BF64CC0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1BF64FA0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1BF64DF0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_SHOW_OFFSET UNITYSDK_OFFSET(0x1BF64F30)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKCommonToast_TypeDefinitionIndex = 47777;

	class HoYoSDKCommonToast : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonToast** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKCommonToast**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "HoYoSDKCommonToast")->GetStaticField(0x27B60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonToast* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKCommonToast*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_SHOW_OFFSET))(this);
		}

	};
}
