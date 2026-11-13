#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
namespace MiHoYo::SDK::PluginUI { class HoYoSDKCommonAlert; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF63E20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BF63D70)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1BF64090)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONOPERATION_OFFSET UNITYSDK_OFFSET(0x1BF64170)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1BF63EA0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_SHOW_OFFSET UNITYSDK_OFFSET(0x1BF63F60)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKCommonAlert_TypeDefinitionIndex = 47773;

	class HoYoSDKCommonAlert : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonAlert** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKCommonAlert**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "HoYoSDKCommonAlert")->GetStaticField(0x27A90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonAlert* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKCommonAlert*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_SHOW_OFFSET))(this);
		}

		::System::Void OnOperation(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONOPERATION_OFFSET))(this, a1);
		}

	};
}
