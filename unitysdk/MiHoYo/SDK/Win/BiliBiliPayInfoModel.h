#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WIN_BILIBILIPAYINFOMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x3A1A4B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliPayInfoModel_TypeDefinitionIndex = 12863;

	class BiliBiliPayInfoModel : public ::System::Object
	{
	public:
		::System::String* appKey; // 0x10
		::System::String* orderSign; // 0x18
		::System::String* zoneId; // 0x20
		::System::String* tradeNum; // 0x28
		::System::String* game_money; // 0x30
		::System::String* product_name; // 0x38
		::System::String* money; // 0x40
		::System::String* product_desc; // 0x48
		::System::String* username; // 0x50
		::System::String* role_name; // 0x58
		::System::String* extension_info; // 0x60
		::System::String* notify_url; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIPAYINFOMODEL__CTOR_OFFSET))(this);
		}
	};
}
