#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::UI::Internal::OS { class AccountList; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0020C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C002100)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C__SHOW_B__43_0_OFFSET UNITYSDK_OFFSET(0x1C002110)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountList___c_TypeDefinitionIndex = 8434;

	class AccountList___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.UI.Internal.OS", "<>c")->GetStaticField(0x183D0);
		}

		static ::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::AccountList*>** StaticGet___9__43_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::AccountList*>**)UnitySDK::FromName("MiHoYo.SDK.UI.Internal.OS", "<>c")->GetStaticField(0x183D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__43_0(::MiHoYo::SDK::UI::Internal::OS::AccountList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Internal::OS::AccountList*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C__SHOW_B__43_0_OFFSET))(this, a1);
		}

	};
}
