#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF61830)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF61870)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_0_OFFSET UNITYSDK_OFFSET(0x1BF61880)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_1_OFFSET UNITYSDK_OFFSET(0x1BF618B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_2_OFFSET UNITYSDK_OFFSET(0x1BF618E0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAccountList___c_TypeDefinitionIndex = 47766;

	class HoYoSDKAccountList___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x23990);
		}

		static ::System::Action_1<::System::String*>** StaticGet___9__6_2()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x23998);
		}

		static ::System::Action_1<::System::String*>** StaticGet___9__6_1()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x239A0);
		}

		static ::System::Action_1<::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x239A8);
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
