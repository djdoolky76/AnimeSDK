#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class BindMiHoYo; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_BINDMIHOYO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCFA110)
#define MIHOYO_SDK_WIN_BINDMIHOYO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCFA150)
#define MIHOYO_SDK_WIN_BINDMIHOYO___C__SHOW_B__29_0_OFFSET UNITYSDK_OFFSET(0x1BCFA160)

namespace MiHoYo::SDK::Win
{
	class BindMiHoYo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x1A7F0);
		}

		static ::System::Action** StaticGet___9__29_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x1A7F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__29_0(::MiHoYo::SDK::Win::BindMiHoYo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::BindMiHoYo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO___C__SHOW_B__29_0_OFFSET))(this, a1);
		}

	};
}
