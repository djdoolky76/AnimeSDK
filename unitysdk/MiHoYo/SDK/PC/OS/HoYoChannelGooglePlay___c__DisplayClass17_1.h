#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class PurchaseData; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS17_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF04610)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c__DisplayClass17_1_TypeDefinitionIndex = 8582;

	template <typename T>
	class HoYoChannelGooglePlay___c__DisplayClass17_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::MiHoYo::SDK::PC::OS::PurchaseData* purchase; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS17_1_CTOR_OFFSET))(this);
		}

	};
}
