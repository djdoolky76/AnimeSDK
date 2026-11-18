#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOADEDRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1CF37C30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOADEDRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1CF37C20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOADEDRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF37C70)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelLoadedResult_TypeDefinitionIndex = 19936;

	class HoYoChannelLoadedResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOADEDRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOADEDRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelLoadedResult* FromJson(::System::String* json)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelLoadedResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOADEDRESULT_FROMJSON_OFFSET))(json);
		}
	};
}
