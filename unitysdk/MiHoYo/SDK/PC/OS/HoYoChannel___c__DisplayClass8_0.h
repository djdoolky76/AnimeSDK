#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowErrorDialogResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF151F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS8_0__SHOWERRORDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x1BF21C60)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass8_0_TypeDefinitionIndex = 8499;

	class HoYoChannel___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowErrorDialog_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS8_0__SHOWERRORDIALOG_B__0_OFFSET))(this, a1);
		}

	};
}
