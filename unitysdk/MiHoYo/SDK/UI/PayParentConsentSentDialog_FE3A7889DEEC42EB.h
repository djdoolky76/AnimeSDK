#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class PayParentConsentSentDialog; }
namespace System { class String; }

#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_FE3A7889DEEC42EB_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A99060)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_FE3A7889DEEC42EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int PayParentConsentSentDialog_FE3A7889DEEC42EB_TypeDefinitionIndex = 12020;

	class PayParentConsentSentDialog_FE3A7889DEEC42EB : public ::System::Object
	{
	public:
		::System::String* F51E83A249C13FAD; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_FE3A7889DEEC42EB__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::UI::PayParentConsentSentDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::PayParentConsentSentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_FE3A7889DEEC42EB_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
