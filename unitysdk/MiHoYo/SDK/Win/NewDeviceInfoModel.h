#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/AEC94D491962623D.h"
#include "unitysdk/System/Object.h"

class FF1237522147A967;
namespace System { class String; }

#define MIHOYO_SDK_WIN_NEWDEVICEINFOMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x3A8EE00)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NewDeviceInfoModel_TypeDefinitionIndex = 12053;

	class NewDeviceInfoModel : public ::System::Object
	{
	public:
		::BED79290917896D4::AEC94D491962623D client; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* deviceName; // 0x18
		::System::String* deviceModel; // 0x20
		::System::String* deviceId; // 0x28
		::System::Int64 time; // 0x30

		::System::Void _ctor(::FF1237522147A967* F1DA3CEDFEA65142)
		{
			return ((::System::Void(*)(::PVOID, ::FF1237522147A967*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NEWDEVICEINFOMODEL__CTOR_OFFSET))(this, F1DA3CEDFEA65142);
		}
	};
}
