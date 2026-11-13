#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"
namespace MiHoYo::SDK::PluginUI { class HoYoSDKRealPerson; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF6CA20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BF6C970)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1BF6CDE0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1BF6CAA0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_SHOW_OFFSET UNITYSDK_OFFSET(0x1BF6CB60)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x1BF6CF20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_1_OFFSET UNITYSDK_OFFSET(0x1BF6CF60)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_2_OFFSET UNITYSDK_OFFSET(0x1BF6CFA0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_3_OFFSET UNITYSDK_OFFSET(0x1BF6CFE0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKRealPerson_TypeDefinitionIndex = 47802;

	class HoYoSDKRealPerson : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKRealPerson** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKRealPerson**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "HoYoSDKRealPerson")->GetStaticField(0x28550);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKRealPerson* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKRealPerson*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_SHOW_OFFSET))(this);
		}

		::System::Void _Show_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_0_OFFSET))(this);
		}

		::System::Void _Show_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_1_OFFSET))(this);
		}

		::System::Void _Show_b__4_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_2_OFFSET))(this);
		}

		::System::Void _Show_b__4_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_3_OFFSET))(this);
		}

	};
}
