#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class OverseaAccountList; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_F5628F8349D4A8A6_A0D1EE5589595F28_OFFSET UNITYSDK_OFFSET(0x3A7EA50)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A80DE0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAccountList_F5628F8349D4A8A6_TypeDefinitionIndex = 11928;

	class OverseaAccountList_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaAccountList_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Win::OverseaAccountList_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(OverseaAccountList_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::OverseaAccountList*>** StaticGet_ED91EFAC806C306A()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::OverseaAccountList*>**)Il2CppClass::FromTypeDefinitionIndex(OverseaAccountList_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void A0D1EE5589595F28(::MiHoYo::SDK::Win::OverseaAccountList* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaAccountList*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_F5628F8349D4A8A6_A0D1EE5589595F28_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
