#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::Internal::OS { class AccountList; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_F5628F8349D4A8A6_F49BC5225E0C6F87_OFFSET UNITYSDK_OFFSET(0x3AB0290)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AB2180)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountList_F5628F8349D4A8A6_TypeDefinitionIndex = 12087;

	class AccountList_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::UI::Internal::OS::AccountList_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::UI::Internal::OS::AccountList_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(AccountList_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::AccountList*>** StaticGet_B306DD1B5E1CBE6B()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::AccountList*>**)Il2CppClass::FromTypeDefinitionIndex(AccountList_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void F49BC5225E0C6F87(::MiHoYo::SDK::UI::Internal::OS::AccountList* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Internal::OS::AccountList*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_F5628F8349D4A8A6_F49BC5225E0C6F87_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
