#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class OverseaAccountListConfirm; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_F5628F8349D4A8A6_FCD390EDAB609CEB_OFFSET UNITYSDK_OFFSET(0x39CCC30)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39CDC90)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAccountListConfirm_F5628F8349D4A8A6_TypeDefinitionIndex = 12588;

	class OverseaAccountListConfirm_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaAccountListConfirm_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Win::OverseaAccountListConfirm_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(OverseaAccountListConfirm_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::OverseaAccountListConfirm*>** StaticGet_FDAFF8B28C4951C2()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::OverseaAccountListConfirm*>**)Il2CppClass::FromTypeDefinitionIndex(OverseaAccountListConfirm_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void FCD390EDAB609CEB(::MiHoYo::SDK::Win::OverseaAccountListConfirm* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaAccountListConfirm*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_F5628F8349D4A8A6_FCD390EDAB609CEB_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
