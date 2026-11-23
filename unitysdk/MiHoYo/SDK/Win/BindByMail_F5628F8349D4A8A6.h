#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class BindByMail; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDBYMAIL_F5628F8349D4A8A6_EE2B9C54181886DD_OFFSET UNITYSDK_OFFSET(0x39CCCD0)
#define MIHOYO_SDK_WIN_BINDBYMAIL_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39CDD70)
#define MIHOYO_SDK_WIN_BINDBYMAIL_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindByMail_F5628F8349D4A8A6_TypeDefinitionIndex = 12594;

	class BindByMail_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::BindByMail_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Win::BindByMail_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(BindByMail_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::BindByMail*>** StaticGet_B10A085834E493C5()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::BindByMail*>**)Il2CppClass::FromTypeDefinitionIndex(BindByMail_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void EE2B9C54181886DD(::MiHoYo::SDK::Win::BindByMail* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::BindByMail*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_F5628F8349D4A8A6_EE2B9C54181886DD_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
