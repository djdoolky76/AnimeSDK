#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class GuestBindPhone; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_GUESTBINDPHONE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD26FF0)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD27030)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE___C__SHOW_B__35_0_OFFSET UNITYSDK_OFFSET(0x1BD27040)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GuestBindPhone___c_TypeDefinitionIndex = 9500;

	class GuestBindPhone___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Win::GuestBindPhone*>** StaticGet___9__35_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::GuestBindPhone*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x323D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x323D8);
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
