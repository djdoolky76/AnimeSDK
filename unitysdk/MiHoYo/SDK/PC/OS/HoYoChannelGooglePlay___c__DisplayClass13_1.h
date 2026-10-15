#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS13_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF04030)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS13_1__VERIFYORDER_B__2_OFFSET UNITYSDK_OFFSET(0x1BF04130)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c__DisplayClass13_1_TypeDefinitionIndex = 8579;

	template <typename T>
	class HoYoChannelGooglePlay___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::MiHoYo::SDK::NetworkResponseModelEx* verifyResponse; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS13_1_CTOR_OFFSET))(this);
		}

		::System::Void _VerifyOrder_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS13_1__VERIFYORDER_B__2_OFFSET))(this);
		}

	};
}
