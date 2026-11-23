#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class AgeGateParentalConsentDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_F5628F8349D4A8A6_F976D804502989FD_OFFSET UNITYSDK_OFFSET(0x3ADF840)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AE0300)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AgeGateParentalConsentDialog_F5628F8349D4A8A6_TypeDefinitionIndex = 12172;

	class AgeGateParentalConsentDialog_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::UI::AgeGateParentalConsentDialog_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::UI::AgeGateParentalConsentDialog_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(AgeGateParentalConsentDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::UI::AgeGateParentalConsentDialog*>** StaticGet_F87BF241DEE8759A()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::AgeGateParentalConsentDialog*>**)Il2CppClass::FromTypeDefinitionIndex(AgeGateParentalConsentDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void F976D804502989FD(::MiHoYo::SDK::UI::AgeGateParentalConsentDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::AgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_F5628F8349D4A8A6_F976D804502989FD_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
