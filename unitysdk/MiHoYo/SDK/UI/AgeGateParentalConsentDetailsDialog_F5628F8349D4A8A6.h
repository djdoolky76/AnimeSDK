#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class AgeGateParentalConsentDetailsDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_F5628F8349D4A8A6_BDEAB3CF259D8182_OFFSET UNITYSDK_OFFSET(0x3AB01F0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AB2340)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AgeGateParentalConsentDetailsDialog_F5628F8349D4A8A6_TypeDefinitionIndex = 12057;

	class AgeGateParentalConsentDetailsDialog_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(AgeGateParentalConsentDetailsDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog*>** StaticGet_A7ECC368172C7170()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog*>**)Il2CppClass::FromTypeDefinitionIndex(AgeGateParentalConsentDetailsDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void BDEAB3CF259D8182(::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_F5628F8349D4A8A6_BDEAB3CF259D8182_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
