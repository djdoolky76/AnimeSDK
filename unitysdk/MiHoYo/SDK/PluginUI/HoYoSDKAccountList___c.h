#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB016720)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB016760)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_0_OFFSET UNITYSDK_OFFSET(0xB016770)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_1_OFFSET UNITYSDK_OFFSET(0xB0167A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_2_OFFSET UNITYSDK_OFFSET(0xB0167D0)

namespace MiHoYo::SDK::PluginUI
{
	class HoYoSDKAccountList___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x30210);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x30218);
		}

		static ::System::Action** StaticGet___9__6_2()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x30220);
		}

		static ::System::Action** StaticGet___9__6_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x30228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C_CTOR_OFFSET))(this);
		}

		::System::Void _DoShow_b__6_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_0_OFFSET))(this, a1);
		}

		::System::Void _DoShow_b__6_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_1_OFFSET))(this, a1);
		}

		::System::Void _DoShow_b__6_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_2_OFFSET))(this, a1);
		}

	};
}
