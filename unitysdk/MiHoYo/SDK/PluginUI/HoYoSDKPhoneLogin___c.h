#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB67EF50)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB67EF90)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN___C__SHOW_B__4_1_OFFSET UNITYSDK_OFFSET(0xB67EFA0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKPhoneLogin___c_TypeDefinitionIndex = 47789;

	class HoYoSDKPhoneLogin___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x28D70);
		}

		static ::System::Action_1<::System::String*>** StaticGet___9__4_1()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x28D78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__4_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN___C__SHOW_B__4_1_OFFSET))(this, a1);
		}

	};
}
