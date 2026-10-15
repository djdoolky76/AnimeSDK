#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_ABTESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC20EA0)

namespace MiHoYo::SDK
{
	class ABTestConfig : public ::System::Object
	{
	public:
		::System::String* cardType; // 0x10
		::System::String* cashierId; // 0x18
		::System::Boolean foldOther; // 0x20
		::System::Boolean expandMixedQRcode; // 0x21
		::System::Boolean disableMarket; // 0x22
		::System::Boolean cashierPreload; // 0x23
		::System::Byte _padding0[0x4];
		::System::String* levelQRCode; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ABTESTCONFIG_CTOR_OFFSET))(this);
		}

	};
}
