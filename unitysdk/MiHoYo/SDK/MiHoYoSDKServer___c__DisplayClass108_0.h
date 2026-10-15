#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS108_0_CTOR_OFFSET UNITYSDK_OFFSET(0xAFDD0B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS108_0__GETREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0xAFDD0C0)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS108_0__GETREQUEST_B__1_OFFSET UNITYSDK_OFFSET(0xAFDD220)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer___c__DisplayClass108_0_TypeDefinitionIndex = 46322;

	class MiHoYoSDKServer___c__DisplayClass108_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKServer* __4__this; // 0x10
		::System::String* requestUrl; // 0x18
		::System::Action* callback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS108_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetRequest_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS108_0__GETREQUEST_B__0_OFFSET))(this, a1);
		}

		::System::Void _GetRequest_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS108_0__GETREQUEST_B__1_OFFSET))(this);
		}

	};
}
