#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class LogoutConfirm; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGOUTCONFIRM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD65620)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD65660)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM___C__SHOW_B__21_0_OFFSET UNITYSDK_OFFSET(0x1BD65670)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LogoutConfirm___c_TypeDefinitionIndex = 9302;

	class LogoutConfirm___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x34840);
		}

		static ::System::Action_1<::MiHoYo::SDK::Win::LogoutConfirm*>** StaticGet___9__21_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::LogoutConfirm*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x34848);
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
