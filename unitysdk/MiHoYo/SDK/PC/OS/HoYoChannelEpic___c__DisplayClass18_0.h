#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class EpicPayInfo; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEpic; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC5700)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS18_0__PAY_B__0_OFFSET UNITYSDK_OFFSET(0x1DEC5710)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelEpic___c__DisplayClass18_0_TypeDefinitionIndex = 19805;

	class HoYoChannelEpic___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::HoYoChannelEpic* __4__this; // 0x10
		::System::String* productId; // 0x18
		::MiHoYo::SDK::PC::OS::EpicPayInfo* payInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__0(::System::Boolean canPay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS18_0__PAY_B__0_OFFSET))(this, canPay);
		}
	};
}
