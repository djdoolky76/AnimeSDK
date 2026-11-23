#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Alert; }
namespace MiHoYo::SDK { class Alert_E1B694816E36FF55; }
namespace System { class String; }

#define MIHOYO_SDK_ALERT_EB309FF9B123828D_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A2A1B0)
#define MIHOYO_SDK_ALERT_EB309FF9B123828D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Alert_EB309FF9B123828D_TypeDefinitionIndex = 12872;

	class Alert_EB309FF9B123828D : public ::System::Object
	{
	public:
		::System::Boolean A0029F4E38B0F861; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* E0C0689B1CEBE48C; // 0x18
		::System::String* A59E604D1E9B8ED2; // 0x20
		::MiHoYo::SDK::Alert_E1B694816E36FF55* E04D2BE64FCE9814; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_EB309FF9B123828D__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Alert* AD74B83C8D7B5E64)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_EB309FF9B123828D_BF3138F24160F012_OFFSET))(this, AD74B83C8D7B5E64);
		}
	};
}
