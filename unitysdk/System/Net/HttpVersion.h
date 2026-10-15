#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Version; }

#define SYSTEM_NET_HTTPVERSION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F05C4C0)

namespace System::Net
{
	class HttpVersion : public ::System::Object
	{
	public:
		static ::System::Version** StaticGet_Version10()
		{
			return (::System::Version**)UnitySDK::FromName("System.Net", "HttpVersion")->GetStaticField(0xBEB0);
		}

		static ::System::Version** StaticGet_Version11()
		{
			return (::System::Version**)UnitySDK::FromName("System.Net", "HttpVersion")->GetStaticField(0xBEB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPVERSION_CCTOR_OFFSET))();
		}

	};
}
