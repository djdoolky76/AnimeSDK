#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class HoYoSDKNetworkInterface_CustomHttpRequestHandler; }
namespace System { class Object; }

#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_2_CTOR_OFFSET UNITYSDK_OFFSET(0xAFB0A00)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_2__GETRESPONSE_B__1_OFFSET UNITYSDK_OFFSET(0xAFB19B0)

namespace MiHoYo::SDK::HttpDns
{
	template <typename T1, typename T2>
	class HoYoSDKHttpWebRequest___c__DisplayClass0_2 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals2; // 0x10
		::MiHoYo::SDK::HoYoSDKNetworkInterface_CustomHttpRequestHandler* handler; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_2_CTOR_OFFSET))(this);
		}

		::System::Void _GetResponse_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_2__GETRESPONSE_B__1_OFFSET))(this);
		}

	};
}
