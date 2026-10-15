#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class GuestBindPhone; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_GUESTBINDPHONE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD4ACA0)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4ACE0)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE___C__SHOW_B__35_0_OFFSET UNITYSDK_OFFSET(0x1BD4ACF0)

namespace MiHoYo::SDK::Win
{
	class GuestBindPhone___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x215F0);
		}

		static ::System::Action** StaticGet___9__35_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x215F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__35_0(::MiHoYo::SDK::Win::GuestBindPhone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::GuestBindPhone*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE___C__SHOW_B__35_0_OFFSET))(this, a1);
		}

	};
}
