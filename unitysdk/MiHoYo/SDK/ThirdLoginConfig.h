#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/B4446D2DB4E409C2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_THIRDLOGINCONFIG_GETLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x3A67A40)
#define MIHOYO_SDK_THIRDLOGINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThirdLoginConfig_TypeDefinitionIndex = 13048;

	class ThirdLoginConfig : public ::System::Object
	{
	public:
		::System::String* token_type; // 0x10
		::System::Int64 game_token_expires_in; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THIRDLOGINCONFIG__CTOR_OFFSET))(this);
		}

		::BED79290917896D4::B4446D2DB4E409C2 GetLoginType()
		{
			return ((::BED79290917896D4::B4446D2DB4E409C2(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THIRDLOGINCONFIG_GETLOGINTYPE_OFFSET))(this);
		}
	};
}
