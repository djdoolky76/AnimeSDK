#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class GuestBindMail; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_GUESTBINDMAIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD493A0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD493E0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL___C__SHOW_B__31_0_OFFSET UNITYSDK_OFFSET(0x1BD493F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GuestBindMail___c_TypeDefinitionIndex = 9498;

	class GuestBindMail___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Win::GuestBindMail*>** StaticGet___9__31_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::GuestBindMail*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x21560);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x21568);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__31_0(::MiHoYo::SDK::Win::GuestBindMail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::GuestBindMail*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL___C__SHOW_B__31_0_OFFSET))(this, a1);
		}

	};
}
