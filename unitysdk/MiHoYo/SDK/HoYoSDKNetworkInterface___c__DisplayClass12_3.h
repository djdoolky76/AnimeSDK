#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HttpResponse; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_3_CTOR_OFFSET UNITYSDK_OFFSET(0xAFA79E0)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_3__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__4_OFFSET UNITYSDK_OFFSET(0xAFA7EC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkInterface___c__DisplayClass12_3_TypeDefinitionIndex = 46115;

	template <typename T1, typename T2, typename T3>
	class HoYoSDKNetworkInterface___c__DisplayClass12_3 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* response; // 0x10
		::System::Object* CS___8__locals3; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_3_CTOR_OFFSET))(this);
		}

		::System::Void _HttpDnsHttpRequestWithCustomHandler_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_3__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__4_OFFSET))(this);
		}

	};
}
