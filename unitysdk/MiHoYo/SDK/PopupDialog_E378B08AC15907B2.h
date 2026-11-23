#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PopupDialog_F8266C0B16ABD556.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define MIHOYO_SDK_POPUPDIALOG_E378B08AC15907B2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define MIHOYO_SDK_POPUPDIALOG_E378B08AC15907B2__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6400)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopupDialog_E378B08AC15907B2_TypeDefinitionIndex = 13010;

	class PopupDialog_E378B08AC15907B2 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_E378B08AC15907B2__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::MiHoYo::SDK::PopupDialog_F8266C0B16ABD556 E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopupDialog_F8266C0B16ABD556))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_E378B08AC15907B2_INVOKE_OFFSET))(this, E82293C0814051A5);
		}
	};
}
