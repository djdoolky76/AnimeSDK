#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class LoginByAccountOversea; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD550A0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD550E0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA___C__SHOW_B__51_0_OFFSET UNITYSDK_OFFSET(0x1BD550F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByAccountOversea___c_TypeDefinitionIndex = 9534;

	class LoginByAccountOversea___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x21970);
		}

		static ::System::Action_1<::MiHoYo::SDK::Win::LoginByAccountOversea*>** StaticGet___9__51_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::LoginByAccountOversea*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x21978);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__51_0(::MiHoYo::SDK::Win::LoginByAccountOversea* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::LoginByAccountOversea*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA___C__SHOW_B__51_0_OFFSET))(this, a1);
		}

	};
}
