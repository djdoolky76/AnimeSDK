#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HttpResponse; }

#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4F09A0)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_4__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__4_OFFSET UNITYSDK_OFFSET(0x1F4F09B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkInterface___c__DisplayClass12_4_TypeDefinitionIndex = 35145;

	template <typename T1, typename T2, typename T3, typename T4>
	class HoYoSDKNetworkInterface___c__DisplayClass12_4 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals4; // 0x10
		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* response; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_4__CTOR_OFFSET))(this);
		}

		::System::Void _HttpDnsHttpRequestWithCustomHandler_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_4__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__4_OFFSET))(this);
		}
	};
}
