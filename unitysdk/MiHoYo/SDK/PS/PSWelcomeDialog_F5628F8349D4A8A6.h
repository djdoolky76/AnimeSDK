#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PS { class PSWelcomeDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_F5628F8349D4A8A6_E10AC53182798A8C_OFFSET UNITYSDK_OFFSET(0x3A42160)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A45120)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSWelcomeDialog_F5628F8349D4A8A6_TypeDefinitionIndex = 12929;

	class PSWelcomeDialog_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::PSWelcomeDialog_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::PS::PSWelcomeDialog_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(PSWelcomeDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::PS::PSWelcomeDialog*>** StaticGet_F2C54999C1BBBACC()
		{
			return (::System::Action_1<::MiHoYo::SDK::PS::PSWelcomeDialog*>**)Il2CppClass::FromTypeDefinitionIndex(PSWelcomeDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void E10AC53182798A8C(::MiHoYo::SDK::PS::PSWelcomeDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PSWelcomeDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_F5628F8349D4A8A6_E10AC53182798A8C_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
