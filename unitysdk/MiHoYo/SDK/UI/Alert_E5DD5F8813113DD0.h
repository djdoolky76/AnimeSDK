#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class Alert_E1B694816E36FF55; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_ALERT_E5DD5F8813113DD0_A3FD24D058C629EB_OFFSET UNITYSDK_OFFSET(0x3A2A060)
#define MIHOYO_SDK_UI_ALERT_E5DD5F8813113DD0_AED093DA9AC7A7F2_OFFSET UNITYSDK_OFFSET(0x3A2A140)
#define MIHOYO_SDK_UI_ALERT_E5DD5F8813113DD0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Alert_E5DD5F8813113DD0_TypeDefinitionIndex = 12887;

	class Alert_E5DD5F8813113DD0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::Alert_E1B694816E36FF55* E04D2BE64FCE9814; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT_E5DD5F8813113DD0__CTOR_OFFSET))(this);
		}

		::System::Void A3FD24D058C629EB(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* AA7579420EDEA437)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT_E5DD5F8813113DD0_A3FD24D058C629EB_OFFSET))(this, E41EB813C7FB644A, AA7579420EDEA437);
		}

		::System::Void AED093DA9AC7A7F2(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E107201E5734AF59)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT_E5DD5F8813113DD0_AED093DA9AC7A7F2_OFFSET))(this, E41EB813C7FB644A, E107201E5734AF59);
		}
	};
}
