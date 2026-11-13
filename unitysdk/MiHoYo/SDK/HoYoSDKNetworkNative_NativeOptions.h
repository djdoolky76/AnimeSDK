#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_NATIVEOPTIONS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB4C6B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkNative_NativeOptions_TypeDefinitionIndex = 47151;

	class HoYoSDKNetworkNative_NativeOptions : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NETWORK_CONNECTION_LIMIT_OPTION()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "NativeOptions")->GetStaticField(0x1AC90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_NATIVEOPTIONS_CCTOR_OFFSET))();
		}

	};
}
