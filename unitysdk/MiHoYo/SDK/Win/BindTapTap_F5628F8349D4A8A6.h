#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class BindTapTap; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDTAPTAP_F5628F8349D4A8A6_A081A2E0BE26DB7F_OFFSET UNITYSDK_OFFSET(0x3A7EA00)
#define MIHOYO_SDK_WIN_BINDTAPTAP_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A80D70)
#define MIHOYO_SDK_WIN_BINDTAPTAP_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindTapTap_F5628F8349D4A8A6_TypeDefinitionIndex = 11953;

	class BindTapTap_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::BindTapTap_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Win::BindTapTap_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(BindTapTap_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::BindTapTap*>** StaticGet_E4AE7C6234D30C14()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::BindTapTap*>**)Il2CppClass::FromTypeDefinitionIndex(BindTapTap_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void A081A2E0BE26DB7F(::MiHoYo::SDK::Win::BindTapTap* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::BindTapTap*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_F5628F8349D4A8A6_A081A2E0BE26DB7F_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
