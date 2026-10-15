#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HttpResponse; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS5_2_CTOR_OFFSET UNITYSDK_OFFSET(0xAFA5EC0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS5_2__REQUESTHOSTADDR_B__4_OFFSET UNITYSDK_OFFSET(0xAFA6290)

namespace MiHoYo::SDK
{
	template <typename T1, typename T2>
	class HoYoSDKHttpDnsService___c__DisplayClass5_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* result; // 0x10
		::System::Object* CS___8__locals2; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS5_2_CTOR_OFFSET))(this);
		}

		::System::Void _RequestHostAddr_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS5_2__REQUESTHOSTADDR_B__4_OFFSET))(this);
		}

	};
}
