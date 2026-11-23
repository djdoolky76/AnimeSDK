#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class LoginByAccountOversea; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_F5628F8349D4A8A6_F34033E152F50B31_OFFSET UNITYSDK_OFFSET(0x3A42200)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A450B0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByAccountOversea_F5628F8349D4A8A6_TypeDefinitionIndex = 12935;

	class LoginByAccountOversea_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::LoginByAccountOversea_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Win::LoginByAccountOversea_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(LoginByAccountOversea_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::LoginByAccountOversea*>** StaticGet_E3AA54A6337D2FEB()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::LoginByAccountOversea*>**)Il2CppClass::FromTypeDefinitionIndex(LoginByAccountOversea_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void F34033E152F50B31(::MiHoYo::SDK::Win::LoginByAccountOversea* AED0C4705E731A6C)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::LoginByAccountOversea*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_F5628F8349D4A8A6_F34033E152F50B31_OFFSET))(this, AED0C4705E731A6C);
		}
	};
}
