#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/Confirm_E18B39FBD22EF1C5.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define MIHOYO_SDK_UI_CONFIRM_B5F0E06A8DBF23BA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define MIHOYO_SDK_UI_CONFIRM_B5F0E06A8DBF23BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6400)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Confirm_B5F0E06A8DBF23BA_TypeDefinitionIndex = 12996;

	class Confirm_B5F0E06A8DBF23BA : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_B5F0E06A8DBF23BA__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::MiHoYo::SDK::UI::Confirm_E18B39FBD22EF1C5 E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Confirm_E18B39FBD22EF1C5))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_B5F0E06A8DBF23BA_INVOKE_OFFSET))(this, E82293C0814051A5);
		}
	};
}
