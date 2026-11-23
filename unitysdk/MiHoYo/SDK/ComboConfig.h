#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FF1237522147A967;
namespace MiHoYo::SDK { class QRAppIcons; }
namespace MiHoYo::SDK { class QREnabledApps; }
namespace System { class String; }

#define MIHOYO_SDK_COMBOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x3ACCD90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ComboConfig_TypeDefinitionIndex = 12171;

	class ComboConfig : public ::System::Object
	{
	public:
		::System::Boolean protocol; // 0x10
		::System::Boolean qrEnabled; // 0x11
		::System::Byte _padding0[0x6];
		::System::String* announceURL; // 0x18
		::System::Boolean userCenterEnabled; // 0x20
		::System::Byte _padding1[0x7];
		::MiHoYo::SDK::QREnabledApps* qrEnabledApps; // 0x28
		::MiHoYo::SDK::QRAppIcons* qrAppIcons; // 0x30
		::System::String* qrAppDisplayName; // 0x38
		::System::String* qrCloudDisplayName; // 0x40

		::System::Void _ctor(::FF1237522147A967* F1DA3CEDFEA65142)
		{
			return ((::System::Void(*)(::PVOID, ::FF1237522147A967*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMBOCONFIG__CTOR_OFFSET))(this, F1DA3CEDFEA65142);
		}
	};
}
