#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class BindMiHoYo; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDMIHOYO_F5628F8349D4A8A6_E1F0CC90BE8AE27E_OFFSET UNITYSDK_OFFSET(0x39CCC80)
#define MIHOYO_SDK_WIN_BINDMIHOYO_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39CDD00)
#define MIHOYO_SDK_WIN_BINDMIHOYO_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindMiHoYo_F5628F8349D4A8A6_TypeDefinitionIndex = 12660;

	class BindMiHoYo_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::BindMiHoYo_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Win::BindMiHoYo_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(BindMiHoYo_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::BindMiHoYo*>** StaticGet_E354E9AE74DDD48C()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::BindMiHoYo*>**)Il2CppClass::FromTypeDefinitionIndex(BindMiHoYo_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void E1F0CC90BE8AE27E(::MiHoYo::SDK::Win::BindMiHoYo* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::BindMiHoYo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_F5628F8349D4A8A6_E1F0CC90BE8AE27E_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
