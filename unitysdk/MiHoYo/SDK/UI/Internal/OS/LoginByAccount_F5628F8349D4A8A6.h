#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::Internal::OS { class LoginByAccount; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_F5628F8349D4A8A6_BF3BAD4424238D5E_OFFSET UNITYSDK_OFFSET(0x399F730)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39A1DB0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int LoginByAccount_F5628F8349D4A8A6_TypeDefinitionIndex = 12538;

	class LoginByAccount_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::UI::Internal::OS::LoginByAccount_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::UI::Internal::OS::LoginByAccount_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(LoginByAccount_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::LoginByAccount*>** StaticGet_B9C609AA4E8A784E()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::LoginByAccount*>**)Il2CppClass::FromTypeDefinitionIndex(LoginByAccount_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void BF3BAD4424238D5E(::MiHoYo::SDK::UI::Internal::OS::LoginByAccount* AED0C4705E731A6C)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Internal::OS::LoginByAccount*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_F5628F8349D4A8A6_BF3BAD4424238D5E_OFFSET))(this, AED0C4705E731A6C);
		}
	};
}
