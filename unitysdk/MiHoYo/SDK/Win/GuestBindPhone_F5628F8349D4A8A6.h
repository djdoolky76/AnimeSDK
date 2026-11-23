#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class GuestBindPhone; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_GUESTBINDPHONE_F5628F8349D4A8A6_F1B791A6638C38D6_OFFSET UNITYSDK_OFFSET(0x39B5DF0)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39B84C0)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GuestBindPhone_F5628F8349D4A8A6_TypeDefinitionIndex = 12553;

	class GuestBindPhone_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::GuestBindPhone_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Win::GuestBindPhone_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(GuestBindPhone_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::GuestBindPhone*>** StaticGet_F91E3204940F2480()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::GuestBindPhone*>**)Il2CppClass::FromTypeDefinitionIndex(GuestBindPhone_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void F1B791A6638C38D6(::MiHoYo::SDK::Win::GuestBindPhone* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::GuestBindPhone*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_F5628F8349D4A8A6_F1B791A6638C38D6_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
