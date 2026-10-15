#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xAFC77E0)
#define MIHOYO_SDK_MIHOYOSDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xAFC7810)
#define MIHOYO_SDK_MIHOYOSDK___C__INIT_B__20_0_OFFSET UNITYSDK_OFFSET(0xAFC7820)

namespace MiHoYo::SDK
{
	class MiHoYoSDK___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__20_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x25890);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x25898);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK___C_CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK___C__INIT_B__20_0_OFFSET))(this);
		}

	};
}
