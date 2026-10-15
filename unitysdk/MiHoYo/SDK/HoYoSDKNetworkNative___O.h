#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HoYoNetworkHeaderCallback; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HoYoNetworkProgressCallback; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HoYoNetworkWriteCallback; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkNative___O_TypeDefinitionIndex = 46123;

	class HoYoSDKNetworkNative___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback** StaticGet__0___HoYoNetworkWriteInternalCallback()
		{
			return (::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkWriteCallback**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x22DE0);
		}

		static ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkProgressCallback** StaticGet__2___HoYoNetworkProgressInternalCallback()
		{
			return (::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkProgressCallback**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x22DE8);
		}

		static ::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback** StaticGet__1___HoYoNetworkHeaderInternalCallback()
		{
			return (::MiHoYo::SDK::HoYoSDKNetworkNative_HoYoNetworkHeaderCallback**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x22DF0);
		}

	};
}
