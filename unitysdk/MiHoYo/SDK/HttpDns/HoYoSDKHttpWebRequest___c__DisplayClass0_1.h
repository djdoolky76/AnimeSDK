#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class ManualResetEvent; }

#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_1_CTOR_OFFSET UNITYSDK_OFFSET(0xB611FD0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_1__GETRESPONSE_B__2_OFFSET UNITYSDK_OFFSET(0xB612EF0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_1__GETRESPONSE_B__3_OFFSET UNITYSDK_OFFSET(0xB612F40)

namespace MiHoYo::SDK::HttpDns
{
	inline static constexpr unsigned int HoYoSDKHttpWebRequest___c__DisplayClass0_1_TypeDefinitionIndex = 47733;

	template <typename T>
	class HoYoSDKHttpWebRequest___c__DisplayClass0_1 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Action_1<::System::String*>* __9__2; // 0x20
		::System::Threading::ManualResetEvent* mre; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_1_CTOR_OFFSET))(this);
		}

		::System::Void _GetResponse_b__2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_1__GETRESPONSE_B__2_OFFSET))(this, a1);
		}

		::System::Void _GetResponse_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_1__GETRESPONSE_B__3_OFFSET))(this);
		}

	};
}
