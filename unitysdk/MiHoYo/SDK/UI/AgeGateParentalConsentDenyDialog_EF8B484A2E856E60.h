#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class AgeGateParentalConsentDenyDialog; }
namespace System { class String; }

#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_EF8B484A2E856E60_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A80800)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_EF8B484A2E856E60__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AgeGateParentalConsentDenyDialog_EF8B484A2E856E60_TypeDefinitionIndex = 11945;

	class AgeGateParentalConsentDenyDialog_EF8B484A2E856E60 : public ::System::Object
	{
	public:
		::System::String* F51E83A249C13FAD; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_EF8B484A2E856E60__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::UI::AgeGateParentalConsentDenyDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::AgeGateParentalConsentDenyDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_EF8B484A2E856E60_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
