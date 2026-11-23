#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/Alert_FE2CBCAA6ADCE589.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define MIHOYO_SDK_UI_ALERT_E1B694816E36FF55_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define MIHOYO_SDK_UI_ALERT_E1B694816E36FF55__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6400)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Alert_E1B694816E36FF55_TypeDefinitionIndex = 12886;

	class Alert_E1B694816E36FF55 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT_E1B694816E36FF55__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::MiHoYo::SDK::UI::Alert_FE2CBCAA6ADCE589 E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Alert_FE2CBCAA6ADCE589))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT_E1B694816E36FF55_INVOKE_OFFSET))(this, E82293C0814051A5);
		}
	};
}
