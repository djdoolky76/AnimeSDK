#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6BD190)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6BD1C0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__HOYOSDKINTERNALPLUGINUICALLBACK_B__36_0_OFFSET UNITYSDK_OFFSET(0x1A6BD1E0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__INSTANCE_B__12_0_OFFSET UNITYSDK_OFFSET(0x1A6BD1D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatNative___c_TypeDefinitionIndex = 47122;

	class AccountPlatNative___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x17350);
		}

		static ::System::Action** StaticGet___9__36_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x17358);
		}

		static ::System::Action** StaticGet___9__12_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x17360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C_CTOR_OFFSET))(this);
		}

		::System::Void _Instance_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__INSTANCE_B__12_0_OFFSET))(this);
		}

		::System::Void _HoYoSDKInternalPluginUICallback_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__HOYOSDKINTERNALPLUGINUICALLBACK_B__36_0_OFFSET))(this);
		}

	};
}
