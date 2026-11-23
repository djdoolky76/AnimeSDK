#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class ReactivateAccount; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_F5628F8349D4A8A6_E0D769C8DC434D2C_OFFSET UNITYSDK_OFFSET(0x3A29CC0)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A2B9E0)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ReactivateAccount_F5628F8349D4A8A6_TypeDefinitionIndex = 12841;

	class ReactivateAccount_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::ReactivateAccount_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Win::ReactivateAccount_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ReactivateAccount_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::ReactivateAccount*>** StaticGet_F6459B7CA2224D03()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::ReactivateAccount*>**)Il2CppClass::FromTypeDefinitionIndex(ReactivateAccount_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void E0D769C8DC434D2C(::MiHoYo::SDK::Win::ReactivateAccount* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::ReactivateAccount*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_F5628F8349D4A8A6_E0D769C8DC434D2C_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
