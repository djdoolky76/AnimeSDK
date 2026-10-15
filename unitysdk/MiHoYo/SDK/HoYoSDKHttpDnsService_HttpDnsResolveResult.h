#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_HTTPDNSRESOLVERESULT_CTOR_OFFSET UNITYSDK_OFFSET(0xAFA6650)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKHttpDnsService_HttpDnsResolveResult_TypeDefinitionIndex = 46098;

	class HoYoSDKHttpDnsService_HttpDnsResolveResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* dns; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_HTTPDNSRESOLVERESULT_CTOR_OFFSET))(this);
		}

	};
}
