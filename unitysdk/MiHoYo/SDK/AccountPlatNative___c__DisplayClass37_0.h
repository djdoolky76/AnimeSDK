#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__DISPLAYCLASS37_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6BCF50)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__DISPLAYCLASS37_0__HOYOSDKINTERNALNOTIFICATION_B__0_OFFSET UNITYSDK_OFFSET(0x1A6BD780)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatNative___c__DisplayClass37_0_TypeDefinitionIndex = 47124;

	class AccountPlatNative___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::String* strArgs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__DISPLAYCLASS37_0_CTOR_OFFSET))(this);
		}

		::System::Void _HoYoSDKInternalNotification_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__DISPLAYCLASS37_0__HOYOSDKINTERNALNOTIFICATION_B__0_OFFSET))(this);
		}

	};
}
