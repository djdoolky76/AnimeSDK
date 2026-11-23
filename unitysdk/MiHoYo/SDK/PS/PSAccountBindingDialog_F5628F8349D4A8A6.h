#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PS { class PSAccountBindingDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_F5628F8349D4A8A6_A201AAFC3A135E75_OFFSET UNITYSDK_OFFSET(0x3AF7840)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AF9600)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSAccountBindingDialog_F5628F8349D4A8A6_TypeDefinitionIndex = 12206;

	class PSAccountBindingDialog_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::PSAccountBindingDialog_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::PS::PSAccountBindingDialog_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(PSAccountBindingDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::PS::PSAccountBindingDialog*>** StaticGet_A28C8DE47FFE4CCD()
		{
			return (::System::Action_1<::MiHoYo::SDK::PS::PSAccountBindingDialog*>**)Il2CppClass::FromTypeDefinitionIndex(PSAccountBindingDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void A201AAFC3A135E75(::MiHoYo::SDK::PS::PSAccountBindingDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PSAccountBindingDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_F5628F8349D4A8A6_A201AAFC3A135E75_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
