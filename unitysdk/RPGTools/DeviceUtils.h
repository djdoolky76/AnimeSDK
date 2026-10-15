#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_DEVICEUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0xB0847D0)
#define RPGTOOLS_DEVICEUTILS_FORMATPOWER_OFFSET UNITYSDK_OFFSET(0xB084650)
#define RPGTOOLS_DEVICEUTILS_FORMATSIZE_OFFSET UNITYSDK_OFFSET(0xB084520)

namespace RPGTools
{
	class DeviceUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_MESSAGE_OBJECT_NAME()
		{
			return (::System::String**)UnitySDK::FromName("RPGTools", "DeviceUtils")->GetStaticField(0x39D60);
		}

		static ::System::String** StaticGet_MESSAGE_WIFI_STATE_CHANGED()
		{
			return (::System::String**)UnitySDK::FromName("RPGTools", "DeviceUtils")->GetStaticField(0x39D68);
		}

		static ::System::String** StaticGet_MESSAGE_BETTERY_CHANGED()
		{
			return (::System::String**)UnitySDK::FromName("RPGTools", "DeviceUtils")->GetStaticField(0x39D70);
		}

		static ::System::String** StaticGet_MESSAGE_WIFI_RSSI_CHANGED()
		{
			return (::System::String**)UnitySDK::FromName("RPGTools", "DeviceUtils")->GetStaticField(0x39D78);
		}

		// static const ::System::Object BATTERY_LEVEL_MAX; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEUTILS_CCTOR_OFFSET))();
		}

		static ::System::String* FormatSize(::System::Int64 a1)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEUTILS_FORMATSIZE_OFFSET))(a1);
		}

		static ::System::String* FormatPower(::System::Double a1)
		{
			return ((::System::String*(*)(::System::Double))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEUTILS_FORMATPOWER_OFFSET))(a1);
		}

	};
}
