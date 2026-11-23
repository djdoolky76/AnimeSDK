#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class GuestBindMail; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_GUESTBINDMAIL_F5628F8349D4A8A6_B2BEE38E98AFF823_OFFSET UNITYSDK_OFFSET(0x3B0A4F0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3B0F950)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GuestBindMail_F5628F8349D4A8A6_TypeDefinitionIndex = 12275;

	class GuestBindMail_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::GuestBindMail_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Win::GuestBindMail_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(GuestBindMail_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::GuestBindMail*>** StaticGet_B79B0E089A29B2E7()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::GuestBindMail*>**)Il2CppClass::FromTypeDefinitionIndex(GuestBindMail_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void B2BEE38E98AFF823(::MiHoYo::SDK::Win::GuestBindMail* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::GuestBindMail*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_F5628F8349D4A8A6_B2BEE38E98AFF823_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
