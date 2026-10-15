#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebExceptionStatus.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define SYSTEM_NET_WEBEXCEPTIONMAPPING_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F09CEE0)
#define SYSTEM_NET_WEBEXCEPTIONMAPPING_GETWEBSTATUSSTRING_OFFSET UNITYSDK_OFFSET(0x1F09CC90)

namespace System::Net
{
	class WebExceptionMapping : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_Mapping()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("System.Net", "WebExceptionMapping")->GetStaticField(0x2E260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTIONMAPPING_CCTOR_OFFSET))();
		}

		static ::System::String* GetWebStatusString(::System::Net::WebExceptionStatus a1)
		{
			return ((::System::String*(*)(::System::Net::WebExceptionStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTIONMAPPING_GETWEBSTATUSSTRING_OFFSET))(a1);
		}

	};
}
