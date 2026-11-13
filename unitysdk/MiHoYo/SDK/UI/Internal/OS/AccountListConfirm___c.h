#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::UI::Internal::OS { class AccountListConfirm; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C8B60)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C8BA0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM___C__SHOW_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4C8BB0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountListConfirm___c_TypeDefinitionIndex = 8446;

	class AccountListConfirm___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm*>** StaticGet___9__28_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm*>**)UnitySDK::FromName("MiHoYo.SDK.UI.Internal.OS", "<>c")->GetStaticField(0x20180);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.UI.Internal.OS", "<>c")->GetStaticField(0x20188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__28_0(::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM___C__SHOW_B__28_0_OFFSET))(this, a1);
		}

	};
}
