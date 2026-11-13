#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF636A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF636E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x1BF636F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_1_OFFSET UNITYSDK_OFFSET(0x1BF63730)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_2_OFFSET UNITYSDK_OFFSET(0x1BF63770)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_3_OFFSET UNITYSDK_OFFSET(0x1BF637B0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAccountLogin___c_TypeDefinitionIndex = 47769;

	class HoYoSDKAccountLogin___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet___9__4_1()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x27940);
		}

		static ::System::Action_1<::System::String*>** StaticGet___9__4_3()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x27948);
		}

		static ::System::Action_1<::System::String*>** StaticGet___9__4_2()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x27950);
		}

		static ::System::Action_1<::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x27958);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x27960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__4_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_0_OFFSET))(this, a1);
		}

		::System::Void _Show_b__4_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_1_OFFSET))(this, a1);
		}

		::System::Void _Show_b__4_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_2_OFFSET))(this, a1);
		}

		::System::Void _Show_b__4_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_3_OFFSET))(this, a1);
		}

	};
}
