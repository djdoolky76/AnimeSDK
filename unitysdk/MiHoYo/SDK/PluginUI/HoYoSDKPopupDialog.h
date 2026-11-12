#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"
#include "unitysdk/MiHoYo/SDK/PopupDialog_SelectedResult.h"
namespace MiHoYo::SDK::PluginUI { class HoYoSDKPopupDialog; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0xB67F090)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB67EFE0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xB67F310)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_ONOPERATION_OFFSET UNITYSDK_OFFSET(0xB67F3F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB67F110)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0xB67F1D0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKPopupDialog_TypeDefinitionIndex = 47790;

	class HoYoSDKPopupDialog : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKPopupDialog** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKPopupDialog**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "HoYoSDKPopupDialog")->GetStaticField(0x29210);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKPopupDialog* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKPopupDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_SHOW_OFFSET))(this);
		}

		::System::Void OnOperation(::MiHoYo::SDK::PopupDialog_SelectedResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopupDialog_SelectedResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_ONOPERATION_OFFSET))(this, a1);
		}

	};
}
