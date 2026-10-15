#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class LogoutConfirm; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_LOGOUTCONFIRM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD8B1B0)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD8B1F0)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM___C__SHOW_B__21_0_OFFSET UNITYSDK_OFFSET(0x1BD8B200)

namespace MiHoYo::SDK::Win
{
	class LogoutConfirm___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x23A80);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x23A88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__21_0(::MiHoYo::SDK::Win::LogoutConfirm* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::LogoutConfirm*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM___C__SHOW_B__21_0_OFFSET))(this, a1);
		}

	};
}
