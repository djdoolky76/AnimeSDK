#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOBASESDK_MOCKFUNCTIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xAFC3D10)

namespace MiHoYo::SDK
{
	class MiHoYoBaseSDK_MockFunctionInfo : public ::System::Object
	{
	public:
		::System::String* method; // 0x10
		::System::String* response; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_MOCKFUNCTIONINFO_CTOR_OFFSET))(this);
		}

	};
}
