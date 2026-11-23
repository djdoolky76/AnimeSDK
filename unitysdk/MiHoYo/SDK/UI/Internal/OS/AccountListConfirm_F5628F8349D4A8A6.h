#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::Internal::OS { class AccountListConfirm; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_F5628F8349D4A8A6_FCD390EDAB609CEB_OFFSET UNITYSDK_OFFSET(0x3AB0240)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AB2260)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountListConfirm_F5628F8349D4A8A6_TypeDefinitionIndex = 12073;

	class AccountListConfirm_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(AccountListConfirm_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm*>** StaticGet_FDAFF8B28C4951C2()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm*>**)Il2CppClass::FromTypeDefinitionIndex(AccountListConfirm_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void FCD390EDAB609CEB(::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_F5628F8349D4A8A6_FCD390EDAB609CEB_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
