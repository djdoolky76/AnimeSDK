#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB02DAA0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB02DAE0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__BRIDGE2NATIVE_B__16_1_OFFSET UNITYSDK_OFFSET(0xB02DAF0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIManager___c_TypeDefinitionIndex = 46886;

	class MiHoYoSDKUIManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x324C0);
		}

		static ::System::Action** StaticGet___9__16_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "<>c")->GetStaticField(0x324C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _Bridge2Native_b__16_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__BRIDGE2NATIVE_B__16_1_OFFSET))(this, a1);
		}

	};
}
