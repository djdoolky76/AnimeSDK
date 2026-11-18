#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelShowTextEntryInputScope.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWTEXTENTRYPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1E061EB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWTEXTENTRYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E061EC0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelShowTextEntryParams_TypeDefinitionIndex = 19901;

	class HoYoChannelShowTextEntryParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::String* title; // 0x20
		::System::String* description; // 0x28
		::System::String* defaultValue; // 0x30
		::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryInputScope scope; // 0x38
		::System::Int32 maxLength; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWTEXTENTRYPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSHOWTEXTENTRYPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
