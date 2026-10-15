#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class GooglePlayBillingPayInfo; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS17_2_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF04620)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS17_2__CHECKENTITLEMENTS_B__1_OFFSET UNITYSDK_OFFSET(0x1BF04630)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c__DisplayClass17_2_TypeDefinitionIndex = 8583;

	template <typename T1, typename T2>
	class HoYoChannelGooglePlay___c__DisplayClass17_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* payInfo; // 0x10
		::System::Object* CS___8__locals2; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS17_2_CTOR_OFFSET))(this);
		}

		::System::Void _CheckEntitlements_b__1(::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS17_2__CHECKENTITLEMENTS_B__1_OFFSET))(this, a1);
		}

	};
}
