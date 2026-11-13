#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"
namespace MiHoYo::SDK::PluginUI { class HoYoSDKCommonLoading; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF646F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BF64640)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1BF64830)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1BF64770)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKCommonLoading_TypeDefinitionIndex = 47775;

	class HoYoSDKCommonLoading : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoading** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoading**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "HoYoSDKCommonLoading")->GetStaticField(0x27B00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoading* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoading*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADING_ONCLOSE_OFFSET))(this);
		}

	};
}
